#include <stdio.h>

#define INT int
#define BEGIN {
#define END }
#define IF if(
#define THEN ){
#define ELSE } else {
#define FI ;}
#define RTN return 0;


INT main()
BEGIN
    INT i;
    printf("please input your age: ");
    scanf("%d", &i);

    IF i < 18 THEN
        printf("your age is under 18, your cannot use this program!\n");
    ELSE
        printf("your age is ok, please use this program, hehehe\n");
    FI
    RTN
END
