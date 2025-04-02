//
// Created by USUARIO on 2/04/2025.
//

#include "Persona.h"
#include <iostream>
using namespace std;

// &nombre, evita hacer copia de la cadena y ahorra memoria al pasar la por referencia
Persona::Persona(const string &nombre, int edad) {
    this->nombre = nombre;
    this->edad = edad;
}

void Persona::mostrarEdad() {
    cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
}

