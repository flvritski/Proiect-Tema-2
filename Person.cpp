
#include "Person.hpp"
#include "Role.hpp"
#include <iostream>
#include <vector>
#include <string>
Person::Person(std::string n_firstName, std::string n_lastName, std::string n_cnp, std::string n_email){
    firstName=n_firstName;
    lastName=n_lastName;
    cnp=n_cnp;
    email=n_email;
}

Person::Person(const Person &p){
    firstName=p.firstName;
    lastName=p.lastName;
    cnp=p.cnp;
    email=p.email;
}

void Person::setNrCursuri(int n_nrCursuri){
    nrCursuri=n_nrCursuri;
}

std::string Person::getFirstName(){
    return firstName;
}

std::string Person::getLastName(){
    return lastName;
}

int Person::getNrCursuri(){
    return nrCursuri;
}

std::istream& operator>>(std::istream & is, Person & p){
    is>>p.firstName>>p.lastName>>p.cnp>>p.email;
    return is;
}

void Person::addRole(Role* role){
    n_Roles.push_back(role);
}

std::ostream & operator<<(std::ostream & os, const Person & p){
    std::vector<std::string> nRoles;
    nRoles.push_back("Student Role");
    nRoles.push_back("Teacher Role");
    nRoles.push_back("Staff Role");
    nRoles.push_back("Guest Role");
    os<<"First Name: \n"<<p.firstName<<"\nLast Name: \n"<<p.lastName<<"\nCNP :\n"<<p.cnp<<"\nEmail: \n"<<p.email<<"\n";
    if((p.n_Roles).size()>0){
        os<<"Roluri: ";
        for(size_t i=0;i<(p.n_Roles).size();i++){
            os<<nRoles[((p.n_Roles)[i])->getType()]<<' ';
        }
    }
    os<<std::endl;
    return os;
}
