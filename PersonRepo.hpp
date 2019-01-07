
#ifndef PersonRepo_hpp
#define PersonRepo_hpp
#include "Person.hpp"

class PersonRepo{
protected:
    std::vector<Person*> persRepo;
public:
    void add(Person* p);
    void deleteByCNP(std::string cnp);
    Person* getByFirstName(std::string first);
    Person* getByCNP(std::string cnp);
    Person* at(int index);
    
};




#endif 
