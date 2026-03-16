#include <iostream>
#include <string>
int main() {
 std::string nombre;

 std::cout << "Ingresa tu nombre: ";
 std::getline(std::cin, nombre);

 std::cout << "\n";

 std::cout << "Hola mundo, Bienvenido " << nombre << "\n";
}
