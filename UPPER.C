#include<stdio.h>
#include<conio.h>
void upper()
{
	char a[10];
	int i;
	printf("Enter the name  ");
	gets( a);
	for(i=0;i<=6;i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			a[i] = a[i]-32;
		}
	}
	printf("%s",a);
}
void lower()
{
	char a[10];
	int i;
	printf("Enter the name ");
	gets(a);
	for(i=0;i<=6;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
	}
	printf("%s",a);
}

void mcat()
{
	char a[19]={"this is my "},b[20]={"name"},c[30];
	int i=0,j=0;
	while(a[i]!='\0')
	{
		c[j] =a[i];
		i++;
		j++;
	}
	i=0;
	while(b[i]!='\0')
	{
		c[j] =b[i];
		i++;
		j++;
	}
	c[j]='\0';
	puts(c);
}

void main()
{
clrscr();
upper();
lower();
mcat();
getch();
}

