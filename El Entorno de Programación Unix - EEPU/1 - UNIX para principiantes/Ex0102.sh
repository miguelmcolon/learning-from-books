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

# El primer comando ('date') devuelve la fecha en que se ejecuta. En la segunda línea el comportamiento depende del shell en el que ejecutemos la secuencia: cuando se trate de un sistema que interprete '#' como borrado de carácter el resultado será, como en el ejemplo del enunciado, la fecha en que se ejecuta; en el resto de sistemas no tendremos resultado alguno porque el comando 'date' queda dentro del espacio del comentario. 
#

