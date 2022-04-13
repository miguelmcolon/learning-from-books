#include <stdio.h>
#include <stdlib.h>

struct node
{
  int data;
  struct node* next;
};

struct node* BuildOneTwoThree();
int Length(struct node* head);
struct node* BuildTwoThree();

int main()
{
	struct node *myList = BuildOneTwoThree();

	printf("The list's lenght is '%d'\n", Length(myList));
	printf("The value in first node is '%d'\n", myList->data);
	printf("The value in third node is '%d'\n", myList->next->next->data);

	/*
	  Ejercicio: ¿Qué ocurre si pasamos a Lenght una lista que no contiene elementos?
	*/
	struct node *blankList = NULL;	
	printf("The blank list's lenght is '%d'\n", Length(blankList));
	// Lenght gestiona adecuadamente las listas vacías

	/*
	  Ejercicio: Prueba a insertar un nodo al inicio de una lista
	*/
	struct node *newList = BuildTwoThree();
	struct node *newNode;
	
	printf("The initial lenght of new list is '%d'\n", Length(newList));
	newNode = malloc(sizeof(struct node));
	newNode->data = 1;
	newNode->next = newList;
	newList = newNode;
	printf("data in first node of new list is '%d'\n", newList->data);
	printf("The final lenght of new list is '%d'\n", Length(newList));
	// Comprobamos que se ha introducido corectamente el nodo al inicio de la lista
	
	return (0);
}

/*
 Build the list {1, 2, 3} in the heap and store
 its head pointer in a local stack variable.
 Returns the head pointer to the caller.
*/
struct node* BuildOneTwoThree()
{
  struct node* head = NULL;
  struct node* second = NULL;
  struct node* third = NULL;

  head = malloc(sizeof(struct node)); // allocate 3 nodes in the heap
  second = malloc(sizeof(struct node));
  third = malloc(sizeof(struct node));
  head->data = 1; // setup first node
  head->next = second; // note: pointer assignment rule
  second->data = 2; // setup second node
  second->next = third;
  third->data = 3; // setup third link
  third->next = NULL;
  // At this point, the linked list referenced by "head"
  // matches the list in the drawing.
  return head;
}

/*
 Given a linked list head pointer, compute
 and return the number of nodes in the list.
*/
int Length(struct node* head)
{
	struct node* current = head;
	int count = 0;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
   	/*
	  Ejercicio: ¿Qué ocurre si anulamos head (head = NULL) al final de la función Lenght?
	*/
	head = NULL;
	// No ocurre nada. Head es una variable local inicializada mediante una copia del parámetro
	// pasado a la función. Los cambios en variables locales no trascienden el ámbito de la
	// función en la que se producen
	return count;
}

struct node* BuildTwoThree()
{
  struct node* head = NULL;
  struct node* second = NULL;
  
  head = malloc(sizeof(struct node)); // allocate 2 nodes in the heap
  second = malloc(sizeof(struct node));
  head->data = 2; // setup first node (value = 2)
  head->next = second; // note: pointer assignment rule
  second->data = 3; // setup second node (value = 3)
  second->next = NULL;
  return head;
}
