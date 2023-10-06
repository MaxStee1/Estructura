#ifndef ADMINUSER_HPP
#define ADMINUSER_HPP

#include "User.hpp"

class AdminUser : public User{
    private:
        int age;
        string email;
        
    public:
        AdminUser(string,string,int,string);
        void mostrarUsuario();
        bool puedeAcceder();
        int getAge();
        string getEmail();
};

#endif // ADMINUSER_HPP