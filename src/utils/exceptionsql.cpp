#include "exceptionsql.h"

void ExceptionSQL::raise() const{
    throw *this;
}

ExceptionSQL *ExceptionSQL::close() const{
    return new ExceptionSQL(*this);
}
