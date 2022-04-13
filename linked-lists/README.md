# Linked lists

## Singly linked lists 

### Basics

Las listas enlazadas representan un caso de uso de estructuras (`struct`) muy interesante. 

La idea es sencilla:

Se define una estructura (`s_node`) que contiene uno o más miembros que pueden ser variables de cualquier tipo (en el ejemplo `char *str`)  y un miembro que es un puntero a una estructura del mismo tipo (`struct s_node *next`). Este miembro apunta al siguiente nodo de la lista. La plantilla de la estructura llamada `s_node` es:

```
struct s_node
{
	char *str;
	struct s_node *next;
};
```	

Habitualmente se usará `typedef` para abreviar la declaración de nuevos elementos de la estructura. Las dos formas de hacerlo son:

Integrada en la descripción de la estructura

```
struct s_node
{
	char *str;
	struct s_node *next;
} t_node;
```	

Donde:
- `s_node` es el nombre de la variable usado cuando se declara la estructura en la forma completa que usa `struct`.
- `t_node`es el nombre del tipo que usaremos cuando queramos instanciar una estructura `s_node`.

Otra forma de hacerlo es separando la definición de la estructura y la formación del tipo con `typedef`:

```
struct s_node
{
	char *str;
	struct s_node *next;
};

typedef struct s_node t_node;
```	

### Aproximaciones

- [Professor Brailsfor's code](approaches/brailsford.c)
- [Stanford - Nick Parlante](http://cslibrary.stanford.edu/103/LinkedListBasics.pdf)
  - Sugiere para entender las listas enlazadas observar cómo funcionan los arrays y pensar en una aproximación alternativa. Eso evidencia las ventajas de las listas enlazadas en el tratamiento dinámico de la memoria frente a los arrays.
  - Señala como buena práctica los esquemas de memoria que diferencian entre los elementos alojados en la memoria stack intrafunción y los elementos alojados en la memoria heap mediante malloc.
  
### Fuentes

- Kernighan, B. W., & Ritchie, D. M. (1989). El lenguaje de programación C. México: Prentice-Hall. 
- Traister, R. J. (2014). Mastering C Pointers: Tools for Programming Power. Saint Louis: Elsevier Science.
- Deitel, H. M., & Deitel, P. J. (1994). C: How program. London: Prentice-Hall International.
- Lafore, R., & Waite Group, inc. (1991). Programación en Microsoft C para IBM PC y compatibles: Introducción y técnicas avanzadas de programación. Madrid: Anaya Multimedia.
