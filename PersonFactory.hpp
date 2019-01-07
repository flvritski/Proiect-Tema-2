
#ifndef PersonFactory_hpp
#define PersonFactory_hpp

#include <stdio.h>
#include "Person.hpp"

class PersonFactory{
public:
    void createStud(Person*);
    void createTeach(Person*);
};
#endif 
