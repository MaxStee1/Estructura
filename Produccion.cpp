#include "Produccion.hpp"


Produccion::Produccion(string _name, string _developer, int _minAge, list<User*> users, double _price,string _solucion) : Software(_name,_developer,_minAge,users,_price){
    this -> solucion = _solucion;
}

Produccion::Produccion(string _name, string _developer, int _minAge, double _price,string _solucion) : Software(_name,_developer,_minAge,_price){
    this -> solucion = _solucion;
}

void Produccion::verSoftware(){
    cout << "Produccion: " << getName() << " | " << getDev() << " | " << getAge() << " | $" << getPrice() << " | " << solucion << endl;
}

string Produccion::getSolucion()
{
    return this -> solucion;
}
