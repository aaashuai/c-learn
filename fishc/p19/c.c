#include <stdio.h>
#include <string.h>


int main(void){
    char str[100] = {0};
    char strCount[100][2] = {{0, 0}};
    char cStr;
    int index=0;
    int maxIndex=0;

    printf("please type sth: ");
    while ((cStr = getchar()) && '\n' != cStr){
        if (index > strlen(str)){
            break;
        }
        str[index] = cStr;
        index++;

        for (int i=0;i<100;i++){
            if (0 == strCount[i][0]){
                strCount[i][0] = cStr;
                strCount[i][1] = 1;
                break;
            }
            if (cStr == strCount[i][0]){
                strCount[i][1]++;
                break;
            }
        }
    }
    printf("str: %s\n", str);
    for (int i=0;i<100;i++){
        if (0 == strCount[i][0]){
            break;
        }
        if (strCount[i][1] > strCount[maxIndex][1]){
            maxIndex = i;
        }
    }
    printf("max alpha: %c, total count: %d\n", strCount[maxIndex][0], strCount[maxIndex][1]);
    return 0;
}
