#ifndef PRODUCCION_HPP
#define PRODUCCION_HPP

#include "Software.hpp"

class Produccion : public Software{
    private:
        string solucion;
    public:
        Produccion(string,string,int,list<User*>,double,string);
        Produccion(string,string,int,double,string);
        void verSoftware();
        string getSolucion();
};

#endif // PRODUCCION_HPP