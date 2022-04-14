#include <stdio.h>
#include <string.h>

int main(void){
    char s[12];
    int a[10]={0},arr[10],count=0;
    scanf("%s",s);
    for(int i=0;i<11;i++){
        a[s[i]-'0']=1;
    }
    for(int i=9,j=0;i>=0;i--){
        if(a[i]==1){
            arr[j]=i;
            j++;
            count++;
        }
    }
    printf("int[] arr = new int[]{");
    for(int i=0;i<count;i++){
        if(i==0)
            printf("%d",arr[i]);
        else 
            printf(",%d",arr[i]);
    }
    printf("};\n");
    printf("int[] index = new int[]{");
    for(int i=0;i<11;i++){
        for(int j=0;j<count;j++){
            if(s[i]-'0'==arr[j]){
                if(i==0)
                    printf("%d",j);
                else 
                    printf(",%d",j);
                break;
            }
        }
    }
    printf("};\n");
    return 0;
}