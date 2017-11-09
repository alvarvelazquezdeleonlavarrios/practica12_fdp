#include<stdio.h>
#include<conio.h>

//Prog1. Volúmen de un Cubo

int volumen(int x);

int l;

main(){
	volumen(l);
	getch();
}

int volumen(int x){
	printf("Ingrese el valor de la arista: ");
	scanf("%d",&l);
	l=(l*l*l);
	printf("Volumen: %d",l);
}
