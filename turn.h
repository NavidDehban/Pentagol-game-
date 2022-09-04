#include<stdio.h>
void turn(char s[8][8])
{
int area;
area=check2();
char turn;
turn=check3();
	if(area==1)
	{
		if(turn=='+')
		{
		char i1=s[1][5];
		char i2=s[1][6];
		char i3=s[1][7];
		char i4=s[2][5];
		char i5=s[2][6];
		char i6=s[2][7];
		char i7=s[3][5];
		char i8=s[3][6];
		char i9=s[3][7];
		s[1][7]=i1;
		s[2][7]=i2;
		s[3][7]=i3;
		s[1][6]=i4;
		s[2][6]=i5;
		s[3][6]=i6;
		s[1][5]=i7;
		s[2][5]=i8;
		s[3][5]=i9;
		}
		if(turn=='-')
		{
	    char i1=s[1][5];
		char i2=s[1][6];
		char i3=s[1][7];
		char i4=s[2][5];
		char i5=s[2][6];
		char i6=s[2][7];
		char i7=s[3][5];
		char i8=s[3][6];
		char i9=s[3][7];
		s[3][5]=i1;
		s[2][5]=i2;
		s[1][5]=i3;
		s[3][6]=i4;
		s[2][6]=i5;
		s[1][6]=i6;
		s[3][7]=i7;
		s[2][7]=i8;
		s[1][7]=i9;	
		}
	}
	if(area==2)
	{
		if(turn=='+')
		{
	    char i1=s[1][1];
		char i2=s[1][2];
		char i3=s[1][3];
		char i4=s[2][1];
		char i5=s[2][2];
		char i6=s[2][3];
		char i7=s[3][1];
		char i8=s[3][2];
		char i9=s[3][3];
		s[1][3]=i1;
		s[2][3]=i2;
		s[3][3]=i3;
		s[1][2]=i4;
		s[2][2]=i5;
		s[3][2]=i6;
		s[1][1]=i7;
		s[2][1]=i8;
		s[3][1]=i9;
		}
		if(turn=='-')
		{
		char i1=s[1][1];
		char i2=s[1][2];
		char i3=s[1][3];
		char i4=s[2][1];
		char i5=s[2][2];
		char i6=s[2][3];
		char i7=s[3][1];
		char i8=s[3][2];
		char i9=s[3][3];
		s[3][1]=i1;
		s[2][1]=i2;
		s[1][1]=i3;
		s[3][2]=i4;
		s[2][2]=i5;
		s[1][2]=i6;
		s[3][3]=i7;
		s[2][3]=i8;
		s[1][3]=i9;	
		}
	
	}
	if(area==3)
	{
		if(turn=='+')
		{
		char i1=s[5][1];
		char i2=s[5][2];
		char i3=s[5][3];
		char i4=s[6][1];
		char i5=s[6][2];
		char i6=s[6][3];
		char i7=s[7][1];
		char i8=s[7][2];
		char i9=s[7][3];
		s[5][3]=i1;
		s[6][3]=i2;
		s[7][3]=i3;
		s[5][2]=i4;
		s[6][2]=i5;
		s[7][2]=i6;
		s[5][1]=i7;
		s[6][1]=i8;
		s[7][1]=i9;	
		}
		if(turn=='-')
		{
		char i1=s[5][1];
		char i2=s[5][2];
		char i3=s[5][3];
		char i4=s[6][1];
		char i5=s[6][2];
		char i6=s[6][3];
		char i7=s[7][1];
		char i8=s[7][2];
		char i9=s[7][3];
		s[7][1]=i1;
		s[6][1]=i2;
		s[5][1]=i3;
		s[7][2]=i4;
		s[6][2]=i5;
		s[5][2]=i6;
		s[7][3]=i7;
		s[6][3]=i8;
		s[5][3]=i9;
		}

	}
	if(area==4)
	{
		if(turn=='+')
		{
		char i1=s[5][5];
		char i2=s[5][6];
		char i3=s[5][7];
		char i4=s[6][5];
		char i5=s[6][6];
		char i6=s[6][7];
		char i7=s[7][5];
		char i8=s[7][6];
		char i9=s[7][7];
		s[5][7]=i1;
		s[6][7]=i2;
		s[7][7]=i3;
		s[5][6]=i4;
		s[6][6]=i5;
		s[7][6]=i6;
		s[5][5]=i7;
		s[6][5]=i8;
		s[7][5]=i9;	
		}
		if(turn=='-')
		{
		char i1=s[5][5];
		char i2=s[5][6];
		char i3=s[5][7];
		char i4=s[6][5];
		char i5=s[6][6];
		char i6=s[6][7];
		char i7=s[7][5];
		char i8=s[7][6];
		char i9=s[7][7];
		s[7][5]=i1;
		s[6][5]=i2;
		s[5][5]=i3;
		s[7][6]=i4;
		s[6][6]=i5;
		s[5][6]=i6;
		s[7][7]=i7;
		s[6][7]=i8;
		s[5][7]=i9;	
		}
		
	
	}
	show(s);
		
}

