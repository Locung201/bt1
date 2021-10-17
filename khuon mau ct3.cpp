#include <stdio.h>

int main ()
{
	int year, age;
	printf("Ban sinh nam nao? ");
	scanf("%d", & year);
	
	age = 2021 - year;
	
	printf("Ban %d tuoi",age);
}
