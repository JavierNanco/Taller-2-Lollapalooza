#include "fecha.h"

fecha::fecha()
{
  //se crea el constructor por defecto
    this->dia=0;
    this->mes=0;
    this->aho=0;
}

fecha::fecha(int dia, int mes, int aho)
{
    //se crea el constructor por parametrización
    this->dia=dia;
    this->mes=mes;
    this->aho=aho;
}

fecha::fecha(const fecha& f)
{
    //se crea el constructor por copia
    
    this->dia=f.dia;
    this->mes=f.mes;
    this->aho=f.aho;
}

//getter: su función es permitir el obtener el valor de una propiedad de la clase y así poder utilizar dicho valor en diferentes métodos.
//setter: su función permite brindar acceso a propiedades especificas para poder asignar un valor fuera de la clase.

int fecha::getDia()
{
    return this->dia;
}
void fecha::setDia(int newDia)
{
    this->dia = newDia;
}



int fecha::getMes()
{
    return this->mes;
}
void fecha::setMes(int newMes)
{
    this->mes = newMes;
}


int fecha::getAho()
{
    return this->aho;
}
void fecha::setAho(int newAho)
{
    this->aho = newAho;
}


void fecha::verFecha() //nos permite utilizar parametros de la clase asistente con la funcion ver.
{ 
    cout << "Dia " << this->dia;
    cout << " mes " << this->mes;
    cout << " año " << this->aho;
    cout << endl;
    cout << endl;
}



fecha::~fecha() //se crea el destructor. Se inicia automaticamente al final del programa.
{
  
}