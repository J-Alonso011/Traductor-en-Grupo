#include "estructura.h"
#include <iostream>
#include <string>
#include <map> 

using namespace std;

void guardarDiccionario();

void actualizarPalabra() {
    string palabra;
    cout << "Ingrese la palabra que desea actualizar: ";
    cin >> palabra;
    if (diccionario.find(palabra) != diccionario.end()) {
        string nuevaTraduccion, nuevaFuncionalidad;
        cin.ignore();
        cout << "Nueva traduccion: ";
        getline(cin, nuevaTraduccion);
        cout << "Nueva funcionalidad: ";
        getline(cin, nuevaFuncionalidad);
        Palabra p;
        p.traduccion = nuevaTraduccion;
        p.funcionalidad = nuevaFuncionalidad;
        diccionario[palabra] = p;
        guardarDiccionario();
    } else {
        cout << "Palabra no encontrada." << endl;
    }
}

void borrarPalabra() {
    string palabra;
    cout << "Ingrese la palabra que desea borrar: ";
    cin >> palabra;
    if (diccionario.erase(palabra)) {
        cout << "Palabra eliminada." << endl;
        guardarDiccionario();
    } else {
        cout<<"Palabra No entontrada."<< endl; 
		 }
}
