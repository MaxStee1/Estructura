#include "AdminUser.hpp"

AdminUser::AdminUser(string _name, string _pass, int _edad, string _email) : User(_name, _pass){
    this -> age = _edad;
    this -> email = _email;
}

int AdminUser::getAge(){ return this -> age; }

string AdminUser::getEmail(){ return this -> email; }

void AdminUser::mostrarUsuario(){
    cout << "AdminUser: " << getName() << " / " << getPass() << " / " << age << " / " <<  email << endl;
}

bool AdminUser::puedeAcceder(){
    return true;
}