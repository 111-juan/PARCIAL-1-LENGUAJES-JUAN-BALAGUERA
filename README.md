### PUNTO 1
--- 
1. Descargar el archivo punto1.awk
2. Crear un archivo.txt, que tenga por ejemplo: +, ++, 456, 456.23, ++, +++
3. ingresar a la terminal de linux y escribir "chmod +x punto1.awk"
4. luego escribir "awk -f punto1.awk archivo.txt"
5. listo, la terminal deberia mostrar la ejecucion correspondiente
---
### EJECUCION
---
(+) suma
(+) suma
++ incr
89 entero
48.55 real
rr error
 error
### PUNTO 2
--- 
1. Descargar el archivo punto2.l
2. Crear un archivo.txt, que contenga por ejemplo: square = lambda x: x**2 print(square(3))
3. ingresar a la terminal y escribir "flex punto2.l"
4. luego verificar con 'ls' si el archivo "lex.yy.c" fue generado
5. luego escribir "gcc lex.yy.c -o punto2"
6. y escribir finalmente ./punto2 archivo.txt
---
### EJECUCION 
--- 
1. ACEPTA
2. NO ACEPTA
### PUNTO 3
---
1. Descarga el archivo punto3.c
2. Crear un archivo.txt ingresando un texto cualquiera, donde se repita alguna palabra como 'hola' 'adios' 'entonces' etc
3. ingresar en la terminal "gcc punto3.c -o punto3"
4. luego ingresar ./punto3 archivo.txt "la palabra que deseas saber cuantas veces se repite" EJemplo: ./punto3 archivo.txt hola
---
### EJECUCION
'hola' se repite n veces en el texto
