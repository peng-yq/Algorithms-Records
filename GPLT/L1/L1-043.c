#include <stdio.h>

struct book{
    int flag;
    char status;
    int hour;
    int min;
};

int main(void){
    int n,id;
    scanf("%d",&n);
    struct book b[1001],temp;
    for(int i=0;i<n;i++){
        int book_num,time;
        book_num = time =0;
        while(1){
            scanf("%d %c %d:%d",&id,&temp.status,&temp.hour,&temp.min);
            if(id==0)
                break;
            else if(temp.status == 'S'){
                b[id] = temp;
                b[id].flag = 1;
            }
            else if(temp.status == 'E'){
                if(b[id].flag == 1){
                    time+=(temp.hour - b[id].hour)*60 + (temp.min-b[id].min);
                    book_num++;
                    b[id].flag = 0;
                }
            }
        }
        if(book_num == 0)
            printf("0 0\n");
        else
            printf("%d %d\n",book_num,(int)((double)time/book_num + 0.5));
    }
    return 0;
}

//挺难+挺多坑的一道题，难点和坑点如下：
//1.由于线路偶尔会有故障，可能出现不完整的纪录，即只有S没有E，或者只有E没有S的纪录，系统应能自动忽略这种无效纪录。
// 处理办法：通过flag变量作为书籍是否借出进行判断
// 2.可能有多次借书和还书，借书以最后一次借为标准，还书以第一次还为标准
// 3.要有借有还才算书籍本数
// 4.四舍五入