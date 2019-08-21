#pragma warning(disable:4996)； //关闭scanf不可用的提示

//以下为代码正文



#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if (a >= 90 && a <= 100){
        printf("A"); 
    } else {
        printf("B"); 
    }
    return 0;
}