#include <stdio.h>

int main(void){
    int a, b;

    printf("输入两个整数, 以空格分隔: ");
    scanf("%d %d", &a, &b);

    if (a != b){
        if (a > b){
            printf("%d > %d\n", a, b);
        } else {
            printf("%d < %d\n", a, b);
        }

    } else {
        printf("%d == %d\n", a, b);
    }
    return 0;
}
