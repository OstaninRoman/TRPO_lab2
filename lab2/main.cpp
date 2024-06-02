#include <QCoreApplication>
#include "cppcodefactory.h"
#include "csrpcodefactory.h"
#include "javacodefactory.h"

std::string generateProgram(std::shared_ptr<CodeFactory>& factory, std::string ClassName) {
    std::shared_ptr<ClassUnit> myClass = factory->createClass(std::string(ClassName));
    myClass->add(factory->createMethod("testFunc1","void", 0),ClassUnit::PRIVATE_PROTECTED);
    myClass->add(factory->createMethod("testFunc2","void", MethodUnit::STATIC),ClassUnit::INTERNAL);
    myClass->add(factory->createMethod("testFunc3","void",MethodUnit::VIRTUAL | MethodUnit::CONST), ClassUnit::PRIVATE);
    auto method = factory->createMethod( "testFunc4", "void", MethodUnit::STATIC );
    method->add(
    factory->createPrintOperator( R"(Hello world!\n)"), 0);
    myClass->add( method, ClassUnit::PROTECTED );
    return myClass->compile();
}

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);

    std::shared_ptr<CodeFactory> Cppfactory = std::make_shared<CppCodeFactory>();
    std::cout << generateProgram(Cppfactory, "MyCppClass") << std::endl;

    std::shared_ptr<CodeFactory> CSrpfactory = std::make_shared<CSrpCodeFactory>();
    std::cout << generateProgram(CSrpfactory, "MyCSrpClass") << std::endl;

    std::shared_ptr<CodeFactory> Javafactory = std::make_shared<JavaCodeFactory>();
    std::cout << generateProgram(Javafactory, "MyJavaClass") << std::endl;

    return a.exec();
}
