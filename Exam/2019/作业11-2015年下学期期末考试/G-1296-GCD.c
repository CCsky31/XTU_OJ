#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include<stdio.h>
int main()
{
    int T,a, b;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&a ,&b);
        a--;
        printf("%d\n", (b - (b/2 + b/3 - b/6)) - (a - (a/2 + a/3 - a/6)));
    }
    return 0;
}
