#include "cppmethodunit.h"

std::string CppMethodUnit::compile( unsigned int level) const
{
    std::string result = generateShift( level );
    if( m_flags & STATIC ) {
        result += "static ";
    } else if( m_flags & VIRTUAL ) {
        result += "virtual ";
    }else if(m_flags)
        qWarning("This modifier not exists in C++");
    result += m_returnType + " ";
    result += m_name + "()";
    if( m_flags & CONST ) {
        result += " const";
    }
    result += " {\n";
    for( const auto& b : m_body ) {
        result += b->compile( level + 1 );
    }
    result += generateShift( level ) + "}\n";
    return result;
}
