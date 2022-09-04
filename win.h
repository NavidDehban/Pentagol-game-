#include<stdio.h>
int  win(char s[8][8])
{
//sotoon BLACK 
{
for(int x=1;x<=2;x++)
{
	if(s[1][x]=='B'&&s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[5][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[1][x]=='B'&&s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[1][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[1][x]=='B'&&s[1][x+1]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[5][x]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[1][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
if(s[1][3]=='B'&&s[2][3]=='B'&&s[3][3]=='B'&&s[5][3]=='B'&&s[5][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[1][3]=='B'&&s[2][3]=='B'&&s[3][3]=='B'&&s[5][3]=='B'&&s[1][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[1][5]=='B'&&s[2][5]=='B'&&s[3][5]=='B'&&s[5][5]=='B'&&s[5][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[1][5]=='B'&&s[2][5]=='B'&&s[3][5]=='B'&&s[5][5]=='B'&&s[1][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}	
for(int x=5;x<=6;x++)
{
	if(s[1][x]=='B'&&s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[5][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[1][x]=='B'&&s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[1][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[1][x]=='B'&&s[1][x+1]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[5][x]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[1][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[6][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[2][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[2][x]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[6][x]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
if(s[2][3]=='B'&&s[3][3]=='B'&&s[5][3]=='B'&&s[6][3]=='B'&&s[6][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[2][3]=='B'&&s[3][3]=='B'&&s[5][3]=='B'&&s[6][3]=='B'&&s[2][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[2][5]=='B'&&s[3][5]=='B'&&s[5][5]=='B'&&s[6][5]=='B'&&s[2][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[2][5]=='B'&&s[3][5]=='B'&&s[5][5]=='B'&&s[6][5]=='B'&&s[6][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[6][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[2][x]=='B'&&s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[2][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[2][x]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[6][x]=='B'&&s[2][x+1]=='B'&&s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[7][x]=='B'&&s[7][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[7][x]=='B'&&s[3][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B'&&s[7][x+1]=='B'&&s[7][x]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B'&&s[7][x+1]=='B'&&s[3][x]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
if(s[3][3]=='B'&&s[5][3]=='B'&&s[6][3]=='B'&&s[7][3]=='B'&&s[7][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[3][3]=='B'&&s[5][3]=='B'&&s[6][3]=='B'&&s[7][3]=='B'&&s[3][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[3][5]=='B'&&s[5][5]=='B'&&s[6][5]=='B'&&s[7][5]=='B'&&s[7][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[3][5]=='B'&&s[5][5]=='B'&&s[6][5]=='B'&&s[7][5]=='B'&&s[3][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[7][x]=='B'&&s[7][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[3][x]=='B'&&s[5][x]=='B'&&s[6][x]=='B'&&s[7][x]=='B'&&s[3][x+1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B'&&s[7][x+1]=='B'&&s[7][x]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[3][x+1]=='B'&&s[5][x+1]=='B'&&s[6][x+1]=='B'&&s[7][x+1]=='B'&&s[3][x]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}	
}
//satr black
{
for(int x=1;x<=2;x++)
{
	if(s[x][1]=='B'&&s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x+1][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][1]=='B'&&s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x+1][1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][1]=='B'&&s[x+1][1]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][5]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
if(s[3][1]=='B'&&s[3][2]=='B'&&s[3][3]=='B'&&s[3][5]=='B'&&s[5][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[3][1]=='B'&&s[3][2]=='B'&&s[3][3]=='B'&&s[3][5]=='B'&&s[5][1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[5][1]=='B'&&s[5][2]=='B'&&s[5][3]=='B'&&s[5][5]=='B'&&s[3][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[5][1]=='B'&&s[5][2]=='B'&&s[5][3]=='B'&&s[5][5]=='B'&&s[3][1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}	
for(int x=5;x<=6;x++)
{
	if(s[x][1]=='B'&&s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x+1][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][1]=='B'&&s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x+1][1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][1]=='B'&&s[x+1][1]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][5]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][1]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x+1][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x+1][2]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][2]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][6]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
if(s[3][2]=='B'&&s[3][3]=='B'&&s[3][5]=='B'&&s[3][6]=='B'&&s[5][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[3][2]=='B'&&s[3][3]=='B'&&s[3][5]=='B'&&s[3][6]=='B'&&s[5][2]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[5][2]=='B'&&s[5][3]=='B'&&s[5][5]=='B'&&s[5][6]=='B'&&s[3][2]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[5][2]=='B'&&s[5][3]=='B'&&s[5][5]=='B'&&s[5][6]=='B'&&s[3][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x+1][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][2]=='B'&&s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x+1][2]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][2]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][6]=='B'&&s[x+1][2]=='B'&&s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x][7]=='B'&&s[x+1][7]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x][7]=='B'&&s[x+1][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B'&&s[x+1][7]=='B'&&s[x][7]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B'&&s[x+1][7]=='B'&&s[x][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
if(s[3][3]=='B'&&s[3][5]=='B'&&s[3][6]=='B'&&s[3][7]=='B'&&s[5][7]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[3][3]=='B'&&s[3][5]=='B'&&s[3][6]=='B'&&s[3][7]=='B'&&s[5][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[5][3]=='B'&&s[5][5]=='B'&&s[5][6]=='B'&&s[5][7]=='B'&&s[3][7]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
if(s[5][3]=='B'&&s[5][5]=='B'&&s[5][6]=='B'&&s[5][7]=='B'&&s[3][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x][7]=='B'&&s[x+1][7]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x][3]=='B'&&s[x][5]=='B'&&s[x][6]=='B'&&s[x][7]=='B'&&s[x+1][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B'&&s[x+1][7]=='B'&&s[x][7]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
	if(s[x+1][3]=='B'&&s[x+1][5]=='B'&&s[x+1][6]=='B'&&s[x+1][7]=='B'&&s[x][3]=='B')
	{
		printf("BLACK WON !!!");
		return 0;
	}
}
}
//orib black
{
	if(s[2][3]=='B' && s[3][5]=='B' &&s[5][3]=='B' &&s[6][2]=='B' &&s[7][1]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][5]=='B' && s[3][6]=='B' &&s[5][5]=='B' &&s[6][3]=='B' &&s[7][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][6]=='B' && s[3][7]=='B' &&s[5][6]=='B' &&s[6][5]=='B' &&s[7][3]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[1][3]=='B' && s[2][5]=='B' &&s[3][3]=='B' &&s[5][2]=='B' &&s[6][1]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][5]=='B' && s[2][6]=='B' &&s[3][5]=='B' &&s[5][3]=='B' &&s[6][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][6]=='B' && s[2][7]=='B' &&s[3][6]=='B' &&s[5][5]=='B' &&s[6][3]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[5][6]=='B' && s[3][5]=='B' &&s[5][3]=='B' &&s[6][2]=='B' &&s[7][1]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[5][7]=='B' && s[3][6]=='B' &&s[5][5]=='B' &&s[6][3]=='B' &&s[7][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[3][6]=='B' && s[2][5]=='B' &&s[3][3]=='B' &&s[5][2]=='B' &&s[6][1]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[3][7]=='B' && s[2][6]=='B' &&s[3][5]=='B' &&s[5][3]=='B' &&s[6][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[2][6]=='B' && s[1][5]=='B' &&s[2][3]=='B' &&s[3][2]=='B' &&s[5][1]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][7]=='B' && s[1][6]=='B' &&s[2][5]=='B' &&s[3][3]=='B' &&s[5][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[6][1]=='B' && s[7][2]=='B' &&s[6][3]=='B' &&s[5][5]=='B' &&s[3][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[6][2]=='B' && s[7][3]=='B' &&s[6][5]=='B' &&s[5][6]=='B' &&s[3][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[5][1]=='B' && s[6][2]=='B' &&s[5][3]=='B' &&s[3][5]=='B' &&s[2][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[5][2]=='B' && s[6][3]=='B' &&s[5][5]=='B' &&s[3][6]=='B' &&s[2][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[3][1]=='B' && s[5][2]=='B' &&s[3][3]=='B' &&s[2][5]=='B' &&s[1][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[3][2]=='B' && s[5][3]=='B' &&s[3][5]=='B' &&s[2][6]=='B' &&s[1][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[2][5]=='B' && s[3][3]=='B' &&s[5][2]=='B' &&s[6][1]=='B' &&s[7][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][6]=='B' && s[3][5]=='B' &&s[5][3]=='B' &&s[6][2]=='B' &&s[7][3]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][7]=='B' && s[3][6]=='B' &&s[5][5]=='B' &&s[6][3]=='B' &&s[7][5]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//****
	if(s[1][5]=='B' && s[2][3]=='B' &&s[3][2]=='B' &&s[5][1]=='B' &&s[6][2]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][6]=='B' && s[2][5]=='B' &&s[3][3]=='B' &&s[5][2]=='B' &&s[6][3]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][7]=='B' && s[2][6]=='B' &&s[3][5]=='B' &&s[5][3]=='B' &&s[6][5]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//*****
	if(s[3][2]=='B' && s[5][3]=='B' &&s[6][5]=='B' &&s[7][6]=='B' &&s[6][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[3][1]=='B' && s[5][2]=='B' &&s[6][3]=='B' &&s[7][5]=='B' &&s[6][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[2][1]=='B' && s[3][2]=='B' &&s[5][3]=='B' &&s[6][5]=='B' &&s[5][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][2]=='B' && s[3][3]=='B' &&s[5][5]=='B' &&s[6][6]=='B' &&s[5][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[1][1]=='B' && s[2][2]=='B' &&s[3][3]=='B' &&s[5][5]=='B' &&s[3][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][2]=='B' && s[2][3]=='B' &&s[3][5]=='B' &&s[5][6]=='B' &&s[3][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[2][1]=='B' && s[3][2]=='B' &&s[5][3]=='B' &&s[6][5]=='B' &&s[7][3]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][2]=='B' && s[3][3]=='B' &&s[5][5]=='B' &&s[6][6]=='B' &&s[7][5]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][3]=='B' && s[3][5]=='B' &&s[5][6]=='B' &&s[6][7]=='B' &&s[7][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[1][1]=='B' && s[2][2]=='B' &&s[3][3]=='B' &&s[5][5]=='B' &&s[6][3]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][2]=='B' && s[2][3]=='B' &&s[3][5]=='B' &&s[5][6]=='B' &&s[6][5]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][3]=='B' && s[2][5]=='B' &&s[3][6]=='B' &&s[5][7]=='B' &&s[6][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[2][2]=='B' && s[3][1]=='B' &&s[5][2]=='B' &&s[6][3]=='B' &&s[7][5]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][3]=='B' && s[3][2]=='B' &&s[5][3]=='B' &&s[6][5]=='B' &&s[7][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][5]=='B' && s[3][3]=='B' &&s[5][5]=='B' &&s[6][6]=='B' &&s[7][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[1][2]=='B' && s[2][1]=='B' &&s[3][2]=='B' &&s[5][3]=='B' &&s[6][5]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][3]=='B' && s[2][2]=='B' &&s[3][3]=='B' &&s[5][5]=='B' &&s[6][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[1][5]=='B' && s[2][3]=='B' &&s[3][5]=='B' &&s[5][6]=='B' &&s[6][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[5][1]=='B' && s[3][2]=='B' &&s[5][3]=='B' &&s[6][5]=='B' &&s[7][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[5][2]=='B' && s[3][3]=='B' &&s[5][5]=='B' &&s[6][6]=='B' &&s[7][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[3][1]=='B' && s[2][2]=='B' &&s[3][3]=='B' &&s[5][5]=='B' &&s[6][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[3][2]=='B' && s[2][3]=='B' &&s[3][5]=='B' &&s[5][6]=='B' &&s[6][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	//***
	if(s[2][1]=='B' && s[1][2]=='B' &&s[2][3]=='B' &&s[3][5]=='B' &&s[5][6]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
	if(s[2][2]=='B' && s[1][3]=='B' &&s[2][5]=='B' &&s[3][6]=='B' &&s[5][7]=='B')
	{
		printf("BLACK won!!!");
		return 0;
	}
}

//sotoon WHITE 
{
for(int x=1;x<=2;x++)
{
	if(s[1][x]=='W'&&s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[5][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[1][x]=='W'&&s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[1][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[1][x]=='W'&&s[1][x+1]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[5][x]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[1][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
if(s[1][3]=='W'&&s[2][3]=='W'&&s[3][3]=='W'&&s[5][3]=='W'&&s[5][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[1][3]=='W'&&s[2][3]=='W'&&s[3][3]=='W'&&s[5][3]=='W'&&s[1][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[1][5]=='W'&&s[2][5]=='W'&&s[3][5]=='W'&&s[5][5]=='W'&&s[5][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[1][5]=='W'&&s[2][5]=='W'&&s[3][5]=='W'&&s[5][5]=='W'&&s[1][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}	
for(int x=5;x<=6;x++)
{
	if(s[1][x]=='W'&&s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[5][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[1][x]=='W'&&s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[1][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[1][x]=='W'&&s[1][x+1]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[5][x]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[1][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[6][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[2][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[2][x]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[6][x]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
if(s[2][3]=='W'&&s[3][3]=='W'&&s[5][3]=='W'&&s[6][3]=='W'&&s[6][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[2][3]=='W'&&s[3][3]=='W'&&s[5][3]=='W'&&s[6][3]=='W'&&s[2][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[2][5]=='W'&&s[3][5]=='W'&&s[5][5]=='W'&&s[6][5]=='W'&&s[2][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[2][5]=='W'&&s[3][5]=='W'&&s[5][5]=='W'&&s[6][5]=='W'&&s[6][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[6][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[2][x]=='W'&&s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[2][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[2][x]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[6][x]=='W'&&s[2][x+1]=='W'&&s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[7][x]=='W'&&s[7][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[7][x]=='W'&&s[3][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W'&&s[7][x+1]=='W'&&s[7][x]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W'&&s[7][x+1]=='W'&&s[3][x]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
if(s[3][3]=='W'&&s[5][3]=='W'&&s[6][3]=='W'&&s[7][3]=='W'&&s[7][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[3][3]=='W'&&s[5][3]=='W'&&s[6][3]=='W'&&s[7][3]=='W'&&s[3][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[3][5]=='W'&&s[5][5]=='W'&&s[6][5]=='W'&&s[7][5]=='W'&&s[7][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[3][5]=='W'&&s[5][5]=='W'&&s[6][5]=='W'&&s[7][5]=='W'&&s[3][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[7][x]=='W'&&s[7][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[3][x]=='W'&&s[5][x]=='W'&&s[6][x]=='W'&&s[7][x]=='W'&&s[3][x+1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W'&&s[7][x+1]=='W'&&s[7][x]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[3][x+1]=='W'&&s[5][x+1]=='W'&&s[6][x+1]=='W'&&s[7][x+1]=='W'&&s[3][x]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}	
}
	
//satr white
{
for(int x=1;x<=2;x++)
{
	if(s[x][1]=='W'&&s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x+1][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][1]=='W'&&s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x+1][1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][1]=='W'&&s[x+1][1]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][5]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
if(s[3][1]=='W'&&s[3][2]=='W'&&s[3][3]=='W'&&s[3][5]=='W'&&s[5][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[3][1]=='W'&&s[3][2]=='W'&&s[3][3]=='W'&&s[3][5]=='W'&&s[5][1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[5][1]=='W'&&s[5][2]=='W'&&s[5][3]=='W'&&s[5][5]=='W'&&s[3][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[5][1]=='W'&&s[5][2]=='W'&&s[5][3]=='W'&&s[5][5]=='W'&&s[3][1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}	
for(int x=5;x<=6;x++)
{
	if(s[x][1]=='W'&&s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x+1][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][1]=='W'&&s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x+1][1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][1]=='W'&&s[x+1][1]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][5]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][1]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x+1][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x+1][2]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][2]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][6]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
if(s[3][2]=='W'&&s[3][3]=='W'&&s[3][5]=='W'&&s[3][6]=='W'&&s[5][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[3][2]=='W'&&s[3][3]=='W'&&s[3][5]=='W'&&s[3][6]=='W'&&s[5][2]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[5][2]=='W'&&s[5][3]=='W'&&s[5][5]=='W'&&s[5][6]=='W'&&s[3][2]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[5][2]=='W'&&s[5][3]=='W'&&s[5][5]=='W'&&s[5][6]=='W'&&s[3][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x+1][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][2]=='W'&&s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x+1][2]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][2]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][6]=='W'&&s[x+1][2]=='W'&&s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
for(int x=1;x<=2;x++)
{
	if(s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x][7]=='W'&&s[x+1][7]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x][7]=='W'&&s[x+1][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W'&&s[x+1][7]=='W'&&s[x][7]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W'&&s[x+1][7]=='W'&&s[x][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
if(s[3][3]=='W'&&s[3][5]=='W'&&s[3][6]=='W'&&s[3][7]=='W'&&s[5][7]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[3][3]=='W'&&s[3][5]=='W'&&s[3][6]=='W'&&s[3][7]=='W'&&s[5][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[5][3]=='W'&&s[5][5]=='W'&&s[5][6]=='W'&&s[5][7]=='W'&&s[3][7]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
if(s[5][3]=='W'&&s[5][5]=='W'&&s[5][6]=='W'&&s[5][7]=='W'&&s[3][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
for(int x=5;x<=6;x++)
{
	if(s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x][7]=='W'&&s[x+1][7]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x][3]=='W'&&s[x][5]=='W'&&s[x][6]=='W'&&s[x][7]=='W'&&s[x+1][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W'&&s[x+1][7]=='W'&&s[x][7]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
	if(s[x+1][3]=='W'&&s[x+1][5]=='W'&&s[x+1][6]=='W'&&s[x+1][7]=='W'&&s[x][3]=='W')
	{
		printf("WHITE WON !!!");
		return 0;
	}
}
}
//orib white
{
	if(s[2][3]=='W' && s[3][5]=='W' &&s[5][3]=='W' &&s[6][2]=='W' &&s[7][1]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][5]=='W' && s[3][6]=='W' &&s[5][5]=='W' &&s[6][3]=='W' &&s[7][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][6]=='W' && s[3][7]=='W' &&s[5][6]=='W' &&s[6][5]=='W' &&s[7][3]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[1][3]=='W' && s[2][5]=='W' &&s[3][3]=='W' &&s[5][2]=='W' &&s[6][1]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][5]=='W' && s[2][6]=='W' &&s[3][5]=='W' &&s[5][3]=='W' &&s[6][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][6]=='W' && s[2][7]=='W' &&s[3][6]=='W' &&s[5][5]=='W' &&s[6][3]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[5][6]=='W' && s[3][5]=='W' &&s[5][3]=='W' &&s[6][2]=='W' &&s[7][1]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[5][7]=='W' && s[3][6]=='W' &&s[5][5]=='W' &&s[6][3]=='W' &&s[7][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[3][6]=='W' && s[2][5]=='W' &&s[3][3]=='W' &&s[5][2]=='W' &&s[6][1]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[3][7]=='W' && s[2][6]=='W' &&s[3][5]=='W' &&s[5][3]=='W' &&s[6][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[2][6]=='W' && s[1][5]=='W' &&s[2][3]=='W' &&s[3][2]=='W' &&s[5][1]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][7]=='W' && s[1][6]=='W' &&s[2][5]=='W' &&s[3][3]=='W' &&s[5][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[6][1]=='W' && s[7][2]=='W' &&s[6][3]=='W' &&s[5][5]=='W' &&s[3][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[6][2]=='W' && s[7][3]=='W' &&s[6][5]=='W' &&s[5][6]=='W' &&s[3][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[5][1]=='W' && s[6][2]=='W' &&s[5][3]=='W' &&s[3][5]=='W' &&s[2][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[5][2]=='W' && s[6][3]=='W' &&s[5][5]=='W' &&s[3][6]=='W' &&s[2][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[3][1]=='W' && s[5][2]=='W' &&s[3][3]=='W' &&s[2][5]=='W' &&s[1][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[3][2]=='W' && s[5][3]=='W' &&s[3][5]=='W' &&s[2][6]=='W' &&s[1][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[2][5]=='W' && s[3][3]=='W' &&s[5][2]=='W' &&s[6][1]=='W' &&s[7][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][6]=='W' && s[3][5]=='W' &&s[5][3]=='W' &&s[6][2]=='W' &&s[7][3]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][7]=='W' && s[3][6]=='W' &&s[5][5]=='W' &&s[6][3]=='W' &&s[7][5]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//****
	if(s[1][5]=='W' && s[2][3]=='W' &&s[3][2]=='W' &&s[5][1]=='W' &&s[6][2]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][6]=='W' && s[2][5]=='W' &&s[3][3]=='W' &&s[5][2]=='W' &&s[6][3]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][7]=='W' && s[2][6]=='W' &&s[3][5]=='W' &&s[5][3]=='W' &&s[6][5]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//*****
	if(s[3][2]=='W' && s[5][3]=='W' &&s[6][5]=='W' &&s[7][6]=='W' &&s[6][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[3][1]=='W' && s[5][2]=='W' &&s[6][3]=='W' &&s[7][5]=='W' &&s[6][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[2][1]=='W' && s[3][2]=='W' &&s[5][3]=='W' &&s[6][5]=='W' &&s[5][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][2]=='W' && s[3][3]=='W' &&s[5][5]=='W' &&s[6][6]=='W' &&s[5][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[1][1]=='W' && s[2][2]=='W' &&s[3][3]=='W' &&s[5][5]=='W' &&s[3][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][2]=='W' && s[2][3]=='W' &&s[3][5]=='W' &&s[5][6]=='W' &&s[3][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[2][1]=='W' && s[3][2]=='W' &&s[5][3]=='W' &&s[6][5]=='W' &&s[7][3]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][2]=='W' && s[3][3]=='W' &&s[5][5]=='W' &&s[6][6]=='W' &&s[7][5]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][3]=='W' && s[3][5]=='W' &&s[5][6]=='W' &&s[6][7]=='W' &&s[7][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[1][1]=='W' && s[2][2]=='W' &&s[3][3]=='W' &&s[5][5]=='W' &&s[6][3]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][2]=='W' && s[2][3]=='W' &&s[3][5]=='W' &&s[5][6]=='W' &&s[6][5]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][3]=='W' && s[2][5]=='W' &&s[3][6]=='W' &&s[5][7]=='W' &&s[6][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[2][2]=='W' && s[3][1]=='W' &&s[5][2]=='W' &&s[6][3]=='W' &&s[7][5]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][3]=='W' && s[3][2]=='W' &&s[5][3]=='W' &&s[6][5]=='W' &&s[7][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][5]=='W' && s[3][3]=='W' &&s[5][5]=='W' &&s[6][6]=='W' &&s[7][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[1][2]=='W' && s[2][1]=='W' &&s[3][2]=='W' &&s[5][3]=='W' &&s[6][5]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][3]=='W' && s[2][2]=='W' &&s[3][3]=='W' &&s[5][5]=='W' &&s[6][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[1][5]=='W' && s[2][3]=='W' &&s[3][5]=='W' &&s[5][6]=='W' &&s[6][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[5][1]=='W' && s[3][2]=='W' &&s[5][3]=='W' &&s[6][5]=='W' &&s[7][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[5][2]=='W' && s[3][3]=='W' &&s[5][5]=='W' &&s[6][6]=='W' &&s[7][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[3][1]=='W' && s[2][2]=='W' &&s[3][3]=='W' &&s[5][5]=='W' &&s[6][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[3][2]=='W' && s[2][3]=='W' &&s[3][5]=='W' &&s[5][6]=='W' &&s[6][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	//***
	if(s[2][1]=='W' && s[1][2]=='W' &&s[2][3]=='W' &&s[3][5]=='W' &&s[5][6]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
	if(s[2][2]=='W' && s[1][3]=='W' &&s[2][5]=='W' &&s[3][6]=='W' &&s[5][7]=='W')
	{
		printf("WHITE won!!!");
		return 0;
	}
}
}

