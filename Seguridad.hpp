#ifndef SEGURIDAD_HPP
#define SEGURIDAD_HPP

#include "Software.hpp"

class Seguridad : public Software{
    private:
        string tipo;
    public:
        Seguridad(string,string,int,list<User*>,double,string);
        Seguridad(string,string,int,double,string);
        void verSoftware();
        string getTipo();
};

#endif // SEGURIDAD_HPP