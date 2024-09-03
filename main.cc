#include <iostream>

/*
1. Escribir un programa que calcule la potenciua de un numero
    a. Determinar caso base
    b. Proceso que realiza la función

No usar For o librerías
*/
float Potencia(float, int);

int main(){
    float base, exponente;
    std::cout << "Ingrese un numero base: ";
    std::cin >> base;
    std::cout << "Ingrese una potencia: ";
    std::cin>> exponente;

    float potenciacion = Potencia(base, exponente);
    std::cout << base << " elevado a " << exponente <<" es igual a: " << potenciacion << std::endl;

    return 0;
}

float Potencia(float base, int exponente){
    if (exponente == 0)
    {
        return 1;
    }
    return base * Potencia(base, exponente-1);
}