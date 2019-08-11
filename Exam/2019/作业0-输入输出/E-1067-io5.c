#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    printf("The ASCII of '%c' is %d.",a,a);
    return 0;
}