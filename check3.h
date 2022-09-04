#include<stdio.h>
char check3()
{
while(true)
{char s[2];
printf("turn:");
scanf("%s",&s);
char t=s[0];
if((s[0]=='+'||s[0]=='-')&&s[1]=='\0'){return t;}
else printf("illegal input\ntry again !!!\n");
printf("====================restart===================\n");}
}

