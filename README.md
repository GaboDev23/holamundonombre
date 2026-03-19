# 🌍 Hola Mundo Multilenguaje

## 📌 Descripción

Este proyecto reúne la clásica implementación de **"Hola mundo"** en múltiples lenguajes de programación.

Ideal para:

* Primeros pasos en programación
* Comparar sintaxis entre lenguajes
* Verificar instalaciones de compiladores e intérpretes

---

## 💻 Lenguajes incluidos

### 🔹 C++

```cpp
#include <iostream>

int main() {
    std::cout << "Hola mundo\n";
    return 0;
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
program holamundo;
begin
    writeLn('Hola mundo')
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
print('Hola mundo')
```

#### ▶ Ejecución

```bash
python3 holamundo.py
```

---

### 🔹 JavaScript

```javascript
console.log("Hola Mundo");
```

#### ▶ Ejecución (Node.js)

```bash
node holamundo.js
```

---

### 🔹 Java ☕

```java
package holamundo;

public class holamundo {

    public static void main(String[] args) {
        System.out.println("Hola mundo!");

    }
}
```

#### ▶ Compilación y ejecución

```bash
javac holamundo.java
java holamundo.holamundo
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

### 🔹 Rust 🦀

```rust
use std::io;
use std::io::Write;

fn main() {
    print!("Ingresa tu nombre: ");
    io::stdout().flush().unwrap();
    
    let mut nombre = String::new();
    io::stdin().read_line(&mut nombre).expect("Error al leer el nombre");

    println!("Hola mundo! Bienvenido {}", nombre.trim());
}
```

#### ▶ Crear y ejecutar

```bash
cargo new holamundonombre_rust
cd holamundonombre_rust
cargo run
```

---

## 🧠 Explicación simple

Todos los programas hacen exactamente lo mismo:

👉 Mostrar el mensaje **"Hola mundo"**

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
