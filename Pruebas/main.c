#include <unistd.h>
#include <stdio.h>

int main(void)
{

    int num = 23;
    int *pNum = &num;
    printf("adress of num: %p\n", &num);
    printf("value of pNum: %p\n", pNum);
    printf("value of num: %d\n", num);
    printf("value at stored adress: %d\n", *pNum);
    return 0;

}