#include <iostream>
#include <sstream>
#include <string>
#include <map>
using namespace std;

extern map<string,Palabra> diccionario;

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
            for (char c : palabra) {
                if (isalnum(c) || c == '_') {
                    limpio += c;
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
        for (char c : linea) {
            if (c == '{') {
                cout << "inicio ";
            } else if (c == '}') {
                cout << "fin ";
            }
        }
        cout << endl;
    }
}
