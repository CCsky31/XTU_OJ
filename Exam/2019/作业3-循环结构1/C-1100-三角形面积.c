#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main (){
    int n,i,B,H;
    double s;
    scanf("%d",&n);
    for (i = 1;i <= n;i++){
        scanf("%d %d",&B,&H);
        s=B * H;
        s=s/2;
        printf("%0.1lf\n",s);
    }
    return 0;
}