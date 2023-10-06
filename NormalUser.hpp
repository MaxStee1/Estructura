#ifndef NORMALUSER_HPP
#define NORMALUSER_HPP

#include "User.hpp"

class NormalUser : public User{
    private:
        int age;
        string email;
        
    public:
        NormalUser(string,string,int,string);
        void mostrarUsuario();
        int getAge();
        string getEmail();
        
};

#endif // NORMALUSER_HPP