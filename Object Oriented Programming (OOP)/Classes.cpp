#include <iostream>
using namespace std;

// CLASES - Una clase es una especie de "plantilla" en la que se definen los atributos y metodos predeterminados de un tipo de objeto. Esta plantilla se crea para poder crear objetos facilmente. 
class MyClass {       // La clase
  public:             // Especificadores de acceso - publico / privado / protegido
    int myNum;        // attributos
    string myString;  
};

int main() {
  MyClass myObj;  // Objeto MyClass

  // Accede a atributos y dales valor
  myObj.myNum = 15; 
  myObj.myString = "Some text";

  // Imprime
  cout << myObj.myNum << "\n";
  cout << myObj.myString;
  return 0;
}


// Multiples clases
// Crea la clase del carro con atributos
class Car {
  public:
    string brand;   
    string model;
    int year;
};

int main() {
  // Crea el primer objeto de carro
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Crea otro objeto de carro
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Imprime
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}