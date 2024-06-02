#ifndef CSRPCLASSUNIT_H
#define CSRPCLASSUNIT_H
#include "classunit.h"

class CSrpClassUnit : public ClassUnit
{
public:
    static const std::vector<std::string> ACCESS_MODIFIERS;
    explicit CSrpClassUnit(const std::string &name):ClassUnit(name){
        ClassUnit::m_fields.resize(ACCESS_MODIFIERS.size());
    };
    void add(const std::shared_ptr<Unit>& unit, Flags flags) override;
    std::string compile(unsigned int level = 0) const override;
};

#endif // CSRPCLASSUNIT_H
