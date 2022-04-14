#include <stdio.h>

struct student{
    int sex;
    char name[9];
    int flag;
};

int main(void){
    int n,i,j;
    scanf("%d",&n);
    struct student stu[n];
    for(i=0;i<n;i++){
        scanf("%d %s",&stu[i].sex,stu[i].name);
        stu[i].flag = 0;
    }
    for(i=0;i<n/2;i++){
        for(j=n-1;j>=n/2;j--){
            if(stu[i].sex!=stu[j].sex && !stu[j].flag){
                stu[i].flag=stu[j].flag=1;
                printf("%s %s\n",stu[i].name,stu[j].name);
                break;
            }
        }
    }
    return 0;
}