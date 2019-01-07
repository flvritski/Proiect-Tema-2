
#ifndef Activity_hpp
#define Activity_hpp

#include <stdio.h>
#include <string>
#include <vector>
#include "Room.hpp"
#include "Person.hpp"

class Activity{
public:
    Activity(Person* n_Owner, Room* n_Room,std::string n_Type);
    void assignRoom(Room& room);
    friend std::ostream& operator<<(std::ostream& os, Activity & a);
protected:
    std::vector<std::string> mAllowedRoles;
    Room* nRoom;
    Person* nOwner;
    std::string nDescription, nType;
};
#endif 
