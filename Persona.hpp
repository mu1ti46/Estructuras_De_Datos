#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
#include <iomanip>

using namespace std;
class Persona
{
public:
    Persona(int edad);
    ~Persona();
    int getEdad();
    bool esMujer();
    void setEdad(int edad);
    void mostrar();
private:
    bool genero; //0 hombre, 1 mujer
    int edad;
    char* dni;
    
};

#endif // PERSONA_HPP
