#include "Juego.hpp"

Juego::Juego(string _name, string _developer, int _minAge, list<User*> users, double _price,string _gen) : Software(_name,_developer,_minAge,users,_price){
    this -> genero = _gen;
}

Juego::Juego(string _name, string _developer, int _minAge, double _price,string _gen) : Software(_name,_developer,_minAge,_price){
    this -> genero = _gen;
}

void Juego::verSoftware(){
    cout << "Juego: " << getName() << " | " << getDev() << " | " << getAge() << " | $" << getPrice() << " | " << genero << endl;
}

string Juego::getGenero(){ return this->genero; }

void Juego::setGenero(string _gen){ this -> genero = _gen; }