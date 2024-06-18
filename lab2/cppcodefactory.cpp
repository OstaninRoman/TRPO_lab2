#include "cppcodefactory.h"

std::shared_ptr<ClassUnit> CppCodeFactory::createClass(const std::string& name) {
    return std::make_shared<CppClassUnit>(name);
};
std::shared_ptr<MethodUnit> CppCodeFactory::createMethod(const std::string& name, const std::string& returnType, Flags flags) {
    return std::make_shared<CppMethodUnit>(name, returnType, flags);
};
std::shared_ptr<PrintOperatorUnit> CppCodeFactory::createPrintOperator(const std::string& text) {
    return std::make_shared<CppPrintOperatorUnit>(text);
};

