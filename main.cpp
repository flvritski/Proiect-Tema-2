#include <iostream>
#include "Person.hpp"
#include "Room.hpp"
#include "Role.hpp"
#include "PersonRepo.hpp"
#include "RoomRepo.hpp"
#include "PersonFactory.hpp"
#include "Activity.hpp"

int main(){
    std::cout<<std::endl;
    PersonRepo pers;
    RoomRepo room;
    Person p("andrei", "gigel", "1991124297278", "kid.yankee@yahoo.com");
    //pers.add(&p);
    Person* pp=new Person();
    Room *rr=new Room("laborator", 2222,1,30);
    Room* rr2= new Room("curs", 2323, 2, 400);
    pers.add(pp);
    room.add(rr);
    std::cin>>*pp;
    std::cout<<p;
    std::cout<<*(pers.at(0));
    std::cout<<*(room.at(0));
    room.deleteByCode(2222);
    //std::cout<<*(room.at(0));
    PersonFactory pf;
    pf.createTeach(pp);
    Person* p1 = new Person();
    std::cin>>*p1;
    pf.createStud(p1);
    pers.add(pp);
    pers.add(p1);
   // pers.deleteByCNP("1991124297278");
    std::cout<<*(pers.at(0))<<std::endl<<*(pers.at(1));
    Activity a(p1,rr2,"seminar");
    std::cout<<a;
    return 0;
}
