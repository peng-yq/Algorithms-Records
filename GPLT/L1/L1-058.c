#include <stdio.h>

int main(void){
    char c;
    int count=0;
    while(1){
        c = getchar();
        if(c=='6'){
            count++;
            continue;
        }
        if(count > 9){
            printf("27");
        }
        else if(count > 3){
            printf("9");
        }
        else{
            for(int i=0;i<count;i++)
                printf("6");
        }
        count = 0;
        printf("%c",c);
        if(c=='\n')
            break;
    }
    return 0;
}

//用getchar读取单个字符，通过判断6的个数来处理
//当然这道题最巧妙的还是使用正则表达式

/*#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	getline(cin,s);
	s=regex_replace(s,regex("6{10,}"),"27");
	s=regex_replace(s,regex("6{4,}"),"9");
	cout<<s<<endl;
	return 0;
}
*/
