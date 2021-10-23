#include <stdio.h>


int main()
{
    int a[10], i;
    for (i=0; i<=21; i++){
        a[i] = i;
    }
    for (i=0; i<=21; i++){
        printf("%d\n", a[i]);
    }


    return 0;
}
