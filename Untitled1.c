//Seccion de librerias que se usaran en el codigo
#include<stdio.h>

 //declaracion de variables globales
 int edadDeAlumnos;
 
 //declaracion de funciones
int main(){
    //declaracion de variables locales
    int edadDeAlumnos2=25;
    int edades;
    float operacion;
    //Bloque de instrucciones
    printf("Escribe tu edad:"); 
	scanf("%i",&edades);
	
	operacion=edades+30;
	printf("Tu edad mas 30:\n %.2f",operacion);    	
return 0;   	
 }
  
