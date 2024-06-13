#include <stdio.h>
#include <stdlib.h>

/* Definicion de funciones */
void carga(int *c,int *v)
{
printf("Ingresar la cantidad de horas");
scanf("%d",c);
printf("Ingresar el valor hora");
scanf("%d",v);
}
int calculo(int c,int v)
{
return(c*v);
}
void mostrar(int s)
{
printf("El sueldo es %d ",s);
}

int main(int argc, char *argv[]) {

int sueldo,ch,vh;
carga(&ch,&vh);
sueldo=calculo(ch,vh);
mostrar(sueldo);

	return 0;
}
