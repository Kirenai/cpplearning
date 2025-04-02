//
// Created by USUARIO on 2/04/2025.
//

// Include guard, para evitar que el archivo se incluya más de una vez
#ifndef PERSONA_H
#define PERSONA_H
#include <string>


class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(const std::string &nombre, int edad);
    void mostrarEdad();
};



#endif //PERSONA_H
