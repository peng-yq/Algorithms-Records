#include<stdio.h>

int main(void)
{   
	int n;
	double h;
	char sex;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++)
	{    
		scanf("%c %lf",&sex,&h);
		getchar();
		if(sex=='M')
            printf("%.2lf\n",h/1.09);
		else 
            printf("%.2lf\n",h*1.09);
	}
	return 0;
}

//getchar()