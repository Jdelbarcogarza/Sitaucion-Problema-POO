
#ifndef Platillo_h
#define Platillo_h

class Platillo
{
private:

    string nombre;
    string listaIngredientes[10];
    float costo;

public:
    
    //Constructor
    Platillo();
    Platillo(string nombre, string listaIngredientes[], float costo);

    // declaracion get methods

    string getNombrePlatillo();
    string getIngredientesPlatillo();
    float getCostoPlatillo();

    // declaracion set methods

    void setNombrePlatillo(string _nombrePlatillo);
    void setIngredientesPlatillo(string _listaIngredientes[]);
    void setCostoPlatillo(float _costoPlatillo);
};

// Valores predeterminados de un platillo

Platillo::Platillo()
{
    string nombre = " ";
    string listaIngredientes[10];
    float costo = 0.0;
}

//modelacion de get methods

string Platillo::getNombrePlatillo()
{
    return nombre;
}

string Platillo::getIngredientesPlatillo()
{
    return listaIngredientes[10];
}

float Platillo::getCostoPlatillo()
{
    return costo;
}

//modelacion de set methods

void Platillo::setNombrePlatillo(string _nombrePlatillo)
{
    nombre = _nombrePlatillo;
}
void Platillo::setIngredientesPlatillo(string _listaIngredientesPlatillo[])
{
    listaIngredientes[10] = _listaIngredientesPlatillo[];
}
void Platillo::setCostoPlatillo(float _costoPatillo)
{
    costo = _costoPatillo;
}



#endif /*Platillo_h*/