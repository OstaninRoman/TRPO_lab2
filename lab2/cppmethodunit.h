#ifndef CPPMETHODUNIT_H
#define CPPMETHODUNIT_H
#include "methodunit.h"

class CppMethodUnit : public MethodUnit
{
public:
    CppMethodUnit(const std::string& name, const std::string& returnType, Flags flags):MethodUnit(name, returnType, flags){};
    void add( const std::shared_ptr< Unit >& unit, Flags) override {
        m_body.push_back( unit );
    }
    std::string compile( unsigned int level = 0 ) const override;
};

#endif // CPPMETHODUNIT_H
