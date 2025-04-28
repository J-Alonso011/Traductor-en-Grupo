#include <iostream>
#include "Jonathan/codigoJalonso.cpp"

using namespace std;
	
void crearPalabra();
void leerPalabras();
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
            case 3: 
            case 4:	
            case 5: 
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
