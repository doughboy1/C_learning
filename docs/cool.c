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

    int i = 0, y = 0, z = 190, g;

    for(y = 0; y < 191; y ++)
    {
        for(x = 1; x < 191; x ++)
        {
            for(i = 0; i < x; i ++)
            {  
                putchar(' ');
            }

            printf("||||||||||");
            putchar('\n');
            if(x == 190)
            {
                for(z = 190; z > 0; z --)
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