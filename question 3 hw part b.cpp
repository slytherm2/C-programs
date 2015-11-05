#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{

double xc,yc;	

	printf("What is the X-coordinate on the Cartesian Plane? \n");
	scanf("%lf",&xc);

	printf("What is the Y-coordinate on the Cartesian Plane? \n");
	scanf("%lf",&yc);	
	
if ((xc == 0) && (yc != 0))
{

	printf("(%.1f,%.1f) is on the Y-axis. \n",xc,yc);
}

if ((yc == 0) && (xc != 0))
{
	
	printf("(%.1f,%.1f) is on the X-axis. \n",xc,yc);
}

if ((xc > 0) && (yc >0))
{
	
	printf("(%.1f,%.1f) is in quadrant I. \n",xc,yc);
}

if ((xc < 0) && (yc > 0))
{	
	printf("(%.1f,%.1f) is in quadrant II. \n",xc,yc);
}

if ((xc < 0) && (yc < 0))
{
	printf("(%.1f,%.1f) is in quadrant III. \n",xc,yc);
}

if ((xc > 0) && (yc < 0))
{

	printf("(%.1f,%.1f) is in quadrant IV. \n",xc,yc);
}
	
else
{

	printf("(%.1f,%.1f) is at the origin. \n",xc,yc);
}
system ("pause");
return 0;
}
