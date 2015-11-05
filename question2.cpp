#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main(void)
{

char earthquake; //character variable 

//displays the list of options that the user reads and enters accordingly
	printf("Please enter accordingly to determine the amount of damage caused by \nthe earthquake: \n\n");
	printf("\t Earthquake registered less than a 5.0 on the richter scale, input A. \n\n");
	printf("\t Earthquake registered 5.0 or more but less than 5.5, input B. \n\n");
	printf("\t Earthquake registered 5.5 or more but less than 6.5, input C. \n\n");
	printf("\t Earthquake registered 6.5 or more but less than 7.5, input D. \n\n");
	printf("\t Earthquake registered 7.5 or higher, input F. \n\n");
	scanf("%c", &earthquake);

//switch statement that calls upon variable earthquake
switch (earthquake)
{
	//case 1: n < 5.0
	case 'A':
	case 'a':
		
		printf("\n The earthquake caused little or no damage. \n\n");
		break;
	
	//case 2: 5.0 <= n < 5.5
	case 'B':
	case 'b':
		
		printf("\n The earthquake caused some damage. \n\n");
		break;
	
	//case 3: 5.5 <= n < 6.5	
	case 'C':
	case 'c':
		printf("\n The earthquake caused serious damage: walls may crack or fall. \n\n");
		break;
	
	//case 4: 6.5 <= n < 7.5
	case 'D':
	case 'd':
		printf("\n The earthquake was disastrous: houses and buildings may collapse. \n\n");	
		break;
	
	//case 5: n >=7.5
	case 'f':
	case 'F':
		printf("\n The earthquake was a catastrophe: most buildings were destroyed. \n\n");
		break;
}
	
system("pause");
return 0;
}
