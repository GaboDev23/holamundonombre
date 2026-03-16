# 🌍 Hola Mundo con Nombre (Multilenguaje)

## 📌 Descripción

Este proyecto es una versión mejorada del clásico **"Hola mundo"**, donde el programa interactúa con el usuario solicitando su nombre y mostrándolo en pantalla.

Introduce conceptos fundamentales como:

* Entrada de datos
* Variables
* Interacción con el usuario

---

## 💻 Lenguajes incluidos

### 🔹 C++

```cpp
#include <iostream>
#include <string>

int main() {
    std::string nombre;

    std::cout << "Ingresa tu nombre: ";
    std::getline(std::cin, nombre);

    std::cout << "\n";

    std::cout << "Hola mundo, Bienvenido " << nombre << "\n";
}
```

#### ▶ Compilación y ejecución

```bash
g++ holamundonombre.cpp -o holamundonombre
./holamundonombre
```

---

### 🔹 Pascal

```pascal
program HolaMundoNombre;
var nombre: string;
begin
    write('Ingresa tu nombre: ');
    readln(nombre);

    writeln('Hola mundo, bienvenido ', nombre);
end.
```

#### ▶ Compilación y ejecución

```bash
fpc holamundonombre.pas
./holamundonombre
```

---

## 🧠 Explicación simple

El programa:

1. Pide tu nombre
2. Guarda ese dato
3. Te saluda con un mensaje personalizado

Ejemplo:

```
Ingresa tu nombre: Gabo
Hola mundo, Bienvenido Gabo
```

---

## 📖 Explicación formal

* **C++**

  * `std::string` almacena texto
  * `std::getline()` permite leer líneas completas
  * `std::cout` imprime en consola

* **Pascal**

  * `string` almacena texto
  * `readln()` captura la entrada del usuario
  * `writeln()` muestra el resultado

---

## 📁 Estructura del proyecto

```
.
├── holamundonombre.cpp
├── holamundonombre.pas
├── README.md
```

---

## 🎯 Objetivo del proyecto

* Practicar entrada de datos
* Comparar sintaxis entre lenguajes
* Construir programas interactivos básicos

---

## 🚀 Autor

Proyecto creado con fines educativos.

Proyecto educativo para practicar fundamentos de programación.
