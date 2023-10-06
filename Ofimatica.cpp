#include "Ofimatica.hpp"

Ofimatica::Ofimatica(string _nom, string _developer, int _minAge, list<User*> users, double _price) : Software(_nom,_developer,_minAge,_price){}
    
    
Ofimatica::Ofimatica(string _name, string _developer, int _minAge, double _price) : Software(_name,_developer,_minAge,_price){}

void Ofimatica::verSoftware(){
    cout << "Ofimatica: " << getName() << " | " << getDev() << " | " << getAge() << " | $" << getPrice() << " | " << getCantArchivos() << endl;
}

int Ofimatica::getCantArchivos(){ 
    int total = archivos.size();
    return total;
}

void Ofimatica::agregarArchivo(string newArchivo){
    archivos.push_back(newArchivo);
}