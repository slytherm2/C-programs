//The C library
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

double xc,yc;	//xc is the x coordinate and yc is the y coordinate variables 

	printf("What is the X-coordinate on the Cartesian Plane? \n"); //asking user for x coordinate
	scanf("%lf",&xc);												//scanning for user input in double 
	
	printf("What is the Y-coordinate on the Cartesian Plane? \n"); //asking user for y coordinate
	scanf("%lf",&yc);												//scanning for user input in double 
	
if ((xc == 0) && (yc != 0)) //if x is equal to zero and y isn't equal to zero
	{	
	printf("(%.1f,%.1f) is on the Y-axis. \n",xc,yc);
	}
	
else if ((yc == 0) && (xc != 0)) //if y is equal to zero and x isn't equal to zero
	{
	printf("(%.1f,%.1f) is on the X-axis. \n",xc,yc);
	}

else if ((xc > 0) && (yc >0)) // if x is greater than 0 and y is greater than zero
	{
	printf("(%.1f,%.1f) is in quadrant I. \n",xc,yc);
	}

else if ((xc < 0) && (yc > 0)) //if x is less than zero and y is greater than zero
	{
	printf("(%.1f,%.1f) is in quadrant II. \n",xc,yc);
	}

else if ((xc < 0) && (yc < 0)) //if x is less than zero and y is less than zero
	{	
	printf("(%.1f,%.1f) is in quadrant III. \n",xc,yc);
	}	

else if ((xc > 0) && (yc < 0)) //if x is greater than zero and y is less than zero
	{
	printf("(%.1f,%.1f) is in quadrant IV. \n",xc,yc);
	}
	
else //the only case is when the user inputs (0,0) 
	{
	printf("(%.1f,%.1f) is at the origin. \n",xc,yc);
	}
	
system ("pause");
return 0;
}
