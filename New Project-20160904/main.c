#include <stdio.h>

int main()
{
    int n, a, i, s, t;
    
    printf("Sum to n terms of the sequence 1, -3, 5, -7, 9, -11, ....\n");
    printf("Enter the number of terms to sum, n :");
    scanf("%d",&n);
    printf("You requested to sum %d terms...\n",n);
    t = 1;
    s = t;
    a = -1;
    
    /* for loop execution */
    for( i = 2; i <= n; ++i ) {
    
    t += a*(i-1)*4;
    s += t;
    a = (-1)*a;
    }
    
    printf("The %dth term, and sum to %d terms of 1, -3, 5, -7, 9, -11..... are \n",n,n);
    printf(" %d and %d respectively \n", t, s);
    
    return 0;
    
}

