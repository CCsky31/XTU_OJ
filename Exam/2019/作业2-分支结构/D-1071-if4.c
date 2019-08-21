#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
#include <math.h>
int main (){
    double a,b,c,s;
    scanf("%lf %lf %lf",&a,&b,&c);
    if (a+b>c && a+c>b && b+c>a){
        s = a+b+c;
        s = s/2;
        s = s*(s-a)*(s-b)*(s-c);
        s = sqrt(s);
        printf("%0.2lf",s);
    } else {
        printf("Not a triangle.");
    }
    return 0;
}
