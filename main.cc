#include <iostream>

float Potencia(float, int);
int SumaNaturales(int);

int main(){
    float base, exponente;
    std::cout << "Ingrese un numero base: ";
    std::cin >> base;
    std::cout << "Ingrese una potencia: ";
    std::cin>> exponente;

    float potenciacion = Potencia(base, exponente);
    std::cout <<"\n------------------------------\n" << base << " elevado a " << exponente <<" es igual a: " << potenciacion <<"\n------------------------------\n";

    int num;
    std::cout<<"\n\nIngrese la cantidad de numeros naturales que desea sumar: ";
    std::cin>>num;
    std::cout<<"\n------------------------------------------\nLa suma de los primeros "<<num<<" naturales es: "<<SumaNaturales(num)<<"\n------------------------------------------";
    return 0;
    
}

float Potencia(float base, int exponente){
    if (exponente == 0)
    {
        return 1;
    }
    return base * Potencia(base, exponente-1);
}


int SumaNaturales(int Num) {
  if (Num == 1) {
    return Num;  // Caso base: si alcanzamos el final de la cadena, retornamos Num.
  } else {
    return SumaNaturales(Num - 1) + Num ;  // Llamada recursiva con el siguiente numero.
  }
}