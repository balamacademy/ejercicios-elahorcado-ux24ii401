## El Ahorcado

Desarrolla un programa para jugar al popular juego **El Ahorcado**, el cual consiste en un personaje que está a punto de ser ejecutado.

### Reglas del Juego:

1. El jugador debe adivinar una palabra secreta, de la cual solo se conoce su longitud. El jugador adivina letra por letra para completar la palabra.
2. Si el jugador selecciona una letra incorrecta, el personaje pierde una parte de su cuerpo (pierna, brazo, tronco, etc.).
3. El juego termina cuando:
   - El jugador adivina correctamente toda la palabra (el jugador gana).
   - El jugador comete un número de errores específicos, lo que hace que el personaje pierda todas sus partes del cuerpo (el computador gana).
4. La palabra a adivinar puede ser fija o ingresada por el jugador al inicio del programa.
5. Se debe usar el carácter **`_`** para ocultar las letras de la palabra, y cuando una letra es adivinada correctamente, debe sustituirse por la letra correcta.

### Partes del cuerpo del **Ahorcado**:

1. Pierna derecha
2. Pierna izquierda
3. Brazo derecho
4. Brazo izquierdo
5. Tronco
6. Cabeza

### Requisitos:

- **No utilizar arreglos** ni **funciones avanzadas** de la biblioteca `string`.
- Usar únicamente **funciones simples** y manipulación básica de cadenas.
- Mostrar las letras adivinadas y las partes del cuerpo perdidas según el número de intentos incorrectos.

### Ejemplo de ejecución:

```
Ingrese la palabra: caramelo
Comienza el juego!
" _ _ _ _ _ _ _ _ "
Ingrese letra: a
" _ a _ a _ _ _ _ "
Ingrese letra: e
" _ a _ a _ e _ _ "
Ingrese letra: i
Pierde "pierna derecha"
Ingrese letra: o
" _ a _ a _ e _ o "
Ingrese letra: b
Pierde "pierna izquierda"
Ingrese letra: c
" c a _ a _ e _ o "
Ingrese letra: d
Pierde "brazo derecho"
Ingrese letra: f
Pierde "brazo izquierdo"
Ingrese letra: g
Pierde "tronco"
Ingrese letra: h
Pierde "cabeza"

Haz perdido el juego!
```

### Notas:

- **Utiliza un `string`** para almacenar las letras de la palabra y su progreso.
- El programa debe realizarse utilizando **funciones** para dividir las tareas de mostrar la palabra oculta, actualizar la palabra adivinada y manejar las partes del cuerpo perdidas.
- **No utilices arreglos** ni funciones avanzadas de búsqueda de la biblioteca `string`, como `find` o `substr`.
- Asegúrate de que el juego termine correctamente cuando el jugador haya adivinado la palabra o cuando haya perdido todas las partes del cuerpo.

¡Este es un reto clásico de lógica! Disfruta implementando el juego.
