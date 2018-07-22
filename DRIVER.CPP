#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdio.h>
#include<dos.h>
#include "linked_s.cpp"
#include "pass.cpp"

linkedlist notes;

void get_change(int r)
{

	int change[]={1,2,5,10,20,50,100,200,500,2000};       //all types of changes/notes currently in INR
	for(int i=9;i>=0;i--)
	{
		if(change[i]<=r)
		{
			notes.push(change[i]);                 //function defined in included file
			r-=change[i];
			i=9;
		}
	}
}

void main()
{
	int gdriver=DETECT,gmode,i;
	initgraph(&gdriver,&gmode,"C:\\Turboc3\\BGI");   //to enable graphics
	password();
	setcolor(2);
	settextstyle(3,0,5);
	gotoxy(45,0);
	printf("\n\n\n\n\t\t\t\tWELCOME TO ATM");
	int rupee;
	cout<<"\n\t\t\tEnter the amount :";
	cin>>rupee;
	get_change(rupee);         //function to use the class defined in included file
	cout<<"CHANGE IS :";
	notes.print();              //function defined in included file to print all elements
	getch();
	clrscr();
	for(int y=200;y>0;y--)
	{     clrscr();

	outtextxy(40,y,"THANK YOU FOR USING ATM");
	delay(30);
	}
	//cout<<"\n THANK YOU FOR USING ATM";
	getch();
}