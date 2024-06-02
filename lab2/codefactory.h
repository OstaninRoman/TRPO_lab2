#ifndef CODEFACTORY_H
#define CODEFACTORY_H
#include "unit.h"
#include "classunit.h"
#include "methodunit.h"
#include "printoperatorunit.h"

class CodeFactory
{
public:
    using Flags = unsigned int;
    CodeFactory() = default;
   virtual ~CodeFactory() = default;

    virtual std::shared_ptr<ClassUnit> createClass(const std::string& name) = 0;
    virtual std::shared_ptr<MethodUnit> createMethod(const std::string& name, const std::string& returnType, Flags flags) = 0;
    virtual std::shared_ptr<PrintOperatorUnit> createPrintOperator(const std::string& text) = 0;
};

#endif // CODEFACTORY_H
