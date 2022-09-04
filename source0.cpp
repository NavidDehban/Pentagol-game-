#include<stdio.h>
#include "show.h"
#include "check1.h"
#include "check2.h"
#include "check3.h"
#include "turn.h"
#include "win.h"
int  main()
{	
	int xy;
	char s[8][8]={{' ','1','2','3','|','4','5','6'},{'1','.','.','.','|','.','.','.'},{'2','.','.','.','|','.','.','.'},{'3','.','.','.','|','.','.','.'},{'-','-','-','-',' ','-','-','-'},{'4','.','.','.','|','.','.','.'},{'5','.','.','.','|','.','.','.'},{'6','.','.','.','|','.','.','.'}};
	show(s);
	for(int c=1;c<=36;c++)
	{
//////////////////////////////////
	if(c%2!=0)
	{
	printf("BLACK players turn :\n");
	xy=check1(s);
	int x=xy/10;
	int y=xy-(10*x);
	if(x>=4)
	x++;
	if(y>=4)
	y++;
	s[x][y]='B';
	show(s);	
	}
	if(c%2==0)
	{
	printf("WHITE players turn :\n");
	xy=check1(s);	
	int x=xy/10;
	int y=xy-(10*x);
	if(x>=4)
	x++;
	if(y>=4)
	y++;
	s[x][y]='W';
	show(s);
	}
	turn(s);
	win(s);
	if(win(s)==0)
	return 0;
//////////////////////////////////	
	}
	printf("equal");
}

