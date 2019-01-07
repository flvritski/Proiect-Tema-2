
#include "Room.hpp"
#include <iostream>
#include <vector>
#include <string>


Room::Room(std::string rType, int rCode, int rFloor, int rCapacity){
    type=rType;
    code=rCode;
    floor=rFloor;
    capacity=rCapacity;
}

int Room::getRoomCode(){
    return code;
}

int Room::getRoomFloor(){
    return floor;
}

std::ostream & operator<<(std::ostream & os, const Room & r){
    os<<"Type: \n"<<r.type<<"\nCode: \n"<<r.code<<"\nFloor: \n"<<r.floor<<"\nCapacity :\n"<<r.capacity<<"\n";
    return os;
}
