/*
  Ejercicio 1-2. Experimenta y observa lo que sucede cuando la cadena utilizada como 
  argumento para aprenderse contiene \x, donde x es cualquier carácter distinto de 
  los anteriormente mencionados (*)

  (*) Estos caracteres son \t (tabulador), \b (Backspace), \" (Comillas) y 
      \\ (Contrabarra)
*/

#include <stdio.h>

int main()
{
  printf("When no special char is used, we get: hello, world\n");
  printf("When using \\t, we get: hello, \t world\n");
  printf("When using \\b, we get: hello, \bworld\n");
  printf("When using \\\", we get: hello, \" world\n");
  printf("When using \\\\, we get: hello, \\ world\n");
}
