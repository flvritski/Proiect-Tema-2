
#include "PersonFactory.hpp"

#include "StudentRole.hpp"
#include "TeacherRole.hpp"

void PersonFactory::createStud(Person* p){
    StudentRole* studRole = new StudentRole();
    p->addRole(studRole);
}

void PersonFactory::createTeach(Person* p){
    TeacherRole* teachRole = new TeacherRole();
    p->addRole(teachRole);
}
