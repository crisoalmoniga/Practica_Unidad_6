#pragma once
#include <SFML/Graphics.hpp>

class circulo {
public:
    // Constructor de la clase
    circulo(float velocidadInicial, float velocidadFinal);

    // M�todo para acelerar
    void aceleracion();

};