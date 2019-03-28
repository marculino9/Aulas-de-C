#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
 	 char ch;
	printf("Digite um simbolo de pontucacao: ");
    scanf("%c",&ch);
    switch(ch)
	{
	case '.': printf("ponto. \n");
	break;
	case ',': printf("virgula. \n");
	break;
	case ':': printf("dois pontos. \n");
	break;
	case ';': printf("ponto e virgula. \n");
	break;
	default: printf("Nao eh pontuacao. \n"); 
	break;
	}
	system("pause");
	return 0;

*/
/*
int main()
{
	int x,y;
	printf("digite um numero: ");
	scanf("%d",&x);
	
	printf("digite um segundo numero: ");
	scanf("%d",&y);
	
	if(x > y)
	{
		printf("O primeiro numero e maior \n");
	}else
	{
		printf("O segundo numero eh maior \n");
	}
	system("pause");		
	return 0;
}
*/
/*
int main()
{
	int x,y;
	printf("digite um numero: ");
	scanf("%d",&x);
	
	printf("digite um segundo numero: ");
	scanf("%d",&y);
	
	if(x > y)
	{
		printf("O primeiro numero e maior \n");
	}else if(x == y)
	{
		printf("Numeros iguais \n");
	}else
	{
		printf("O segundo numero eh maior \n");
	}
	system("pause");		
	return 0;
}
*/
/*
int main()
{
	int x;
	printf("digite um numero: ");
	scanf("%d",&x);
	
	if(x % 2 == 0)
	{
		printf("par \n");
	}else
	{
		printf("impar \n");
	}
	system("pause");
	return 0;
}
*/
/*
int main()
{
	int x,y,z;
	printf("digite um numero: ");
	scanf("%d",&x);
	
	if(x >= 0)
	{
		z = x * x;
		printf("O numero ao quadrado: %d \n",z);
		y = x + x;
		printf("O dobro do numero: %d \n",y);
	}else
	{
		printf("Esse numero e negativo \n");
	}
	system("pause");
	return 0;
}
*/
/*
int main()
{
	float x,y;
	printf("digite seu salario: ");
	scanf("%f",&x);
	printf("digite sua prestacao: ");
	scanf("%f",&y);
	
	if(y > (0.2*x))
	{
		printf("emprestimo nao consedido \n");
	}else
	{
		printf("emprestimo consedido \n");
	}
	system("pause");
	return 0;
}
*/
int main()
{
	float h,z;
	char y;
	printf("digite seu sexo: \n");
	scanf("%c",&y);
	printf("digite sua altura: \n");
	scanf("%f",&h);
	
	
	if(y == 'm')
	{
		z =(72.7 * h) - 58;
		printf("Seu peso ideal eh: %f \n",z);
	}else
	{
		z =(62.1*h) -44.7;
		printf("seu peso ideal eh: %f \n",z);
	}
	
	system("pause");
	return 0;
}