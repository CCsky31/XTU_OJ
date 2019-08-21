#pragma warning(disable:4996)； //关闭scanf不可用的提示

//以下为代码正文



#include <stdio.h>
int main(){
    int a,b,c,n;
    scanf("%d",&n);
    c=n%10;
    a=n/100;
    b=n%100;
    b=b/10;
    if (a == b && a!=c){
        printf("Yes"); 
    } else if (a == c && a != b){
        printf("Yes"); 
    } else if (b == c && a != b){
        printf("Yes"); 
    } else printf("No");
    return 0;
}