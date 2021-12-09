#include<stdio.h>
#include<conio.h>

void main()
{
	int i,n,prime=1;
	clrscr();
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	if(n%i==0)
	{
		prime=0;
		break;
	}
	if(prime) printf("\n%d is prime",n);
	else printf("\n%d is not prime",n);
	getch();
}