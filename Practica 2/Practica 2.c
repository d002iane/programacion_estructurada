#include <stdio.h>
int a=9, b=6;
char c1='a', c2='w';


int main(){
	printf("%d + %d = %d\n",a,b,a+b);
	printf("%d - %d = %d\n",a,b,a-b);
	printf("%d * %d = %d\n",a,b,a*b);
	printf("%d / %d = %d\n",a,b,a/b);
	printf("%d mod %d = %d\n",a,b,a%b);
	printf("%d\n",a++);
	printf("%d\n",a--);
    printf("a==b es %d\n",(a==b));
    printf("a!=b es %d\n",(a!=b));
    printf("a>b es %d\n",(a>b));
    printf("a>=b es %d\n",(a>=b));
    printf("a<b es %d\n",(a<b));
    printf("a<=b es %d\n\n",(a<=b));
    
    printf("%c + %c = %d\n",c1,c2,c1+c2);
    printf("%c - %c = %d\n",c1,c2,c1-c2);
    printf("%c * %c = %d\n",c1,c2,c1*c2);
    printf("%c / %c = %d\n",c1,c2,c1/c2);
    printf("%c mod %c = %d\n",c1,c2,c1%c2);
    printf("%d\n",c1++);
    printf("%d\n",c1--);
}
