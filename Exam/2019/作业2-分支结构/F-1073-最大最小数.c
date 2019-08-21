#pragma warning(disable:4996)； //关闭scanf不可用的提示

//以下为代码正文



#include <stdio.h>
int main (){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a<b && b<c) printf("%d %d",c,a); 
    if(a<c && c<b) printf("%d %d",b,a); 
    if(b<a && a<c) printf("%d %d",c,b); 
    if(b<c && c<a) printf("%d %d",a,b);
    if(c<a && a<b) printf("%d %d",b,c);
    if(c<b && b<a) printf("%d %d",a,c);
    return 0;
}