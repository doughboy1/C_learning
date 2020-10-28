#include <stdio.h>
#include <stdlib.h>

struct album
{
    char name[50];
    char artist[50];
    int date;
    
};

int main()
{
    struct album *ptr;
    int n, i;
    
    printf("Enter the amount of songs:\n");
    scanf("%d", &n);
    
    ptr = (struct album*) malloc(n * sizeof(struct album));
    
    for(i = 0; i < n; i ++)
    {
        printf("Enter the name, artist, and the year that your song was made (N, A, D): \n");
        scanf("%s %s %d", (ptr + i) -> name, (ptr + i) -> artist, &(ptr + i) -> date);
    }
    
    for(i = 0; i < n; i ++)
    {
        printf("\nName: %s\n", (ptr + i) -> name);
        printf("Artist: %s\n", (ptr + i) -> artist);
        printf("Date: %d\n", (ptr + i) -> date);
    }

    return 0;
}
