
#ifndef Cliente_h
#define Cliente_h
#include <iostream>

class Cliente
{

    private:

        string nombre;
        string direccion;
        string telefono;
        //indica con cuanto va a pagar el cliente su comida
        float cantidadPago;

    public:

        //Constructor
        Cliente();
        Cliente::Cliente(string nombre, string direccion, string telefono, float cantidadPago);

        //declaración get methods

        string getNombreCliente();
        string getDireccionCliente();
        string getTelefonoCliente();
        float getCantidadPago();

        // declaración set methods

        void setNombreCliente(string _nombreCliente);
        void setDireccionCliente(string _direccionCliente);
        void setTelefonoCliente(string _telefonoCliente);
        void setCantidadPago(float _cantidadPago);

};

// valores predetermiados del cliente

Cliente::Cliente()
{
    string nombre = " ";
    string direccion = " ";
    string telefono = " ";
    float cantidadPago = 0.0;
}

//modelacion get methods

string Cliente::getNombreCliente()
{
    return nombre;
}

string Cliente::getDireccionCliente()
{
    return direccion;
}

string Cliente::getTelefonoCliente()
{
    return telefono;
}

float Cliente::getCantidadPago()
{
    return cantidadPago;
}

//modelacion set methods

void Cliente::setNombreCliente(string _nombreCliente)
{
    nombre = _nombreCliente;
}

void Cliente::setTelefonoCliente(string _telefonoCliente)
{
    telefono = _telefonoCliente;
}

void Cliente::setDireccionCliente(string _direccionCliente)
{
    direccion = _direccionCliente;
}

void Cliente::setCantidadPago(float _cantidadPago)
{
    cantidadPago = _cantidadPago;
}

#endif /*Cliente_h*/