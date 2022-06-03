#ifndef ARTISTA_H
#define ARTISTA_H
#include "persona.h"

class artista:public persona
{
    public:
    
    artista();                                                  //constructor por defecto
    artista(string, string, string, int, char, string, string); //constructor por parametrizacion
    artista(const artista&);                                    //Constructor por copia
    ~artista();                                                 //destructor por defecto
    
    
    //getter, se utilizan para la salida de sus datos desde el main.
    string getNombreArtistico();
    string getGeneroMusical();
    fecha getFechaEvento();

    //setter, se utilizan para la entrada de sus datos desde el main.
    void setNombreArtistico(string newNombreArtistico);
    void setGeneroMusical(string newGeneroMusical);
    void setFechaEvento(int newFechaEventoDia, int newFechaEventoMes, int newFechaEventoAho);
    
    //funcion que nos permite visualizar los artistas
    
    void verArtista();

    private:
    
    string nombreArtistico;
    string generoMusical;
    fecha fechaEvento;
};

#endif