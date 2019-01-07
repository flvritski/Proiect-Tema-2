//

#ifndef Person_hpp
#define Person_hpp

#include <stdio.h>
#include <iostream>
#include <vector>
#include <string>
#include "Role.hpp"

class Person{
protected:
    std::string firstName;
    std::string lastName;
    std::string cnp;
    std::string email;
    int nrCursuri;
    std::vector<Role*> n_Roles;
public:
    Person()=default;
    Person(std::string n_firstName, std::string n_lastName, std::string n_cnp, std::string n_email);
    Person(const Person & p);
    void setNrCursuri(int n_nrCursuri);
    std::string getFirstName();
    std::string getLastName();
    std::string getCNP();
    int getNrCursuri();
    void addRole(Role* role);
    friend std::istream& operator>>(std::istream &is, Person & p);
    friend std::ostream& operator<<(std::ostream &os,const Person &p);
    
};

#endif 
