#include<stdio.h>



int main(){


int x, auxiliar;
int *p1, *p2;
//creamos nuestros arraya
int vector1[5]={1,2,3,4,5};
int vector2[5]={6,7,8,9,10};


p1=&vector1[5];
p2=&vector2[5];

//intercombiamos la poicion de los puenteros
for(x=0;x<5;x++){

auxiliar=*p1 ; 
*p1=*p2;
*p2=auxiliar;

}
//mostramos los vectores 
for(x=0;x<5;x++){
	printf("\n el vector 1 es %d",vector2[x]);
	
	}
	
for(x=0;x<5;x++){
	printf("\n el vector 2 es %d",vector1[x]);
	
	}

}
