#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main (){
    int a,result,i;
    scanf("%d",&a);
    while(a != -1){
        result = 1;
        for (i = 1; i <= a; i++){
            result = result * i % 10007;
        }
        printf("%d\n",result);
        scanf("%d",&a);
    }
    return 0;
}