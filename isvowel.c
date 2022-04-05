#include<stdio.h>

main()
{
	char ch;
	printf("\nEnter a character  : ");
	ch=getch();
	printf("%c",ch);
	fflush(stdin);
	
	f(ch);
	
	printf("\n\n----------------------------------\n\n");
}

f(ch)
{
	int a;
	a=isalpha(ch);
	if(a==0)
	{
		printf("\n\n\t\tGiven character is neither Vowel nor alphabet !!");
		return;	
	}
	else
	{	
		printf("\n\n\t\tGiven character is maybe a Vowel or alphabet !!");
		
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
			printf("\n\n\tCHARACTER IS A VOWEL");
		else if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
			printf("\n\n\tCHARACTER IS A VOWEL");
		else
			printf("\n\n\tCHARACTER IS A CONSONENT");
	}

	
}

int isapha(ch)
{
	if(ch>=65 &&ch<=90)
		return 1;
	else if(ch>=97 && ch<=122) 
		return 2;
	else
		return 0;
}
