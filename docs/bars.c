#include <stdio.h>
#include <stdin.h> 

void bars(void);

void changable_bars(int a, int b);

int main()
{
    int y = 1, x = 10;
    
    bars();
    
    changable_bars(y, x);
}

void bars(void)
{
    int y, bars;
    
    // putting y
    
    for(y = 1; y < 101; y ++)
    {
        printf("Y is equal to %d\n", y);
        for(bars = 1; bars <= y; bars ++)
        {
            putchar('|');
        }
        
        putchar('\n');
    }
    
    putchar('\n');
    
    // putting y * 2
    
    for(y = 1; y < 201; y ++)
    {
        printf("The current value of y*2 is %d\n", y * 2);
        for(bars = 1; bars <= y; bars ++)
        {
            putchar('|');
        }
        
        putchar('\n');
    }
    
    putchar('\n');
    
    // idea for future: have a changable min and max amount of bars
    // done
}

void changable_bars(int a, int b)
{

    int bars;
    
    putchar('\n');
   
    printf("Min bars = %d\n", a);
    printf("Max bars = %d\n", b);
    putchar('\n');
   
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
