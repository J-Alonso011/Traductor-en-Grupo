#ifndef ESTRUCTURA_H
#define ESTRUCTURA_H

#include <string>
#include <map>
using namespace std;

struct Palabra {
    string traduccion;
    string funcionalidad;
};

extern map<string, Palabra> diccionario;

#endif

