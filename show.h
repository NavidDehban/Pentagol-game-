#include<stdio.h>
void show(char s[8][8])
{
	printf("\n");
	for(int i=0 ; i<8 ; i++)
{
	for(int j=0 ; j<8 ; j++)
	{
		printf("%c",s[i][j]);
		printf("	");
	}
	printf("\n");
	printf("\n");
	printf("\n");
}
	printf("============================================================\n");
}

