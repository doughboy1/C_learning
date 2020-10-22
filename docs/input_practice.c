#include <stdio.h>

void changeable_bars(int a, int b);

int main()
{
    int a, b;
    
    printf("Enter the minimum amount of bars: \n");
    scanf("%d", &a);
    
    printf("Enter the maximum amount of bars: \n");
    scanf("%d", &b);
    
    changeable_bars(a, b);
}

void changeable_bars(int a, int b)
{

    int bars;
    
    putchar('\n');
   
    printf("Min bars = %d\n", a);
    printf("Max bars = %d\n", b);
    putchar('\n');
    
    if(a > b)
    {
        printf("Error: The minimum amount of bars is greater than the maximum amount of bars.");
    }
   
    for(a = a; a <= b; a ++)
    {
        printf("The current value is %d\n", a);
        for(bars = 1; bars <= a; bars ++)
        {
            putchar('|');
        }
        
        putchar('\n');
    }
    
    putchar('\n');
}

