#include <stdio.h>


int main(void)
{
    float a, b;
    char operator;

    printf("请输入式子, 以空格分开: ");
    scanf("%f %c %f", &a, &operator, &b);

    if (operator == '+'){
        printf("结果是: %.2f\n", a+b);

    } else if (operator == '-'){
        printf("结果是: %.2f\n", a - b);

   } else if (operator == '*'){
        printf("结果是: %.2f\n", a*b);

   } else if (operator == '/'){
       if (b ==0){
           printf("很遗憾, 除数不能为0\n");
           return 1;
       }
        printf("结果是: %.2f\n", a / b);

   } else {
       printf("暂不支持的操作符\n");
       return 1;
   }
    return 0;
}
