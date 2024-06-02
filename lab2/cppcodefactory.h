#ifndef CPPCODEFACTORY_H
#define CPPCODEFACTORY_H
#include "codefactory.h"
#include "cppclassunit.h"
#include "cppmethodunit.h"
#include "cppprintoperatorunit.h"

class CppCodeFactory : public CodeFactory
{
public:
    CppCodeFactory() = default;
    ~CppCodeFactory() override = default;

    std::shared_ptr<ClassUnit> createClass(const std::string& name) override;
    std::shared_ptr<MethodUnit> createMethod(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> createPrintOperator(const std::string& text) override;
};

#endif // CPPCODEFACTORY_H
