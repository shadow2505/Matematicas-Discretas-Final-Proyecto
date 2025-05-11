# 🧪 Experimentos Intermedios

## ✅ Solución sin programación dinámica (10%)

El problema puede abordarse inicialmente con un enfoque recursivo puro. En esta versión, por cada materia se plantean dos decisiones: incluirla o no. La función se llama a sí misma con las materias restantes y las horas restantes. Esto genera un árbol de decisiones muy grande y costoso.

Este enfoque revela que el problema tiene:
- **Subestructura óptima**: la mejor solución global depende de soluciones óptimas a subproblemas más pequeños.
- **Subproblemas superpuestos**: muchas combinaciones de horas y materias se repiten durante la exploración.

Estas propiedades hacen que el problema sea un excelente candidato para optimización mediante **programación dinámica**.

## ✅ Análisis de complejidad de tiempo y espacio (10%)

| Enfoque                        | Tiempo      | Espacio     | Comentario                                      |
|-------------------------------|-------------|-------------|-------------------------------------------------|
| Recursivo (sin PD)            | O(2^n)      | O(n)        | Muy ineficiente para muchas materias            |
| Programación Dinámica (2D)    | O(n × H)    | O(n × H)    | Eficiente y clara, ideal para visualizar tabla  |
| Programación Dinámica (1D)    | O(n × H)    | O(H)        | Más optimizada en espacio, misma eficiencia     |

- `n`: número de materias  
- `H`: total de horas disponibles para estudiar

## ✅ ¿Por qué es más eficiente usar programación dinámica?

La programación dinámica es más eficiente porque:

- **Evita cálculos repetidos**: guarda resultados y los reutiliza.
- **Reduce la complejidad exponencial a polinomial**.
- **Permite escalar**: se puede usar con muchos datos.
- **Es determinista**: garantiza encontrar la mejor solución global posible.

Por estas razones, la programación dinámica no solo mejora el rendimiento computacional, sino también la calidad de la decisión en la asignación de horas de estudio.
