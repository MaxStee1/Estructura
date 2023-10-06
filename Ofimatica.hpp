#ifndef OFIMATICA_HPP
#define OFIMATICA_HPP

#include "Software.hpp"
#include <list>

class Ofimatica : public Software{
    private:
        list<string> archivos;
    public:
        Ofimatica(string,string,int,list<User*>,double);
        Ofimatica(string,string,int,double);
        void verSoftware();
        int getCantArchivos();
        void agregarArchivo(string);
};

#endif // OFIMATICA_HPP

