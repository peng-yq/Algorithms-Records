#include <stdio.h>

int main(void){
   long long int x,s,n=1,count =1;
   scanf("%lld",&x);
   while(n<x){
       n =n*10 +1;
       count++;
   }
   while(1){
      printf("%d",n/x);
      n %= x;
      if(n==0)
        break;
      else{
          n=n*10+1;
          count++;
      }
   }
   printf(" %lld",count);
   return 0;
}

//用题目提示的方法做可以得15分，有两个测试点超时了。
//看题解发现用手算除法的原理很简单。