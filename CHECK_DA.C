#include<stdio.h>
#include<conio.h>
void main()
{
	int i;
	clrscr();
	printf("enter month number:");
	scanf("%d",&i);
	if (i==1||i==3||i==5||i==7||i==8||i==9||i==12)
	{
	printf("31 days");
	}
	else
	{
	printf("30 days");
	}
	getch();
}