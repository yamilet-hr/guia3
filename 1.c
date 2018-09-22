#include<stdio.h>
int main(){
int opcion,b,a,suma,resta;
int *p1, *p2;
printf("******MENU******\n1.Ingresar dos numeros\n2.Calcular la suma\n3.calcular la resta \n4.Imprimir direccion de memoria de cada variable\nCualquier otro numero para salir");
printf("\nIngrese una opcion");
scanf("%d",&opcion);
do{
	
	switch(opcion){
	
	case 1:
	printf("Numero 1=");
	scanf("%d",&a);
	
	printf("Numero 2=");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	
	break;
	case 2:
	
	suma=*p1+*p2;
	printf("\n La suma de %d + %d=%d\n",a,b,suma);
	break;
	case 3:
	resta=*p1-*p2;
	printf("\n La resta de %d - %d=%d\n",a,b,resta);
	break;
	
	case 4:
	printf("la direccion del primer numero=%d",&a);
	printf("\nla direccion del segundo  numero=%d",&b);
	printf("\nla direccion que guarda el puntero 1=%d",p1);
	printf("\nla direccion que guarda el puntero 2=%d",p2);
	printf("\nla direccion suma=%d",&suma);
	printf("\nla direccion resta=%d",&resta);
	break;
	}
	
	
printf("\n******MENU******\n1.Ingresar dos numeros\n2.Calcular la suma\n3.calcular la resta \n4.Imprimir direccion de memoria de cada variable\nCualquier otro numero para salir");
printf("\nIngrese una opcion");
scanf("%d",&opcion);


}while(opcion>=1 && opcion <=4);
}
