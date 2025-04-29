#include "estructura.h"
#include <iostream>
#include <sstream>
#include <string>
using namespace std;



void traducirCodigo() {
    cin.ignore();
    cout << "Ingrese el codigo (finalizar con una linea que diga FIN):" << endl;
    string linea, codigoOriginal;
    while (getline(cin, linea)) {
        if (linea == "FIN") break;
        codigoOriginal += linea + "\n";
    }

    istringstream stream(codigoOriginal);
    string palabra;
    while (getline(stream, linea)) {
        istringstream palabras(linea);
        while (palabras >> palabra) {
            string limpio = "";
             for (int i = 0; i < palabra.length(); i++) {
                if ((palabra[i] >= 'a' && palabra[i] <= 'z') || 
                    (palabra[i] >= 'A' && palabra[i] <= 'Z') || 
                    (palabra[i] >= '0' && palabra[i] <= '9') || 
                    palabra[i] == '_') {
                    limpio += palabra[i];
                }
            }
            if (diccionario.find(limpio) != diccionario.end()) {
                cout << diccionario[limpio].traduccion << " ";
            } else {
                cout << palabra << " ";
            }
        }
        cout << endl;
    }

    cout << "\n_Interpretacion de llaves: " << endl;
    stream.clear();
    stream.seekg(0, ios::beg);

    while (getline(stream, linea)) {
        for (int i = 0; i < linea.length(); i++) {
            char c = linea[i];
            if (c == '{') {
                cout << "inicio ";
            } else if (c == '}') {
                cout << "fin ";
            }
        }
        cout << endl;
    }
}
