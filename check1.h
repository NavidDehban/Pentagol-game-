#include<stdio.h>
int  check1(char b[8][8])
{
while(true)
{char s[2];
scanf("%s",&s);
int x,y;
x=s[0];
y=s[1];
x=x-48;
y=y-48;
int X=x;
int Y=y;
if(x>=4)
X++;
if(y>=4)
Y++;
int xy=(x*10)+y;
if(s[1]<='6'&&s[1]>='1'&&s[0]<='6'&&s[0]>='1'&&s[2]=='\0')
{
if(b[X][Y]!='.')
{
printf("possition is full\n");
printf("try again !!!\n");
}
else	
return xy;
}
else printf("illegal input\ntry again !!!\n");
printf("====================restart===================\n");}
}

