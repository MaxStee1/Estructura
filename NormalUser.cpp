#include "NormalUser.hpp"

NormalUser::NormalUser(string _name, string _pass, int _edad, string _email) : User(_name, _pass){
    if(_edad >= 18){
         this -> age = _edad; 
    }else{
        cout << "la edad de " << getName() << " no puede ser menor a 18" << endl <<">>estableciendo edad minima (18)<<" << endl;
        this -> age = 18;
    }
    this -> email = _email;
}

int NormalUser::getAge(){ return this -> age; }

string NormalUser::getEmail(){ return this -> email; }

void NormalUser::mostrarUsuario(){
    cout << "NormalUser: " << getName() << " / " << getPass() << " / " << age << " / " <<  email << endl;
    
}