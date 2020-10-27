#include <stdio.h>
#include <stdlib.h>

struct person {
    int age;
    float height;
    struct person *next;
};

typedef struct person person_s;

int main()
{
    person_s p1, p2, p3;
    
    person_s *head;
    
    p1.age = 13;
    p2.age = 21;
    p3.age = 9;
    
    p1.height = 5.5;
    p2.height = 6.5;
    p3.height = 4.7;
    
    head = &p1;
    p1.next = &p2;
    p2.next = &p3;
    p3.next = NULL;

    printf("P1's age is %d\nTheir height is %.1f\n", head -> age, head -> height);

    return 0;
}

// I'm guessing that this is a linked list
