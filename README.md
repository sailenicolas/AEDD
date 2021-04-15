# AEDD

El siguiente programa transforma una cantidad dada de segundos en la hora y fecha
que representan dichos segundos, contando el tiempo transcurrido desde las 00:00:00
horas del día 1 de enero del 2020 (considerando que todos los meses tienen 30 días para
simplificar el cálculo de los meses). Sin embargo, el programa contiene muchos
errores que se deben corregir para que pueda realizarlo que se pretende. A fin de
arreglarlo, deberás transcribir el codigo propuesto utilizando ZinjaI e intentar
ejecutarlo para que el compilador indique los errores encontrados. Luego, deberás
realizar las correcciones oportunas para depurar cada uno de esos errores, hasta
que no quede ninguno. Atención porque también puede haber errores de lógica,
que no son detectados por el compilador. Cuando hayas corregido todos los errores,
puedes ingresar 28045678 como cantidad de segundos a transformar para comprobar
que funciona correctamente. En este caso, lo que verás en la ventana de ejecución interactiva
será:

Inicio del tiempo: 00:00:00 del 01/01/2021

Segundos transcurridos: 28391278

Ese tiempo corresponde a las 14:27:58 del dia 25 del 11 de 2021
Nota: Observa el tipo de error que te indica el compilador. En la mayoríade los casos te mostrará exactamente
la línea donde está el error. No obstante, en unos pocos casos la línea que te mostrará será en la
que él ha detectado un error y no en la que realmente se ha producido. Tener cuenta también que la
"correcta" corrección de algunos errores depende de la acción que se pretende realizar,
para lo cual es muy conveniente que entiendas qué va realizando el programa paso a paso.
using namespace std;