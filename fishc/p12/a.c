#include <stdio.h>

int main(void)
{
    char level;

    printf("input your level: ");
    scanf("%c", &level);

    switch (level){
        case 'A': 
            printf("your score is between 90 - 100\n");
            break;
        case 66: 
            printf("your score is between 80 - 90\n");
            break;
        case 67: 
            printf("your score is between 70 - 80\n");
            break;
        case 68: 
            printf("your score is between 60 - 70\n");
            break;
        case 69: 
            printf("your score is less than 60\n");
            break;
        default:
            printf("invalid input\n");
    }
    return 0;
}
