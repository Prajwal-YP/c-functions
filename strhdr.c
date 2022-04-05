#include<stdio.h>
#include<string.h>

void main()
{
	char a[100]="Prajwal",b[100]={};
	
	printf("string concatination of \"Prajwal\" and \"%s\" (till 3rd index) : %s"," y p prajwal",strncat(a," y p prajwal",4));
	
	strcpy(b,a);
	
	printf("\n\nString setting of \"Prajwal y p\" with \"*\" : %s",strset(b,'*'));
	printf("\n\nString setting of \"Prajwal y p\" with \"*\" till index 6 : %s",strnset(a,'*',7));
	
	strcpy(a,"Prajwal Y P");
	strcpy(b,"prajwal y p");
	
	printf("\n\n\t\tSring-1 : %s",a);
	printf("\n\n\t\tSring-2 : %s",b);
	printf("\n\n--> comparing string-1 and string-2 ignoring cases : %d",strcmpi(a,b));
	
}
