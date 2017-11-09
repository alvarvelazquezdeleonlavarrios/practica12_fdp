#include<stdio.h>
#include<conio.h>

//Prog3. Anidación de Funciones

int fun1(int x);
int fun2(int y);

int num;

main(){
	fun2(num);
	num=num*100;
	printf("Resultado final: %d",num);
	getch();
}

int fun2(int x){
	fun1(num);
	printf("Valor ingresado: %d\n",num);
}

int fun1(int y){
	printf("Ingrese un numero: ");
	scanf("%d",&num);
}
