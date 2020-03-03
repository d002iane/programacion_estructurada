#include <stdio.h>

/*While and do while*/
int num, i=0;
float prom, sum=0;

int main(){
	
	printf("Ingrese numero entero: ");
	scanf("%d",&num);
	while(num>=0){
		sum+=num;
		i++;
		printf("Ingrese otro numero: ");
		scanf("%d",&num);
	}
	prom=sum/i;
	printf("El promedio es: %.2f",prom);
	return 0;
}
