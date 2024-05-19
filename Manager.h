#ifndef _MANAGER_H_
#define _MANAGER_H_

#include <iostream>
#include<string.h>

class Manager
{
private:
    int id;
    std::string firstName;
    std::string lastName;
    int birthYear;


public:
    
    Manager();
    int getId()const;
    int getBirthYear() const;
    std::string getFirstName()const;
    std::string getLastName()const;
    void setId(int id);
    void setBirthYear(int birthName);
    void setFirstName(const std::string&);
    void setLastName(const std::string&);
    void print();
   // ~Manager();

};




#endif
