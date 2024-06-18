#ifndef JAVAMETHODUNIT_H
#define JAVAMETHODUNIT_H
#include "methodunit.h"

class JavaMethodUnit : public MethodUnit
{
public:
    JavaMethodUnit(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name, returnType, flags){};
    void add(const std::shared_ptr<Unit>& unit, Flags ) override{
        m_body.push_back(unit);
    };
    std::string compile(unsigned int level = 0) const override;
};

#endif // JAVAMETHODUNIT_H
