// METODOS - Algoritmo asociado a un objeto (o a una clase de objetos), cuya ejecucion se desencadena tras la recepcion de un "mensaje". Desde el punto de vista del comportamiento, es lo que el objeto puede hacer. 

class MyClass {       
  public:          
    void myMethod() {  // Metodo/funcion 
      cout << "Hello World!";
    }
};

int main() {
  MyClass myObj;     // Crea el objecto de MyClass
  myObj.myMethod();  // Llama al metodo
  return 0;
}