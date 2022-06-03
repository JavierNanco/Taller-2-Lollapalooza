#include "direccion.h"

direccion::direccion()
{
  //se crea el constructor por defecto
    this->calle="";
    this->numero=0;
    this->comuna="";
}

direccion::direccion(string calle, int numero, string comuna)
{
    //se crea el constructor por parametrización
    this->calle=calle;
    this->numero=numero;
    this->comuna=comuna;
}

direccion::direccion(const direccion& d)
{
    //se crea el constructor por copia
    
    this->calle=d.calle;
    this->numero=d.numero;
    this->comuna=d.comuna;
}

//getter: su función es permitir el obtener el valor de una propiedad de la clase y así poder utilizar dicho valor en diferentes métodos.
//setter: su función permite brindar acceso a propiedades especificas para poder asignar un valor fuera de la clase.

string direccion::getCalle()
{
    return this->calle;
}
void direccion::setCalle(string newCalle)
{
    this->calle = newCalle;
}



int direccion::getNumero()
{
    return this->numero;
}
void direccion::setNumero(int newNumero)
{
    this->numero = newNumero;
}


string direccion::getComuna()
{
    return this->comuna;
}
void direccion::setComuna(string newComuna)
{
    this->comuna = newComuna;
}

void direccion::verDireccion()
{ 
    cout << "calle      : " << this->calle  << endl;
    cout << "numero     : " << this->numero << endl;
    cout << "comuna     : " << this->comuna << endl;
    cout << endl;
}


direccion::~direccion() //se crea el destructor. Se inicia automaticamente al final del programa.
{
  
}