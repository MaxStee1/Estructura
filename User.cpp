#include "User.hpp"

User::User(string nom, string _pass){
    this -> userName = nom;
    this -> password = _pass;
}


void User::mostrarUsuario(){
    cout << "User: " <<userName << " / " << password << endl;
}

bool User::puedeAcceder(){
    return false;
}

string User::getName(){ return this -> userName; }

string User::getPass(){ return this -> password; }

void User::setName(string _nom){ userName = _nom; }

void User::setPass(string _pass){ password = _pass; }