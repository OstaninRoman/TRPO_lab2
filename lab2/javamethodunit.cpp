#include "javamethodunit.h"

std::string JavaMethodUnit::compile(unsigned int level) const
{
    std::string result = generateShift(level);
    if(m_flags & MethodUnit::STATIC){
        result += "static ";
    }else if(m_flags & MethodUnit::ABSTRACT){
        result += "abstract ";
        result += (m_returnType + "();");
        return result;
    }else if(m_flags & MethodUnit::FINAL){
        result += "final ";
    }else if(m_flags)
        qWarning("This modifier not exist in Java");
    result += m_returnType + " ";
    result += m_name + " () ";
    if(m_flags & MethodUnit::CONST){
        qWarning("This modifier not exist in Java");}
    result += " {\n";
    for(const auto& b : m_body){
        result += b->compile(level + 1);
    }
    result += generateShift(level) + "}\n";
    return result;
}
