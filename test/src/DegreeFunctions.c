//
//  DegreeFunctions.c
//  Playing with Unity
//
//  Created by ac7391 on 2013-10-29.
//
//

#include <stdio.h>
#include "DegreeFunctions.h"

int DegreeSum(int x, int y)
{
	int sum;

	sum = x+y;
	while(sum>360)
	{
		sum = sum-360;
	}

	while(sum<0)
	{
		sum = sum+360;
	}

	return sum;
}
