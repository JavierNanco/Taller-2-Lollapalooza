#include "artista.h"

artista::artista()
{
    //se crea el constructor por defecto
    this->nombreArtistico="";
    this->generoMusical="";
    //this->fechaEvento="";
}

artista::artista(string nombre, string apellidoPaterno, string apellidoMaterno, int rut, char digitoVerificador, string nombreArtistico, string generoMusical):persona(nombre, apellidoPaterno, apellidoMaterno, rut, digitoVerificador)
{
    //se crea el constructor por parametrización
    this->nombreArtistico=nombreArtistico;
    this->generoMusical=generoMusical;
    //this->fechaEvento=fechaEvento;
}

artista::artista(const artista& b)
{
    //se crea el constructor por copia
    
    this->nombreArtistico=b.nombreArtistico;
    this->generoMusical=b.generoMusical;
    //this->fechaEvento=b.fechaEvento;
}

//getter: su función es permitir el obtener el valor de una propiedad de la clase y así poder utilizar dicho valor en diferentes métodos.
//setter: su función permite brindar acceso a propiedades especificas para poder asignar un valor fuera de la clase.

string artista::getNombreArtistico()
{
  return this->nombreArtistico;
}
void artista::setNombreArtistico(string newNombreArtistico)
{
    this->nombreArtistico = newNombreArtistico;
}



string artista::getGeneroMusical()
{
  return this->generoMusical;
}
void artista::setGeneroMusical(string newGeneroMusical)
{
    this->generoMusical = newGeneroMusical;
}


void artista::setFechaEvento(int newFechaEventoDia, int newFechaEventoMes, int newFechaEventoAho)
{
    this->fechaEvento.setDia(newFechaEventoDia);
    this->fechaEvento.setMes(newFechaEventoMes);
    this->fechaEvento.setAho(newFechaEventoAho);
}
fecha artista::getFechaEvento(){
    return this->fechaEvento;
}




void artista::verArtista()
{ 
    cout << "nombre artistico   : " << this->nombreArtistico << endl;
    cout << "genero musical     : " << this->generoMusical << endl;
    cout << endl;
}



artista::~artista() //se crea el destructor. Se inicia automaticamente al final del programa.
{
  
}