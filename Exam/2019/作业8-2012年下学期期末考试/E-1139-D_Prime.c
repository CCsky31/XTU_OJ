#pragma warning(disable:4996)； //关闭scanf不可用的提示
#pragma warning(disable:6031)； //关闭scanf返回值被忽略
//以下为代码正文

#include <stdio.h>
#include <math.h>

int isPrime(int num){
    if(num ==2|| num==3 ) return 1 ;
    if(num %6!= 1&&num %6!= 5) return 0 ;
    int tmp =sqrt( num);
    for(int i= 5;i <=tmp; i+=6 )
        if(num %i== 0||num %(i+ 2)==0 )
            return 0 ;
    return 1 ;
}


int main(){
    int T,a,i,b;
    scanf("%d",&T);
    while(T--){
        scanf("%d",&a);
        b=0;
        for(i=2;i*i<a;i++){
            if(a % i == 0){
                if(isPrime(i) && isPrime(a/i) && i != a/i){
                    b=1;
                    break;
                } 
                
            }
        }
        if(b==1){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
}