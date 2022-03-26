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

Integrada en la descripción de la estructura:

```
struct s_node
{
	char *str;
	struct s_node *next;
} t_node;
```	

Donde `s_node` es el nombre de la variable usado cuando se declara la estructura en la forma completa que usa `struct` 

### Aproximaciones

[Proffesor Brailsfor's code](approaches/brailsford.c)
