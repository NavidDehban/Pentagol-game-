#include<stdio.h>
int  check2()
{
while(true)
{char s[2];
printf("area:");
scanf("%s",&s);
int a=s[0]-48;
if(s[0]>='1'&&s[0]<='4'&&s[1]=='\0'){return a;}
else printf("illegal input\ntry again !!!\n");
printf("====================restart===================\n");}
}

