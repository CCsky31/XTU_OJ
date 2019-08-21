#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    if (a >= 65 && a <= 90){
        a = a + 32;
    } else if (a >= 97 && a <= 122){
        a = a - 32;
    } 
    printf("%c",a); 
    return 0;
}
