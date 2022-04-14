#include <stdio.h>

int main(void){
   int num[1001],n,flag = 1;
   scanf("%d %d %d",&num[0],&num[1],&n);
   for(int i=0;i<n;i++){
       int temp = num[i]*num[i+1];
       if(temp <= 9)
           num[++flag] = temp;
       else{
           num[++flag] = temp /10;
           num[++flag] = temp % 10;
       }
       if(flag > n)
           break;
   }
   for(int i=0;i<n;i++){
        if(i!=n-1)
            printf("%d ",num[i]);
        else
            printf("%d",num[i]);
   }
   return 0;
}