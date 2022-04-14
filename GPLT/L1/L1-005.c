#include <stdio.h>

struct student{
    char num[17];
    int test_num;
    int exam_num;
};

int main(void){
    int n,i,j,k,h;
    scanf("%d\n",&n);
    struct student stu[n];
    for(i=0;i<n;i++){
        scanf("%s %d %d\n",stu[i].num,&stu[i].test_num,&stu[i].exam_num);
    }
    scanf("%d\n",&j);
    for(i=0;i<j;i++){
        scanf("%d",&k);
        for(h=0;h<n;h++){
            if(stu[h].test_num == k){
                printf("%s %d\n",stu[h].num,stu[h].exam_num);
                break;
            }
        }
    }
    return 0;
}