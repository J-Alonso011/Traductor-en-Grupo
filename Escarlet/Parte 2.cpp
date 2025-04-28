#include "estructura.h"
#include <iostream>
#include <string>
#include <map> 
using namespace std;
void guardarDiccionario();

void crearPalabra() {
    string palabra, traduccion, funcionalidad;
    cout << "Ingrese palabra: ";
    cin >> palabra;
    cin.ignore();
    cout << "Ingrese traduccion: ";
    getline(cin, traduccion);
    cout << "Ingrese funcionalidad: ";
    getline(cin, funcionalidad);
    Palabra p;
    p.traduccion = traduccion;
    p.funcionalidad = funcionalidad;
    diccionario[palabra] = p;
    guardarDiccionario();
}

void leerPalabras() {
    cout << "Listado de palabras:" << endl;
    map<string, Palabra>::iterator it;
    for (it = diccionario.begin(); it != diccionario.end(); it++) {
        cout << "Palabra: " << it->first << endl;
        cout << "Traduccion: " << it->second.traduccion << endl;
        cout << "Funcionalidad: " << it->second.funcionalidad << endl;
        cout << "-----------------------------" << endl;
    }
}
