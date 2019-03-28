#include <stdio.h>
#include <stdlib.h>
#include "aritimetica.h"

int main()
{
	int x,y,z;
	char ch;
	printf("digite a operacao matematica : ");
	ch = getchar();
	printf("digite dois numeros; ");
	scanf("%d %d", &x, &y);
	  switch(ch){
	  case '+': z = soma (x,y);
	  break;
	  case '-': z = sub (x,y);
	  break;
	  case '/': z = dividir (x,y);
	  break;
	  case '*': z = multi (x,y);
	  break;
	  default: z = soma (x,y);
	  }
	  printf("o resultado eh: %d \n", z);
	  system("pause");
	  return 0;
}