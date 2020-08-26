#include <stdio.h>

void cool(void);

int main()
{
    cool();
    return 0;
}

void cool(void)
{
    int x;

    int i = 0, y = 0, z = 99, g;

    for(y = 0; y < 100; y ++)
    {
        for(x = 1; x < 100; x ++)
        {
            for(i = 0; i < x; i ++)
            {  
                putchar(' ');
            }

            printf("||||||||||");
            putchar('\n');
            if(x == 99)
            {
                for(z = 99; z > 1; z --)
                {
                    for(g = 0; g < z; g ++)
                    {
                        putchar(' ');
                    }
                    puts("||||||||||");
                }
            }
        }
    }
}