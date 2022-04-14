#include <stdio.h>
#include <string.h>

void win(char s[]){
    if(strcmp(s,"ChuiZi")==0)
        printf("Bu\n");
    else if(strcmp(s,"JianDao") ==0)
        printf("ChuiZi\n");
    else 
        printf("JianDao\n");
}

int main(void){
   int n,count = 0;;
   char s[20];
   scanf("%d",&n);
   for(int i=1;;i++){
       scanf("%s",s);
       if(strcmp(s,"End")==0){
           break;
       }
       else{
            if(count==n){
                printf("%s\n",s);
                count = 0;
            }
            else{
                win(s); 
                count ++; 
            }        
       }
   }
   return 0;
}