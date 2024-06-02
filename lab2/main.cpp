#include <QCoreApplication>
#include "codefactory.h"
#include "cppcodefactory.h"


std::string generateProgram(std::shared_ptr<CodeFactory>& factory) {
    std::shared_ptr<ClassUnit> myClass = factory->createClass(std::string("MyClass"));
    myClass->add(factory->createMethod("testFunc1","void", 0),ClassUnit::PUBLIC);
    myClass->add(factory->createMethod("testFunc2","void", MethodUnit::STATIC),ClassUnit::PRIVATE);
    myClass->add(factory->createMethod("testFunc3","void",MethodUnit::VIRTUAL | MethodUnit::CONST),ClassUnit::PRIVATE);
    auto method = factory->createMethod( "testFunc4", "void", MethodUnit::STATIC );
    method->add(
    factory->createPrintOperator( R"(Hello world!\n)"), 0);
    myClass->add( method, ClassUnit::PROTECTED );
    return myClass->compile();
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    std::shared_ptr<CodeFactory> factory = std::make_shared<CppCodeFactory>();
    std::cout << generateProgram(factory) << std::endl;

    return a.exec();
}
