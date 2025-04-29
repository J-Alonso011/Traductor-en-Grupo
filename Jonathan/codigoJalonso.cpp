#include "estructura.h"
#include <fstream>
#include <string>
using namespace std;

void cargarDiccionario() {
    ifstream archivo("diccionario.txt");
    string palabra, traduccion, funcionalidad;
    while (getline(archivo, palabra)) {
        getline(archivo, traduccion);
        getline(archivo, funcionalidad);
        Palabra p;
        p.traduccion = traduccion;
        p.funcionalidad = funcionalidad;
        diccionario[palabra] = p;
    }
    archivo.close();
}

void guardarDiccionario() {
    ofstream archivo("diccionario.txt");
    map<string, Palabra>::iterator it;
    for (it = diccionario.begin(); it != diccionario.end(); it++) {
        archivo << it->first << endl;
        archivo << it->second.traduccion << endl;
        archivo << it->second.funcionalidad << endl;
    }
    archivo.close();
}
