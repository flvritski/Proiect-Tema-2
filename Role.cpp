
#include "Role.hpp"
#include <iostream>

Role::Role(RoleType type){
    nType=type;
}

RoleType Role::getType(){
    return nType;
}
