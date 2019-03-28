#include <stdio.h>
#include <stdlib.h>
/*
int main()
{
    int a,b;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    while(a < b)
	{
		a = a + 1;
		printf("%d \n",a);	
	}
	system("pause");
    return 0;
}
*/
/*
int main()
{
    int a,b,c;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    for (c = a; c <= b; c++)
	{
		printf("%d \n",c);	
	}
	system("pause");
    return 0;
}
*/
/*
int main()
{
    int a,b;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    for (; a <= b; a++)
	{
		printf("%d \n",a);	
	}
	system("pause");
    return 0;
}
*/
/*
int main()
{
    int a,b;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    for (a= 1; ; a++)
	{
		printf("%d \n",a);	
	}
	system("pause");
    return 0;
}
*/
/*
int main()
{
    int a,b;
    printf("digite o valor de a: ");
    scanf("%d",&a);
    printf("digite o valor de b: ");
    scanf("%d",&b);
    for (a= 1; a<= b;)
	{
		printf("%d \n",a);	
		a++;
	}
	system("pause");
    return 0;
}
*/
/*
int main()
{
	int i,j;
	for(i = 0, j = 100; i < j; i++,j--)
	{
		printf("i = %d e j = %d \n",i,j);
	}
	return 0;
}
*/
/*
int main()
{
	int i;
	do
	{
		printf("Escolha uma opcao: \n");
		printf("(1) opcao 1 \n");
		printf("(2) opcao 2 \n");
		printf("(3) opcao 3 \n");
		scanf("%d",&i);
	} while(i < 1 || i > 3);
	printf("Voce escolheu a opcao %d \n",i);
	system("pause");
	return 0;
}
*/
/*
int main()
{
	int i = 1, j;
	while(i < 5)
	{
		j = 1;		
	while(j <5)
	{
		if(i == j){
			printf("1 ");
		}else
		{
			printf("0 ");
		}
		j++;
	}
	printf("\n");
	i++;
	}
	system("pause");
	return 0;
}
*/

int main()
{
	int i = 1, j;
	while(i < 5)
	{
		j = 1;		
	while(j < 5)
	{
		if(i == j){
			printf("1 ");
		}else
		{
			printf("0 ");
		}
		j++;
	}
	printf("\n");
	i++;
	}
	system("pause");
	return 0;
}
