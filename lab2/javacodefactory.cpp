#include "javacodefactory.h"

std::shared_ptr<ClassUnit> JavaCodeFactory::createClass(const std::string& name) {
    return std::make_shared<JavaClassUnit>(name);
}

std::shared_ptr<MethodUnit> JavaCodeFactory::createMethod(const std::string& name, const std::string& returnType, Flags flags) {
    return std::make_shared<JavaMethodUnit>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> JavaCodeFactory::createPrintOperator(const std::string& text) {
    return std::make_shared<JavaPrintOperatorUnit>(text);
}
