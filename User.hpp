#ifndef USER_HPP
#define USER_HPP

#include <iostream>
using namespace std;

class User{
    private:
        string userName;
        string password;
    public:
        User(string,string);
        virtual void mostrarUsuario();
        virtual bool puedeAcceder();
        string getName();
        string getPass();
        void setName(string);
        void setPass(string);
        
};

#endif // USER_HPP