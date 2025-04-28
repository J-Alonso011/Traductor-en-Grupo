#include <iostream>
#include <string>

using namespace std;

extern map<string, Palabra> diccionario;
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
        diccionario[palabra] = {nuevaTraduccion, nuevaFuncionalidad};
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
        cout << "Palabra no encontrada." << endl;
    }
}
