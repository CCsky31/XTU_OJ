#pragma warning(disable:4996)； //关闭scanf不可用的提示
//以下为代码正文

#include <stdio.h>
int main (){
    int n,i,lie,hang,a=1;
    scanf("%d",&n);
    while (n!=0){
        hang=3*n;
        lie=n;
        printf("Case %d:\n",a);
        while (hang!=0){
            do{
                printf("XTU");
                n--;
            } while (n>0);
            printf("\n");
            n=lie;
            hang--;
        }
        printf("\n");
        scanf("%d",&n);
        a++;
    }
    return 0;
}