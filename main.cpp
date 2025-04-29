#include "estructura.h"
#include <iostream>
#include "Jonathan/codigoJalonso.cpp"
#include "Joel/codigoJoel.cpp"
#include "alberto/alberto villavicencio.cpp"
#include "Escarlet/parte 2.cpp"

using namespace std;

map<string, Palabra> diccionario;
	
void crearPalabra();
void leerPalabras();
void actualizarPalabra();
void borrarPalabra();
void traducirCodigo();
void cargarDiccionario();

void menu(){
	int opcion;
    do {
        cout << "\n--- MENU ---" << endl;
        cout << "1. Crear palabra" << endl;
        cout << "2. Leer palabras" << endl;
        cout << "3. Actualizar palabra" << endl;
        cout << "4. Borrar palabra" << endl;
        cout << "5. Traducir codigo" << endl;
        cout << "6. Salir" << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch(opcion) {
            case 1: crearPalabra(); break;
            case 2: leerPalabras(); break;
            case 3: actualizarPalabra(); break;
            case 4:	borrarPalabra(); break;
            case 5: traducirCodigo(); break;
            case 6: cout << "Saliendo..." << endl; break;
            default: cout << "Opcion invalida." << endl;
        }
    } while (opcion != 6);
}

int main(){
	cargarDiccionario();
	 menu();
	return 0;
	}
