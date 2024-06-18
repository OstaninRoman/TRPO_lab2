#ifndef CSRPPRINTOPERATORUNIT_H
#define CSRPPRINTOPERATORUNIT_H
#include "printoperatorunit.h"

class CSrpPrintOperatorUnit : public PrintOperatorUnit
{
public:
    explicit CSrpPrintOperatorUnit(const std::string& text) : PrintOperatorUnit(text){};

    std::string compile(unsigned int level = 0) const override{
        return generateShift(level) + "printf(\"" + m_text+"\");\n";
    };
};

#endif // CSRPPRINTOPERATORUNIT_H
