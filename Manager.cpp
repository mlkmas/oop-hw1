#include "Manager.h"
#include <string.h>
#include <iostream>

Manager::Manager():id(0),birthYear(0),firstName("~"),lastName("~")
{}
std::string Manager::getFirstName() const
{
    return firstName;
}

std::string Manager::getLastName()const
{
    return lastName;
}
int Manager::getBirthYear()const
{
    return birthYear;
}
int Manager::getId()const
{
    return id;
}
void Manager::setBirthYear(int birthYear)
{
   this->birthYear=birthYear;
}
void Manager::setFirstName(const std::string& firstName)
{
    if(firstName.length()>10)
        this->firstName="~";
    else   
        this->firstName=firstName;
        
}
void Manager::setLastName(const std::string& lastName)
{
     if(lastName.length()>10)
        this->lastName="~";
    else   
        this->lastName=lastName;
}

void Manager::print()
{
    std::cout << "Printing manager:" << std::endl;
    std::cout << "Id : " << id << std::endl;
    std::cout << "First name : " << firstName << std::endl;
    std::cout << "Last name : " << lastName << std::endl;
    std::cout << "Birth year : " << birthYear << std::endl;

}