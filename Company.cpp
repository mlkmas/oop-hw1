#include <string.h>
#include <iostream>
#include "Company.h"

Company::Company(const std::string& name):shopNumber(0)
{
    if(name.length()>10)
    {
        std::cout<< "Company name lenght is too long"<< std::endl;
        this->name="~";
    }
    else this->name=name;

    //check later
    for (int i=0; i< MAX_Shop_NUMBER;i++) 
    {
        shops[i] = Shop();
    }
}
std::string Company::getName()const
{
    return name;
}
int Company::getShopNumber()const
{
    return shopNumber;
}
void Company::setShopNumber(const int number)
{
    if(number<0 || number>10)
    {
        this->shopNumber=0;
    }
    else this->shopNumber=number;
}
void Company::setName(const std::string& name)
{
    if(name.length()>10)
    {
         std::cout<< "Company name lenght is too long"<< std::endl;
        this->name="~";
    }
    else this->name=name;
}
void Company::addShop(const Shop& shop)
{
    if(this->shopNumber>=MAX_Shop_NUMBER)
    {
        std::cout<< "There is no place for new Shop! "<<std::endl;
    }
    else
    {
        this->shops[shopNumber]=shop;
        shopNumber++;
    }
}
void Company::printShopByName()
{
    int current=0,swap=0,sortedOrder[MAX_Shop_NUMBER]={0};
        for(int i=0;i<shopNumber;i++)
        {
            sortedOrder[i]=i;
        }
        for(int i=0;i<shopNumber-1;i++)
        {
            for(int j=i;j<shopNumber;j++)
            {
                if(shops[sortedOrder[i]].getName()>shops[sortedOrder[j]].getName())
                {
                  swap=sortedOrder[j];
                  sortedOrder[j]=sortedOrder[i];
                  sortedOrder[i]=swap;
                }
            }
        }
        for(int i=0;i<shopNumber;i++)
        {
            shops[sortedOrder[i]].print();
        }
        
}
void Company::printShopByName()
{
   for(int i=0;i<7;i++)
   {
    for(int j=0;j<shopNumber;j++)
    {
        if(shops[j].getClosedDay()==Day(i))
        {
            shops[j].print();
        }
    }
   }
}



