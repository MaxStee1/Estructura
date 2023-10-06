#include "KidUser.hpp"

KidUser::KidUser(string _name, string _pass, int _age) : User(_name, _pass){
    if(_age < 18){
         this -> age = _age; 
    }else{
        cout << "la edad de " << getName() << " no puede superar los 17" << endl <<">>estableciendo edad maxima (17)<<" << endl;
        this -> age = 17;
    }
   
}

void KidUser::mostrarUsuario(){
    cout << "KidUser: " << getName() << " / " << getPass() << " / " <<age << endl;
}

int KidUser::getAge(){ return this -> age; }