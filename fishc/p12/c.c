#include <stdio.h>

int main()
{
        char ch[6] = "FishC";
        int i;

        printf("请输入你想访问的字符序号(0~5)：");
        scanf("%d", &i);

        if (i > 5 || i < 0){
            printf("invalid number\n");
            return 1;
        }
        
        printf("%c\n", ch[i]);

        return 0;
}
