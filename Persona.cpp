#include "Persona.hpp"

Persona::Persona(int edad)
{
    this->edad = edad;
    this->genero = (rand()%2);
    this->dni = (char*) "123456789";
}

int Persona::getEdad(){
    return this->edad;
}
bool Persona::esMujer(){
    return this->genero;
}
void Persona::setEdad(int edad){
    this->edad = edad;
}
void Persona::mostrar(){
    string sexo = "El hombre";
    if (genero){
        sexo = "La mujer";
    }
        
    cout << sexo << " con DNI " << this->dni << " tiene " << this->edad << " anyos." << endl;
}

Persona::~Persona()
{
}

