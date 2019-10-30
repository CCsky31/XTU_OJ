#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <bits/stdc++.h>
int main(){
    int T,i,left,right,times,sum;
    char str[10002];
    scanf("%d",&T);
    while(T--){
        scanf("%s",str);
        getchar();
        scanf("%d",&times);
        while(times--){
            sum=0;
            scanf("%d %d",&left,&right);
            for(i=left;i<=right-1;i++){
                if(str[i] == 'M' && str[i-1] == 'F'){
                    sum++;
                }
                if(str[i] == 'F' && str[i-1] == 'M'){
                    sum++;
                }
            }
            printf("%d\n",sum);
        }
    }
    return 0;
}
