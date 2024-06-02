#include "csrpcodefactory.h"

std::shared_ptr<ClassUnit> CSrpCodeFactory::createClass(const std::string& name) {
    return std::make_shared<CSrpClassUnit>(name);
}

std::shared_ptr<MethodUnit> CSrpCodeFactory::createMethod(const std::string& name, const std::string& returnType, Flags flags) {
    return std::make_shared<CSrpMethodUnit>(name, returnType, flags);
}

std::shared_ptr<PrintOperatorUnit> CSrpCodeFactory::createPrintOperator(const std::string& text) {
    return std::make_shared<CSrpPrintOperatorUnit>(text);
}
