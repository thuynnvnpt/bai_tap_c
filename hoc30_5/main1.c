#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
 int interger1;
 int interger2;
 int sum;
 
printf("Enter first integer\n");
scanf("%d", &interger1);
 
printf("Enter second integer\n");
scanf("%d", &interger2);

sum = interger1 + interger2;
printf("sum is %d",sum);
	return 0;
}
