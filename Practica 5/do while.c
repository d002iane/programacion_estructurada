#include <stdio.h>

/*Do While*/

int num=0, sum=0, i=-1;
float prom;

int main(){
	
	do{
		sum+=num;
		i++;
		printf("Ingrese numero entero: ");
		scanf("%d",&num);
			
	}while(num>=0);
	prom=((float)sum)/i;
	printf("El promedio es: %.2f",prom);
	return 0;
}
