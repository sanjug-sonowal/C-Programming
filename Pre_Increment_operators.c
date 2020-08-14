#include<stdio.h>
int main()
{
    // int result,pre_increment = 5;
    // result= ++pre_increment;
    // printf("%d\n",result);


    int a=5;
    a= ++a + ++a;
    printf("%d",a);
    return 0;
}