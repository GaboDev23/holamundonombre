# 🌍 Hola Mundo con Nombre (Multilenguaje)

## 📌 Descripción

Este programa es una variante del clásico **"Hola mundo"**, pero con un pequeño upgrade:
👉 ahora interactúa con el usuario solicitando su nombre y mostrándolo en pantalla.

Es un paso más allá del ejemplo básico, ya que introduce:

* Entrada de datos
* Variables
* Interacción con el usuario

---

## 💻 Lenguaje incluido

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

---

## ▶ Compilación y ejecución

```bash
fpc holamundonombre.pas
./holamundonombre
```

---

## 🧠 Explicación simple

El programa hace lo siguiente:

1. Pide al usuario su nombre
2. Guarda ese nombre en una variable
3. Muestra un mensaje personalizado

Ejemplo:

```
Ingresa tu nombre: Gabo
Hola mundo, bienvenido Gabo
```

---

## 📖 Explicación formal

* `var nombre: string;`
  Declara una variable de tipo cadena para almacenar texto.

* `write(...)`
  Muestra un mensaje sin salto de línea.

* `readln(nombre)`
  Captura la entrada del usuario desde teclado.

* `writeln(...)`
  Imprime el mensaje final con salto de línea.

---

## 🎯 Objetivo del proyecto

* Introducir la entrada de datos en programas
* Trabajar con variables
* Generar salida dinámica basada en el usuario

---

## 📁 Estructura del proyecto

```
.
├── holamundonombre.pas
├── README.md
```

---

## 🚀 Autor

Proyecto educativo para practicar fundamentos de programación.
