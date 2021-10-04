## PAT——团体设计天梯赛题解

题目具体描述及输入输出案例见[PAT网站——团体设计天梯赛题库](https://pintia.cn/problem-sets/994805046380707840/problems/type/7)

- **Hello World**

```c
#include <stdio.h>

int main(){
    printf("Hello World!");
    return 0;
}
```

- **打印沙漏**

```c
#include <stdio.h>

int main() {
    int line = 0, num, sum = 0;
    char temp;
    if(scanf("%d %c", &num, &temp)){
        while(2 * line * line-1 < num && 2*(line+1)*(line+1)-1<=num) {
        line++;
    }
    for (int i = 0; i < line; i++) {
        for (int j = 0; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (line - i) - 1; j++) {
            printf("%c", temp);
            sum++;
        }
        printf("\n");
    }
    for (int i = line - 1; i > 0; i--) {
        for (int j = 1; j < i; j++) {
            printf(" ");
        }
        for (int j = 0; j < 2 * (line - i)+1; j++) {
            printf("%c", temp);
            sum++;
        }
        printf("\n");
    }
    printf("%d\n", num - sum);
    };
    return 0;
}
```

