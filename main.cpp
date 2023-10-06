#include "Biblioteca.hpp"

#include <iostream>
#include <list>

void eliminarSoftware(Biblioteca* biblio){
    list<Software*> listaSoftwares = biblio -> getSoftwares();
    int opcion;
    cout << "software que desea eliminar: "<<endl;
    cout << "[1] juego" << endl;
    cout << "[2] Ofimatica" << endl;
    cout << "[3] Produccion" << endl;
    cout << "[4] Navegador" << endl;
    cout << "[5] Seguridad" << endl;
    cout << "[6] Social" << endl;
    cin >> opcion;

     int eliminado;
    int contador =1;
    switch (opcion)
    {
    case 1:
        cout << "estos son los juegos disponibles: "<<endl;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Juego*>(s) != nullptr) {
                cout<<"["<<contador<<"]";
                s ->verSoftware();
                contador++;
            }
        }
        cout<<"cual juego desea eliminar: ";
        cin >> eliminado;
        contador = 1;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Juego*>(s) != nullptr) {
                if(contador == eliminado){
                    cout<<"eliminando: "<<endl;
                    s ->verSoftware();
                    biblio ->eliminarSoftware(s);
                }   
            contador++;
            }
        }       
        break;

    case 2:
        cout << "estos son los softwares de Ofimatica disponibles: "<<endl;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Ofimatica*>(s) != nullptr) {
                cout<<"["<<contador<<"]";
                s ->verSoftware();
                contador++;
            }
        }
        cout<<"cual software desea eliminar: ";
        cin >> eliminado;
        contador = 1;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Ofimatica*>(s) != nullptr) {
                if(contador == eliminado){
                    cout<<"eliminando: "<<endl;
                    s ->verSoftware();
                    biblio ->eliminarSoftware(s);
                }   
            contador++;
            }
        }
        break;

    case 3:
        cout << "estos son los softwares de produccion disponibles: "<<endl;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Produccion*>(s) != nullptr) {
                cout<<"["<<contador<<"]";
                s ->verSoftware();
                contador++;
            }
        }
        cout<<"ccual software desea eliminar ";
        cin >> eliminado;
        contador = 1;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Produccion*>(s) != nullptr) {
                if(contador == eliminado){
                    cout<<"eliminando: "<<endl;
                    s ->verSoftware();
                    biblio ->eliminarSoftware(s);
                }   
            contador++;
            }
        }
        break;

    case 5:
        cout << "estos son los softwares de seguridad  disponibles: "<<endl;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Seguridad*>(s) != nullptr) {
                cout<<"["<<contador<<"]";
                s ->verSoftware();
                contador++;
            }
        }
        cout<<"cual software desea eliminar: ";
        cin >> eliminado;
        contador = 1;
        for(Software* s : listaSoftwares){
            if (dynamic_cast<Seguridad*>(s) != nullptr) {
                if(contador == eliminado){
                    cout<<"eliminando: "<<endl;
                    s ->verSoftware();
                    biblio ->eliminarSoftware(s);
                }   
            contador++;
            }
        }
        break;

    default:
        cout<<"opcion invalida"<<endl;
        break;
    }
}

void agregarSoftware(Biblioteca* biblio){
    string name, dev, extra;
    int age;
    double price;
    int opcion;
    cout<< "seleccione un tipo de software para agregar"<<endl;
    cout << "[1] juego" << endl;
    cout << "[2] Ofimatica" << endl;
    cout << "[3] Produccion" << endl;
    cout << "[4] Navegador" << endl;
    cout << "[5] Seguridad" << endl;
    cout << "[6] Social" << endl;
    cin >> opcion;

    switch (opcion){
    case 1:
        cout<<"nombre: ";
        cin >> name;
        cout<<"desarrollador: ";
        cin >> dev;
        cout<<"edad minima: ";
        cin >> age;
        cout << "precio: ";
        cin >> price;
        cout<<"genero: ";
        cin >> extra;
        biblio -> agregarSoftware(new Juego(name,dev,age,price,extra));
        cout<<"software agregado con exito"<<endl;
        break;

    case 2:
        cout<<"nombre: ";
        cin >> name;
        cout<<"desarrollador: ";
        cin >> dev;
        cout<<"edad minima: ";
        cin >> age;
        cout << "precio: ";
        cin >> price;
        biblio -> agregarSoftware(new Ofimatica(name,dev,age,price));
        cout<<"software agregado con exito"<<endl;
        break;

    case 3:
        cout<<"nombre: ";
        cin >> name;
        cout<<"desarrollador: ";
        cin >> dev;
        cout<<"edad minima: ";
        cin >> age;
        cout << "precio: ";
        cin >> price;
        cout<<"tipo (video/musica/streaming/fotos): ";
        cin >> extra;
        biblio -> agregarSoftware(new Produccion(name,dev,age,price,extra));
        cout<<"software agregado con exito"<<endl;
        break;
    case 4:
        break;
    case 5: //crear un nuevo fotware de seguridad
        cout<<"nombre: ";
        cin >> name;
        cout<<"desarrollador: ";
        cin >> dev;
        cout<<"edad minima: ";
        cin >> age;
        cout << "precio: ";
        cin >> price;
        cout<<"tipo de malware(Ransomware, Spyware, botnets, rootkits, gusanos, troyanos): ";
        cin >> extra;
        biblio -> agregarSoftware(new Seguridad(name,dev,age,price,extra));
        cout<<"software agregado con exito"<<endl;
        break;

    default:
        cout << "opcion invalida"<<endl;
        break;
    }

}

void buscarSoftware(Biblioteca* biblio){
    list<Software*> listaSoftwares = biblio -> getSoftwares();
    string nombreSoftware;
    cout << "nombre del software: ";
    cin >> nombreSoftware;
    cout << "resultados de la busqueda: " << endl;

    bool encontrado = false;  // Variable para verificar si se encontró algún resultado

    for (Software* s : listaSoftwares){
        if (s->getName() == nombreSoftware){
            s->verSoftware();
            encontrado = true;  // Se encontró al menos un resultado
            break;
        }
    }

    if (!encontrado){
        cout << "No se han encontrado resultados para '" << nombreSoftware << "'" << endl;
    }
}


void acciones(Biblioteca* biblioteca){
    int opcion;
    while(true){
        cout << "  MENU ADMIN  " << endl;
        cout << "[1] agregar software"<<endl;
        cout << "[2] eliminar software"<<endl;
        cout << "[3] buscar software"<<endl;
        cout << "[4] salir"<<endl;
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            agregarSoftware(biblioteca);
            break;
        case 2:
            eliminarSoftware(biblioteca);
            break;
        case 3:
            buscarSoftware(biblioteca);
            break;
        case 4:
            cout << "Programa finalizado" << endl;
            return; // Salir del bucle y de la función
        default:
            break;
        }
    }
    
}

void menuAdmin(Biblioteca* biblio){
    int opcion;

    while (true) {
        cout << "  MENU ADMIN  " << endl;
        cout << "[1] agregar software" << endl;
        cout << "[2] eliminar software" << endl;
        cout << "[3] buscar software" << endl;
        cout << "[4] agregar usuario" << endl;
        cout << "[5] eliminar usuario" << endl;
        cout << "[6] ver Usuarios" << endl;
        cout << "[7] ver Softwares" << endl;
        cout << "[8] salir" << endl;
        cout << "elija una opcion: ";
        cin >> opcion;

        switch (opcion){
            case 1:
                agregarSoftware(biblio);
                break;
            case 2:
                eliminarSoftware(biblio);
                break;
            case 3:
                buscarSoftware(biblio);
                break;
            case 4:
                // Agregar lógica para agregar usuario
                break;
            case 5:
                // Agregar lógica para eliminar usuario
                break;
            case 6:
                cout<<""<<endl;
                cout << "Usuarios en la base de datos: " << endl;
                for(User* u : biblio -> getUsuarios()){
                    cout << "-";
                    u -> mostrarUsuario();
                }
                break;
            case 7:
                cout << "Softwares en la base de datos: " << endl;
                for(Software* s : biblio -> getSoftwares()){
                    cout << "-";
                    s -> verSoftware();
                }
                break;
            case 8:
                cout << "Programa finalizado" << endl;
                return; // Salir del bucle y de la función
            default:
                cout << "Opción inválida. Por favor, seleccione una opción válida." << endl;
                break;
        }
    }
}


void iniciarSesion(Biblioteca* biblioteca){
    list<User*> listaUsuarios = biblioteca -> getUsuarios();
    list<Software*> listaSoftwares = biblioteca -> getSoftwares();
    string userName;
    string pass;
    cout << "ingrse su nombre de usuario: ";
    cin >> userName;
    cout << "ingrese su contrasenia: ";
    cin >> pass;

    for(User* user : listaUsuarios){
        if(user -> getName() == userName && user -> getPass() == pass){
            if(user -> puedeAcceder() ){
                cout << "iniciando sesion como admin"<<endl;
                menuAdmin(biblioteca);
            }else{
                cout << "sesion iniciada"<<endl;
                acciones(biblioteca);
            }
            return;
        }else{
            cout << "error en el inicio de sesion, verifica tus credenciales"<<endl;
        }
    }
}

void welcome(Biblioteca* biblioteca){
    int opcion;
    cout << "*** MENU ***"<< endl;
    cout << "";
    cout << "[1] iniciar sesion"<<endl;
    cout << "[2] salir" <<endl;

    cin >> opcion;

    switch (opcion)
    {
    case 1:
        iniciarSesion(biblioteca);
        break;
    case 2:
        cout << "finalizando programa";
        break;

    default:
        cout<<"opcion invalida";
        break;
    }

    while(opcion != 2){
        cout << "*** MENU ***"<< endl;
        cout << "";
        cout << "[1] iniciar sesion con otro usuario"<<endl;
        cout << "[2] salir" <<endl;

        cin >> opcion;

        
        switch (opcion){
        case 1:
           iniciarSesion(biblioteca);
          break;
        case 2:
            cout << "finalizando programa";
            break;

        default:
            cout<<"opcion invalida";
            break;
        }
    }
}

int main() {
    list<User*> listaUsuarios;
    list<Software*> listaSoftwares;

    // Crear el administrador
    listaUsuarios.push_back(new AdminUser("Max", "epico", 19, "locomax@gmail.com"));
    // Crear niños
    listaUsuarios.push_back(new KidUser("Pedro", "1234", 17));
    listaUsuarios.push_back(new KidUser("Julian", "444", 12));
    listaUsuarios.push_back(new KidUser("Ana", "abc", 14));
    listaUsuarios.push_back(new KidUser("Luis", "xyz", 15));
    // Crear usuarios normales
    listaUsuarios.push_back(new NormalUser("Benja", "qqqwwweee", 20, "blamc@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Laura", "password1", 25, "laura@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Carlos", "secreto", 30, "carlos@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Maria", "clave123", 28, "maria@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Elena", "contraseña", 22, "elena@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Juan", "abcdefg", 19, "juan@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Marta", "123456", 27, "marta@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Diego", "987654", 24, "diego@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Sofia", "abcdef", 18, "sofia@gmail.com"));
    listaUsuarios.push_back(new NormalUser("Lucas", "abc123", 21, "lucas@gmail.com"));
    
    
    //for(User* user : listaUsuarios){
    //   user -> mostrarUsuario();
    //}
    
    // Crear Juegos
    listaSoftwares.push_back(new Juego("Aliens Attack", "Hector", 18, 18000, "Supervivencia")); //+18
    listaSoftwares.push_back(new Juego("Space Adventure", "Galactic Games", 10, 25000, "Supervivencia"));
    listaSoftwares.push_back(new Juego("Warriors of Valor", "Epic Studios", 12, 2999, "FPS"));
    listaSoftwares.push_back(new Juego("Tactical Ops", "Strategic Games", 18, 1999, "FPS")); //+18
    listaSoftwares.push_back(new Juego("Kingdoms of Magic", "Fantasy Creations", 10, 1999, "MMO"));
    listaSoftwares.push_back(new Juego("Starship Commanders", "Galactic Studios", 16, 3999, "MMO"));
    listaSoftwares.push_back(new Juego("Puzzle Mania", "Brain Teasers Inc.", 3, 999, "PUZZLE"));
    listaSoftwares.push_back(new Juego("Mystery Mansion", "Mystery Games", 8, 1499, "PUZZLE"));
    listaSoftwares.push_back(new Juego("Epic Fantasy Quest", "Fantasy Studios", 18, 2999, "RPG")); //+18
    listaSoftwares.push_back(new Juego("Cyberpunk Chronicles", "FutureTech Games", 18, 3499, "RPG")); //+18
    listaSoftwares.push_back(new Juego("Super Jumper", "Platformer Inc.", 6, 1499, "Plataformas"));
    listaSoftwares.push_back(new Juego("Adventures of the Little Hero", "Tiny Games", 6, 1999, "Plataformas"));
    listaSoftwares.push_back(new Juego("Empire Builder", "Strategy Masters", 12, 2499, "Estrategia en tiempo real"));
    listaSoftwares.push_back(new Juego("Warlords of Conquest", "Battle Tactics Inc.", 14, 2999, "Estrategia en tiempo real"));
    listaSoftwares.push_back(new Juego("Flight Simulator X", "SimulCo", 10, 3499, "Simulación"));
    listaSoftwares.push_back(new Juego("City Builder Tycoon", "Urban Simulations", 12, 1999, "Simulación"));
    listaSoftwares.push_back(new Juego("Mystery Island", "Adventure Games", 10, 2499, "Aventura"));
    listaSoftwares.push_back(new Juego("Lost in Time", "Time Travel Studios", 18, 2999, "Aventura"));  //+18
    listaSoftwares.push_back(new Juego("Soccer Mania 2023", "Sports Simulations", 6, 2999, "Deportes"));
    listaSoftwares.push_back(new Juego("Basketball Slam Dunk", "Sports Simulations", 6, 2999, "Deportes"));
       
    //Crear softwares de Ofimatica 
    listaSoftwares.push_back(new Ofimatica("Microsoft Office", "Microsoft", 14, 6500));
    listaSoftwares.push_back(new Ofimatica("LibreOffice", "The Document Foundation", 0, 7000));
    listaSoftwares.push_back(new Ofimatica("Google Workspace", "Google", 0, 2000));
    listaSoftwares.push_back(new Ofimatica("WPS Office", "Kingsoft", 0, 25000));
    listaSoftwares.push_back(new Ofimatica("Apache OpenOffice", "Apache Software Foundation", 0, 0));

    // crear softwares de produccion
    listaSoftwares.push_back(new Produccion("Adobe Premiere Pro", "Adobe Inc.", 18, 20000, "Video"));
    listaSoftwares.push_back(new Produccion("Ableton Live", "Ableton AG", 18, 9000, "Música"));
    listaSoftwares.push_back(new Produccion("OBS Studio", "Comunidad de código abierto", 0, 0, "Streaming"));
    listaSoftwares.push_back(new Produccion("Adobe Photoshop", "Adobe Inc.", 18, 18000, "Fotos"));

    //crear softwares de seguridad
    listaSoftwares.push_back(new Seguridad("Malwarebytes Anti-Ransomware", "Malwarebytes Corporation", 0, 0.0, "Ransomware"));
    listaSoftwares.push_back(new Seguridad("Spybot - Search & Destroy", "Safer-Networking Ltd.", 0, 0.0, "Spyware"));
    listaSoftwares.push_back(new Seguridad("Norton 360", "Norton (Symantec)", 0, 49.99, "Botnets"));
    listaSoftwares.push_back(new Seguridad("McAfee Total Protection", "McAfee, LLC", 0, 29.99, "Rootkits"));
    listaSoftwares.push_back(new Seguridad("ESET NOD32 Antivirus", "ESET", 0, 39.99, "Gusanos"));
    listaSoftwares.push_back(new Seguridad("Kaspersky Internet Security", "Kaspersky Lab", 0, 39.99, "Troyanos"));


    // for(Software* s : listaSoftwares){
    //    s -> verSoftware();
    //}
    Biblioteca* biblioteca = new Biblioteca(listaUsuarios,listaSoftwares);
    welcome(biblioteca);
    return 0;
}
