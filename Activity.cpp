
#include "Activity.hpp"
#include <iostream>
#include <string>
#include "Room.hpp"
#include "Person.hpp"

Activity::Activity(Person* n_Owner, Room* n_Room,std::string n_Type){
    nOwner=n_Owner;
    nRoom=n_Room;
    nType=n_Type;
}

std::ostream & operator<<(std::ostream & os, Activity & a)
{
    os << a.nType;
    os << "--- Person in charge: ";
    os << *(a.nOwner);
    os << "--- Room Traits: " ;
    os << *(a.nRoom);
    
    return os;
}
