#include<stdio.h>
#include<windows.h>

COORD pos={0,0};

int main()
{
	gotoxy(20,1);
	dot();
	gotoxy(60,2);
	printf("Student marks list");
	gotoxy(20,3);
	dot();
	gotoxy(30,4);
	printf("Roll No");
	gotoxy(66,4);
	printf("Name");
	gotoxy(100,4);
	printf("Average");
	gotoxy(20,5);
	waved();
	gotoxy(60,7);
	printf("Data to be Displayed");
	gotoxy(20,9);
	star();
	gotoxy(64,10);
	printf("Thank you");
	gotoxy(20,11);	
	cap();
	
	printf("\n\n---------------------------------------\n\n");
	return 0;
}

dot()
{
	int i;
	for(i=0;i<2;i++)
	printf("----------------------------------------------");
}
waved()
{
	int i;
	for(i=0;i<2;i++)
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
}
star()
{
	int i;
	for(i=0;i<2;i++)
	printf("**********************************************");
}
cap()
{
	int i;
	for(i=0;i<2;i++)
	printf("^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^");
}


gotoxy(int x,int y)
{
	pos.X=x;
	pos.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
