# Ejercicio 1-2. La mayor parte de los shells (con la excepción del de la séptima edición) interpretan al '#' como el inicio de un comentario, ignorando todo el texto que se encuentra desde el '#' hasta el final de la línea. De acuerdo con esto, explique el siguiente, suponiendo que el carácter de borrado es tambien '#':
#
#	$ date
#	Mon Sep 26 12:39:56 EDT 1983
#	$ #date
#	Mon Sep 26 12:40:21 EDT 1983
#	$ \#date
#	$ \\#date
#	#date: not found
#	$
#

date
#date
\#date
\\#date

# El primer comando ('date') devuelve la fecha en que se ejecuta. 
# En la segunda línea el comportamiento depende del shell en el que ejecutemos la secuencia: 
# 	- Cuando se trate de un sistema que interprete '#' como borrado de carácter el resultado será, como en el ejemplo del enunciado, la fecha en que se ejecuta; 
# 	- En el resto de sistemas no tendremos resultado alguno porque el comando 'date' queda dentro del espacio del comentario. 
# El comportamiento de la tercera línea se explica en los sistemas en que '#' borra el carácter precedente. Al inhibir ese comportamiento mediante la contrabarra '\' lo que tenemos es una línea de comentario con la palabra 'date', que no produce ningun resultado en la consola. En el resto de sistemas obtendremos un error puesto que se interpretará que estamos pasando el comando '#date' que no existe.
# En la última línea observamos idéntico comportamiento al referido en el caso anterior. Tenemos una contrabarra que "escapa" el carácter '#' que tiene a continuación. En los sistemas actuales obtendremos un error porque el comando '\#date', como sabemos, no existe. En los sistemas referidos en el enunciado del ejercicio una de las contrabarras inhibe la función de borrado de '#' y la otra inhibe su función de inicio de comentario por lo que obtenemos el error que indica la inexistencia del comando '#date'.
