#include<stdio.h>
int main(){
int *p,i,*p2;
//creamos nuestro array
int vector[5]={13,7,3,4,5};
//for para rreorrer el vector peor al reves 


for(i=4;i>=0;i--){
	p=&vector[i];
printf("vector[%d]= %d\n",i,*p);
//printf("\tdireccion:%x",p);

}
}  
