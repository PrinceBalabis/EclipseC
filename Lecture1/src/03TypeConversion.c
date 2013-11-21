//
//  TypeConversion.c
//  C examples
//
//  Created by Ulrik on 2013-10-17.
//
//

#include <stdio.h>

int main(void)
{
    int i,j;
    
    float result;
    
    for(i=0; i<20; i++)
    {
        result = ((float) i)/((float) 3);	/* Example of type conversion in C */
        printf("%d/3=\t%f\n", i, result);
    }
    
}