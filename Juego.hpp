#ifndef JUEGO_HPP
#define JUEGO_HPP

#include "Software.hpp"

class Juego : public Software{
    private:
        string genero;
    public:
        Juego(string,string,int,list<User*>,double,string);
        Juego(string,string,int,double,string);
        void verSoftware();
        string getGenero();
        void setGenero(string);
};

#endif // JUEGO_HPP