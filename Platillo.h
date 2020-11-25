
#ifndef Platillo_h
#define Platillo_h

class Platillo
{
private:

    string nombre;
    double costo;

public:
    
    //Constructor
    Platillo();
    Platillo(string nombre, double costo);

    // declaracion get methods

    string getNombrePlatillo();
    double getCostoPlatillo();

    // declaracion set methods

    void setNombrePlatillo(string _nombrePlatillo);
    void setCostoPlatillo(double _costoPlatillo);
};

// Valores predeterminados de un platillo

Platillo::Platillo()
{
    string nombre = " ";
    double costo = 0.0;
}

//modelacion de get methods

string Platillo::getNombrePlatillo()
{
    return nombre;
}

double Platillo::getCostoPlatillo()
{
    return costo;
}

//modelacion de set methods

void Platillo::setNombrePlatillo(string _nombrePlatillo)
{
    nombre = _nombrePlatillo;
}

void Platillo::setCostoPlatillo(double _costoPatillo)
{
    costo = _costoPatillo;
}



#endif /*Platillo_h*/