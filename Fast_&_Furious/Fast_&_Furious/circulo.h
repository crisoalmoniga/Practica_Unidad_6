#pragma once
#include <SFML/Graphics.hpp>

class circulo {
public:
    // Constructor de la clase
    circulo(float velocidadInicial, float velocidadFinal);

    // Método para acelerar
    void aceleracion();

};