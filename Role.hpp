
#ifndef Role_hpp
#define Role_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

typedef enum{
    STUDENT_ROLE,
    TEACHER_ROLE,
    STAFF_ROLE,
    GUEST_ROLE
}RoleType;

class Role{
protected:
    RoleType nType;
public:
    Role(RoleType type);
    RoleType getType();
};

#endif 
