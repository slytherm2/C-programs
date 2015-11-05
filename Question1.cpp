//The C library
#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int main(void)
{
	
double wt_lb,  //weight in pounds variable
		ht_in, //height in inches variable 
		BMI;	//body mass index variable
	
	printf("What is your weight in pounds? \n"); 	//prompts user for weight
	scanf("%lf",&wt_lb);							//scans for user input

	printf("What is your height in inches? \n");	//prompts user for height in inches
	scanf("%lf",&ht_in);							//scans for user input
	
		BMI = (703 * wt_lb) * pow(ht_in,2);			//calculates the BMI 

//the categories of different body mass indexes and classifications	
if (BMI <= 0)
{
	printf("You need to visit  the doctor because this is impossible! \n\n");
}
else if (BMI < 18.5)
{
	printf("Your BMI is %.1f and you are classified as underweight. \n\n",BMI);	
}	
else if (BMI < 24.9)
{
	printf("You BMI is %.1f and you are classified as normal weight. \n\n",BMI);	
}	
else if(BMI < 29.9)
{
	printf("Your BMI is %.1f and you are classified as overweight. \n\n",BMI);	
}	
else if (BMI > 30.0)
{
	printf("Your BMI is %.1f and you are considered obese. \n\n",BMI);
}


	system("pause");
	return 0;
}
