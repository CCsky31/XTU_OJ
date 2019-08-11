#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main() {
    int a;
    char b; 
    scanf("%d %c", &a,&b);
    printf("%d,%c", a,b);
    return 0;
}