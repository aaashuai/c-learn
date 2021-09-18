#include <stdio.h>


int main(void)
{
    char input;

    printf("input letter: ");
    scanf("%c", &input);

    if (input < 65){
        printf("invalid letter\n");
        return 1;
    } else if (input <= 90){
        printf("%c\n", input + 32);
    } else if (input < 97){
        printf("invalid letter\n");
        return 1;
    } else if (input <= 122){
        printf("%c\n", input - 32);
    } else{
        printf("invalid letter\n");
    }
    return 0;
}
