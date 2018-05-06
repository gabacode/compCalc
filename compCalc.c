#include<stdio.h>
#include <math.h>

int main()
{
	
    float i = 0;
    float cap, intrs, comp;

    printf("Capital invested (amount): ");
    scanf("%f", &cap);

    printf("Percentage profit: ");
    scanf("%f", &intrs);

    printf("How many times: ");
    scanf("%f", &comp);
    
    for ( i=0; i<comp; i++)
    
    { cap = cap* (1 + intrs / 100); cap=cap;

    printf( "Total profit: %.2f\n", cap);
        
    }
	return 0;
}
