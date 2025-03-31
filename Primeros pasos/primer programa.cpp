#include <iostream>
#include <vector>
using namespace std;

int main() {
  cout << "Hola alumnos que tal" << endl;

  vector numeros = {1, 2, 3, 4, 5};

  for (const int numero : numeros) {
    cout << "El numero" << numero << endl;
  }

  int salario = 3500;
  cout << salario << endl;
  salario = 3850;
  cout << salario << endl;

  return 0;
}

