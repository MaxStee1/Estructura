#ifndef BIBLIOTECA_HPP
#define BIBLIOTECA_HPP

#include "User.hpp"
#include "KidUser.hpp"
#include "NormalUser.hpp"
#include "AdminUser.hpp"
#include "Software.hpp"
#include "Juego.hpp"
#include "Ofimatica.hpp"
#include "Produccion.hpp"
#include "Seguridad.hpp"

#include <iostream>
#include <list>
using namespace std;

class Biblioteca{
    private:
        list<User*> listaUsuarios;
        list<Software*> listaSoftwares;
    public:
        Biblioteca(list<User*>,list<Software*>);
        void agregarUsuario(User*);
        void agregarSoftware(Software*);
        void eliminarUsuario(User*);
        void eliminarSoftware(Software*);
        void buscarSoftware(string);
        list<User*> getUsuarios();
        list<Software*> getSoftwares();
};

#endif // BIBLIOTECA_HPP