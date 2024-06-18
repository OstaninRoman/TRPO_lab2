#ifndef JAVACLASSUNIT_H
#define JAVACLASSUNIT_H
#include "classunit.h"

class JavaClassUnit : public ClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;
    explicit JavaClassUnit(const std::string &name):ClassUnit(name){
        ClassUnit::m_fields.resize(ACCESS_MODIFIERS.size());
    };
    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVACLASSUNIT_H
