#ifndef JAVACODEFACTORY_H
#define JAVACODEFACTORY_H
#include "codefactory.h"
#include "javaclassunit.h"
#include "javamethodunit.h"
#include "javaprintoperatorunit.h"

class JavaCodeFactory : public CodeFactory
{
public:
    JavaCodeFactory() = default;
    ~JavaCodeFactory() override = default;

    std::shared_ptr<ClassUnit> createClass(const std::string& name) override;
    std::shared_ptr<MethodUnit> createMethod(const std::string& name, const std::string& returnType, Flags flags) override;
    std::shared_ptr<PrintOperatorUnit> createPrintOperator(const std::string& text) override;
};

#endif // JAVACODEFACTORY_H
