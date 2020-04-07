#include <stdio.h>
#include <stdlib.h>

char oper;
int num1=0;
int num2=0;
float resul=0;

int main()
{
	printf("\n\tIngrese un operador: ");
	scanf("%c",&oper);
	fflush(stdin);
	printf("\n\tIngrese un numero: ");
	scanf("%d",&num1);
	printf("\n\tIngrese otro numero: ");
	scanf("%d",&num2);
	switch(oper)
	{
		case '+':
			resul=num1+num2;
		    break;
		    
		case '-':
			resul=num1-num2;
			break;
		
		case '*':
			resul=num1*num2;
			break;
		
		case '/':
			resul=num1/num2;
			break;
		
		default:
			printf("\n\tOperador invalido ");
	}
	
	if (oper=='+'||oper=='-'||oper=='*'||oper=='/')
		printf("\n\tLa operacion es: %d %c %d = %.2f ",num1,oper,num2,resul);	
	
	return 0 ;
}
