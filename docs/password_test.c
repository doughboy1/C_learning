#include <stdio.h>
#include <string.h>

#define MAX 63
#define MAX_2 3

void set_password();

void password();

int main()
{
 
    set_password(); 
    
    return 0;
}

void set_password()
{
    char password_setup[64];
    
    printf("Type the password you would like to use:\n");
    fgets(password_setup, MAX, stdin);
    
    password(password_setup);
}

void password(char password_custom[64])
{
    char password_answer[64];
    int result;
    
    printf("Type the password to continue (password is case sensitive):\n");
    
    fgets(password_answer, MAX, stdin);
    
    result = strcmp(password_custom, password_answer);
    
    if(result == 0)
    {
        printf("The password entered is correct. You may continue.\n");
    }
    
    else
    {
        printf("The password entered is incorrect.\n");
    }
}
