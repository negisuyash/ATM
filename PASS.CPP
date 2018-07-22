#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
void password()
{
	char pass[]="1000",input[4];
	cout<<"ENTER PASSWORD:";
	for(int i=0;i<4;i++)
	{
	     input[i]=getch();
	    cout<<"*";
	   /* cout<<endl<<is;
	    input=input*10+int(is);
	    */


	}
	if(strcmp(pass,input))
	{
	       //	cout<<"done";
		return ;

	}
	else
	{
		exit(0);
	}



}
/*void main()
{
	clrscr();
	password();
	getch();
} */