#include<stdio.h>
#include<conio.h>

//Prog2. Calculadora Básica

float suma(float w1,float w2);
float resta(float x1,float x2);
float multiplicacion(float y1,float y2);
float division(float z1,float z2);

float num1, num2, r;
int x=0,con=0;

main(){
	printf("Ingrese un numero: ");
	scanf("%f",&num1);
	printf("Ingrese otro numero: ");
	scanf("%f",&num2);
	do{
		printf("\n 1) Suma\n 2) Resta\n 3) Multiplicacion\n 4) Division");
		printf("\nSeleccione una operacion: ");
		scanf("%d",&x);
		
		switch (x){
			case 1:
				suma(num1,num2);
				break;
			case 2:
				resta(num1,num2);
				break;
			case 3:
				multiplicacion(num1,num2);
				break;
			case 4:
				division(num1,num2);
				break;
			default:
				printf("Opcion no valida\n");
				break;
		}
		printf("\n 0)No\n 1)Si\n");
		printf("Desea realizar otra operacion?: ");
		scanf("%d",&con);
		
	} while (con==1);
	printf("Hasta pronto");
	getch();
	
}

float suma(float w1,float w2){
	r=num1+num2;
	printf("%f + %f = %f\n",num1,num2,r);
}

float resta(float x1,float x2){
	r=num1-num2;
	printf("%f - %f = %f\n",num1,num2,r);
}

float multiplicacion(float y1,float y2){
	r=num1*num2;
	printf("%f * %f = %f\n",num1,num2,r);
}

float division(float z1,float z2){
	r=num1/num2;
	printf("%f / %f = %f\n",num1,num2,r);
}


