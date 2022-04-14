#include <stdio.h>
#include <string.h>

int main(void){
    int i,j,flag;
    char c1[10001],c2[10001];
    gets(c1);
    gets(c2);
    for(i=0;i<strlen(c1);i++){
        flag = 0;
        for(j=0;j<strlen(c2);j++){
            if(c1[i]==c2[j]){
                flag=1;
                break;
            }
        }
        if(!flag){
            printf("%c",c1[i]);
        }
    }
    return 0;
}

/*
大佬版
#include<stdio.h>
#include<string.h>
int main(){
	char a[100000],b[100000];
	gets(a);
	gets(b);
	for(int i=0;i<strlen(a);i++)
	{
		if(strchr(b,a[i]))
			continue;
		else 
			printf("%c",a[i]);
	}
	return 0;
}
*/

