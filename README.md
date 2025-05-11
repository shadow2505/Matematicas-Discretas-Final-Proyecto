# 📘 Optimización del Estudio Académico con Programación Dinámica

## 💡 ¿Qué hace el programa?

Este programa permite al usuario **optimizar su tiempo de estudio** para diferentes materias, asignando las horas de forma estratégica para **maximizar el rendimiento académico**.  
Se basa en el modelo del problema clásico de la **mochila 0/1**, utilizando **programación dinámica** para encontrar la mejor combinación de materias dentro de un límite de horas disponibles.

---

## ⚙️ ¿Cómo se compila y corre?

### Compilación en terminal (Linux, Mac o WSL):
```bash
gcc -o estudio_optimo estudio_optimo.c
```

### Ejecución:
```bash
./estudio_optimo
```

### En Windows (cmd o PowerShell):
```bash
gcc -o estudio_optimo estudio_optimo.c
estudio_optimo.exe
```

---

## 📥 ¿Qué entradas debes usar?

El programa te pedirá los siguientes datos por consola:

1. **Número de materias**  
2. **Total de horas disponibles para estudiar**  
3. Para cada materia:
   - **Horas mínimas necesarias para que valga la pena estudiarla**
   - **Valor o importancia (puntos)** que representa esa materia

### Ejemplo:
```
Ingrese el número de materias: 3
Ingrese el total de horas disponibles para estudiar: 5

Materia 1:
  Horas mínimas necesarias: 3
  Valor o importancia (puntos): 8

Materia 2:
  Horas mínimas necesarias: 2
  Valor o importancia (puntos): 5

Materia 3:
  Horas mínimas necesarias: 1
  Valor o importancia (puntos): 3
```

📊 **Salida esperada:**  
El programa imprimirá una tabla `dp[i][j]` y mostrará el **valor máximo alcanzado** al distribuir el tiempo óptimamente.
