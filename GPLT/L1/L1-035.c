#include <stdio.h>

int main(void) 
{
	char s[10000][11];
	int i;
	for (i = 0;i<10000; i++)
	{
		scanf("%s", s[i]);
		if (s[i][0] == '.')
			break;
	}
	if (i < 2)
		printf("Momo... No one is for you ...");
	else if (i < 14)
		printf("%s is the only one for you...",s[1]);
	else
		printf("%s and %s are inviting you to dinner...",s[1],s[13]);

	return 0;
}

//二维数组