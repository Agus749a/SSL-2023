### Paso a paso
## 1.a) Generamos el archivo .i mediante el comando **gcc -E hello2.c -o hello2.i**
## 1.b) Observamos que en esta etapa del proceso de traduccion, en el preprocesado no detecta errores de compilacion, se quitan los comentarios y los reemplaza por un espacio, y la directiva include es remplazada por las intrucciones de llamada y direcciones.
## 1.c) Generamos el archivo .i mediante el comando gcc -E hello3.c -o hello3.i 
## 1.d) La primera linea es la declaracion de la funcion Printf que retorna un int y que recibe un primer parametro de tipo puntero constante a char y con la palabra clave restrict le decimos al compilador que solo va a poder acceder a esa informacion solamente con el puntero previamente mencionado. Y los puntos suspensivos hace referencia a que la funcion puede tomar mas de un parametro.
## 1.e) El codigo de por si esta exactamente igual tanto en hello3.h como en hello3.i, solo agrega estas instrucciones el hello3.i
 0 "hello3.c"
 0 "<built-in>"
 0 "<command-line>"
 1 "hello3.c"
## 2.a) En esta etapa de compilacion se detectan los errores de lexico, sintactico y semantico de hello3.c, por lo que no permite obtener hello3.s 
### ERROR:
**hello3.c:4:2: warning: implicit declaration of function 'prontf'; did you mean 'printf'? [-Wimplicit-function-declaration]
    4 |  prontf("La respuesta es %d\n");
      |  ^~~~~~
      |  printf**
## 2.b) Utilizando el comando gcc -S hello4.c -o hello4.s obtenemos el codigo assembler
## 2.c) El lenguaje ensamblador es un lenguaje intermedio entre el lenguaje C y el codigo maquina y esta orientado a que el programador entienda las instrucciones que generaran el archivo objeto.
## 2.d) Con el comando gcc -C hello4.c -o hello4.o ensamblamos hello4.c
## 3) 
