#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
	int a,b,c,choice;
	printf("Enter values of a and b:\n");
	scanf("%d%d",&a,&b);
	printf("1.Addition\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
	case 1:
		addition(a,b);
		break;
	case 2:
		subtraction(a,b);
		break;
	case 3:
		multiplication(a,b);
		break;
	case 4:
		division(a,b);
		break;
	}
	return 0;
}

void addition(int a, int b)
{
	int sum;
	sum=a+b;
	printf("Sum is %d",sum);
}

void subtraction(int a, int b)
{
	int diff;
	diff=a-b;
	printf("Difference is %d",a-b);
}

void multiplication(int a, int b)
{
	int prod;
	prod=a*b;
	printf("Product is %d",prod);
}

void division(int a, int b)
{
	int quo;
	quo=a/b;
	printf("Quotient is %d",quo);
}
