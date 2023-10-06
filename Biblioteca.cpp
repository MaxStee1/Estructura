#include "Biblioteca.hpp"

Biblioteca::Biblioteca(list<User *> usuarios, list<Software *> softwares){
    this -> listaUsuarios = usuarios;
    this -> listaSoftwares = softwares;
}

void Biblioteca::agregarUsuario(User *usuario){
    listaUsuarios.push_back(usuario);
}

void Biblioteca::agregarSoftware(Software* s){
    listaSoftwares.push_back(s);
}

void Biblioteca::eliminarUsuario(User * user){
    this -> listaUsuarios.remove(user);
}

void Biblioteca::eliminarSoftware(Software * software){
    this -> listaSoftwares.remove(software);
}

void Biblioteca::buscarSoftware(string nombre){
    for(Software* s : listaSoftwares){
        if(s -> getName() == nombre){
            s -> verSoftware();
        }
    }
}

list<User *> Biblioteca::getUsuarios(){
    return this -> listaUsuarios;
}

list<Software *> Biblioteca::getSoftwares()
{
    return this -> listaSoftwares;
}
