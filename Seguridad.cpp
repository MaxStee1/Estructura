#include "Seguridad.hpp"

Seguridad::Seguridad(string _name, string _developer, int _minAge, list<User*> users, double _price,string _tipo) : Software(_name,_developer,_minAge,users,_price){
    this -> tipo = _tipo;
}

Seguridad::Seguridad(string _name, string _developer, int _minAge, double _price,string _tipo) : Software(_name,_developer,_minAge,_price){
    this -> tipo = _tipo;
}

void Seguridad::verSoftware(){
    cout << "Seguridad: " << getName() << " | " << getDev() << " | " << getAge() << " | $" << getPrice() << " | " << tipo << endl;
}

string Seguridad::getTipo()
{
    return this -> tipo;
}
