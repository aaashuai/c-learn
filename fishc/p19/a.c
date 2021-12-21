#include <stdio.h>
#include <string.h>

int main()
{
        char str1[100];
        char str2[100];
        int cmp, diff=0;

        printf("please input the first string: ");
        gets(str1);
        printf("please input the second string: ");
        gets(str2);
        printf("please input the compare digit: ");
        scanf("%d", &cmp);

        if (strlen(str1) < cmp || strlen(str2) < cmp){
            printf("length of string less than dight of comparision");
            return -1;
        }

        for (int i=0; i<cmp; i++){
            diff += str1[i] - str2[i];
        }
        printf("result of comparision is: %d\n", diff);

        return 0;
}
