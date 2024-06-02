#ifndef CSRPMETHODUNIT_H
#define CSRPMETHODUNIT_H
#include "methodunit.h"

class CSrpMethodUnit : public MethodUnit
{
public:
    CSrpMethodUnit(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name, returnType, flags){};
    void add(const std::shared_ptr<Unit>& unit, Flags ) override{
        m_body.push_back(unit);
    };
    std::string compile(unsigned int level = 0) const override;
};

#endif // CSRPMETHODUNIT_H
