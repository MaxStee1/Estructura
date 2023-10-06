#ifndef KIDUSER_HPP
#define KIDUSER_HPP

#include "User.hpp"

class KidUser : public User{
    private:
        int age;
        
    public:
        KidUser(string, string, int);
        void mostrarUsuario();
        int getAge();
};

#endif // KIDUSER_HPP