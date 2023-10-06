#include "Software.hpp"

Software::Software(string _name, string _developer, int _minAge, list<User*> users, double _price){
    this -> name = _name;
    this -> developer = _developer;
    this -> minAge = _minAge;
    this -> userList = users;
    this -> price = _price;
}

Software::Software(string _name, string _developer, int _minAge, double _price){
    this -> name = _name;
    this -> developer = _developer;
    this -> minAge = _minAge;
    this -> price = _price;
}

void Software::verSoftware(){
    cout << "Software: " << name << " | " << developer << " | " << minAge << " | " << price << endl;
}

void Software::addUser(User* u){
    userList.push_back(u);
}

void Software::viewUsers(){
    for(User* user : userList){
        user -> mostrarUsuario();
    }
}

string Software::getName(){ return this -> name; }
string Software::getDev(){ return this -> developer; }
int Software::getAge(){ return this -> minAge; }
double Software::getPrice(){ return this -> price; }