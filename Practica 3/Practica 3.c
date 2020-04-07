#include <stdio.h>
#include <stdlib.h>

char c;

int  main ()
{
    printf("\n\tIntroducir un caracter: ");
    c=getchar();
	fflush(stdin);
	printf("\n\t");
    if(c>=65&&c<=90)
		printf ("\n\tEl caracter es letra mayuscula");
	else
	{			
		if(c>=97&&c<=122)
			printf("\n\tEl caracter es letra minuscula");
		else
		{
			if(c>='0')
				printf("\n\tEl caracter es un numero");
			else
				printf("\n\tEl caracter es un simbolo");
		}
	}

	
	return  0;
}
