#ifndef CSRPCODEFACTORY_H
#define CSRPCODEFACTORY_H
#include "codefactory.h"
#include "csrpclassunit.h"
#include "csrpmethodunit.h"
#include "csrpprintoperatorunit.h"

class CSrpCodeFactory : public CodeFactory
{
public:
    CSrpCodeFactory() = default;
    ~CSrpCodeFactory() override = default;

    std::shared_ptr<ClassUnit> createClass(const std::string& name) override;
    std::shared_ptr<MethodUnit> createMethod(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> createPrintOperator(const std::string& text) override;
};

#endif // CSRPCODEFACTORY_H
