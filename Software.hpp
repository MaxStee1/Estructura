#ifndef SOFTWARE_HPP
#define SOFTWARE_HPP

#include <iostream>
#include <list>

#include "KidUser.hpp"
#include "NormalUser.hpp"
#include "AdminUser.hpp"

using namespace std;

class Software{
    private:
        string name;
        string developer;
        int minAge;
        list <User*> userList;
        double price;
    
    public:
        Software(string,string,int,list<User*>,double);
        Software(string,string,int,double);
        virtual void verSoftware();
        void addUser(User*);
        void viewUsers();
        string getName();
        string getDev();
        int getAge();
        double getPrice();
        
};

#endif // SOFTWARE_HPP