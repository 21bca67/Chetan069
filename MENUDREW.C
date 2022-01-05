/* write a menu drewen program which perform following operation
 1.Addition 2. subtraction 3.exit
 date:29-12-21*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int c,v1,v2;
	char ch;
	clrscr();
	do
	{
		clrscr();
		printf("\n\n\t\t menu \n\t");
		printf("\t________________________________________");
		printf("\n\t\t 1.Addition 2.Subtraction 3.Exit");
		printf("\n\t\t________________________________________");
		printf("\n\n\t\t enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1: printf("\n\t\t Enter two value");
				scanf("%d %d",&v1,&v2);
				printf("\n\t\t sum of %d & %d is %d",v1,v2,v1+v2);
				break;
			case 2: printf("\n\n\t\t Enter two value:");
				scanf("%d %d",&v1,&v2);
				printf("\n\t\t sub  of %d & %d is %d",v1,v2,v1-v2);
				break;
			case 3: exit(0);

			default: printf("\n\n\t\t invalid choice:\n please enter number between 1 to 3");
		}
		printf("\n\n\t\t Do you wnat to continue(yes=Y/y,no=N/n):");
		flushall();
		scanf("%c",&ch);
	}
	while(ch=='y'||ch=='y');
	getch();
}

