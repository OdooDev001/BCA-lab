#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j;
	float s=0,term=1;
	clrscr();
	for(i=2;term>=0.000001;i++)
	{
		s+=term;
		term=1;
		for(j=0;j<i;j++)
		term*=1.0/i;
	}
	printf("\nSum = %f",s);
	getch();
}
