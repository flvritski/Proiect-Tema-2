
#include "PersonRepo.hpp"
#include <stdexcept>
#include <algorithm>

void PersonRepo::add(Person* p){
    persRepo.push_back(p);
}

Person* PersonRepo::getByFirstName(std::string first){
    for(size_t i=0;i<persRepo.size();i++)
        if(persRepo[i]->getFirstName()==first)
            return persRepo[i];
        throw std::invalid_argument("Nu exista");
}

Person* PersonRepo::getByCNP(std::string cnp){
    for(size_t i=0;i<persRepo.size();i++)
        if(persRepo[i]->getFirstName()==cnp)
            return persRepo[i];
    throw std::invalid_argument("Nu exista");
}

void PersonRepo::deleteByCNP(std::string cnp){
    Person* p= getByCNP(cnp);
    persRepo.erase(std::remove(persRepo.begin(), persRepo.end(), p),persRepo.end());
}

Person* PersonRepo::at(int index){
    if (index < persRepo.size())
        return persRepo.at(index);
    throw std::invalid_argument("Persoana nu exista!");
}
