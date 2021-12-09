#include<stdio.h>
#include<conio.h>

void printrev(char*);

void main()
{
	char str[15];
	clrscr();
	printf("Enter a string : ");
	gets(str);
	printf("\nReverse is ");
	printrev(str);
	getch();
}

void printrev(char *p)
{
	if(*p=='\0') return;
	printrev(p+1);
	putchar(*p);
}