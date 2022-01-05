#include<stdio.h>
#include<conio.h>
void main()
{
	int a,i,c=0;
	clrscr();
	printf("enter the number:");
	scanf("%d",&a);
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
		{
			c=1;
			break;
		}
	}
	if(c==0)
		printf("\n %d is prime number",a);
	else
		printf("\n %d is not prime number",a);
	getch();
}
