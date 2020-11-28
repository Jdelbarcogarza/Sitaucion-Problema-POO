
#ifndef Restaurante_h
#define Restaurante_h
#include <iostream>

class Restaurante
{
    //Se declaran atributos del restaurante. Estos contienen datos generales que el cliente debe saber
    private:

        string nombre;
        string direccion;
        string telefono;
        string tipoDeComida;
        string cuentaFacebook;
        string cuentaInstagram;
        string cuentaTwitter;

    public:

        //Constructor de la clase
        Restaurante();
        Restaurante(string nombre, string direccion, string telefono, string tipoDeComida,
                    string cuentaFacebook, string cuentaTwitter, string cuentaInstagram);

        //getter methods
        
        string getNombreRestaurante();
        string getDireccionRestaurante();
        string getTelefonoRestaurante();
        string getTipoDeComidaRestaurante();
        

        //setter methods

        void setNombreRestaurante(string _nombreRestaurante);
        void setDireccionRestaurante(string _direccionRestaurante);
        void setTelefonoRestaurante(string _teleonoRestaurante);
        void setTipoDeComidaRestaurante(string _tipoDeComidaRestaurante);

};


    //Valores predeterminados del objeto

    Restaurante::Restaurante()
    {
        nombre = " ";
        direccion = " ";
        telefono = " ";
        tipoDeComida = " ";
    }

    //Se crean los get methods

    string Restaurante::getNombreRestaurante()
    {
        return nombre;
    }

    string Restaurante::getDireccionRestaurante()
    {
        return direccion;
    }

    string Restaurante::getTelefonoRestaurante()
    {
        return telefono;
    }

    string Restaurante::getTipoDeComidaRestaurante()
    {
        return tipoDeComida;
    }

    

    //Se crean los set methods
    void Restaurante::setNombreRestaurante(string _nombreResturante)
    {
        nombre = _nombreResturante;
    }

    void Restaurante::setDireccionRestaurante(string _direccionRestaurante)
    {
        direccion = _direccionRestaurante;
    }

    void Restaurante::setTelefonoRestaurante(string _telefonoRestaurante)
    {
        telefono = _telefonoRestaurante;
    }

    void Restaurante::setTipoDeComidaRestaurante(string _tipoDeComidaRestaurante)
    {
        tipoDeComida = _tipoDeComidaRestaurante;
    }

    

#endif /*Restaurante_h*/