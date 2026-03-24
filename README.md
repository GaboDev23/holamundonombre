# 🌍 Hola Mundo con Nombre (Multilenguaje)

## 📌 Descripción

Este proyecto reúne la implementación de **"Hola mundo" con nombre**, donde el usuario ingresa su nombre y recibe un saludo personalizado en múltiples lenguajes de programación.

Ideal para:

* Primeros pasos en programación
* Comparar sintaxis entre lenguajes
* Verificar instalaciones de compiladores e intérpretes

---

## 💻 Lenguajes incluidos

### 🔹 Java ☕ (con nombre)

```java
package holamundonombre;
import java.util.Scanner;

public class HolaMundoNombre {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        System.out.print("Escribe tu nombre: ");
        String nombre = sc.nextLine();
        
        System.out.println("Hola mundo! Bienvenido " + nombre);

    }
}
```

#### ▶ Compilación y ejecución

```bash
javac HolaMundoNombre.java
java holamundonombre.HolaMundoNombre
```

---

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
g++ holamundo.cpp -o holamundo
./holamundo
```

---

### 🔹 Pascal

```pascal
program HolaMundoNombre;
var nombre: string;
begin
 write('Ingresa tu nombre: ');
 readln(nombre);

 writeln('Hola mundo, bienvenido ' ,nombre);
end.
```

#### ▶ Compilación y ejecución

```bash
fpc holamundo.pas
./holamundo
```

---

### 🔹 Python

```python
nombre = input("Ingrese su nombre: ")

print(f'Hola mundo, bienvenido {nombre}')
```

#### ▶ Ejecución

```bash
python3 holamundo.py
```

---

### 🔹 JavaScript

```javascript
let nombre = prompt('Ingresa tu nombre');

alert(`Hola mundo! Bienvenido ${nombre}`);
```

#### ▶ Ejecución (Node.js)

```bash
node holamundo.js
```

---

### 🔹 Rust 🦀

```rust
fn main() {
    println!("Hola Mundo");
}
```

#### ▶ Crear y ejecutar

```bash
cargo new holamundo_rust
cd holamundo_rust
cargo run
```

---

## 🧠 Explicación simple

Todos los programas hacen exactamente lo mismo:

👉 Pedir el nombre del usuario
👉 Mostrar un saludo personalizado

Cada lenguaje tiene su estilo:

* **C++** → clásico y potente
* **Pascal** → académico
* **Python** → simple
* **JavaScript** → flexible
* **Java** → estructurado
* **Rust** → moderno y seguro

---

## 📁 Estructura del proyecto

```
.
├── holamundo.cpp
├── holamundo.pas
├── holamundo.py
├── holamundo.js
├── holamundo.java
├── holamundo_rust/
├── HolaMundoCS/
├── README.md
```

---

## 🎯 Objetivo del proyecto

* Aprender la base de cada lenguaje
* Comparar sintaxis
* Practicar compilación y ejecución

---

## ⚠️ Nota

No se incluyen archivos compilados (ejecutables, `.o`, etc.), ya que pueden generarse fácilmente a partir del código fuente.

---

## 🚀 Autor

Proyecto con fines educativos.
