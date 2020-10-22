//made by saumyashree
//colourful moving text line by line animation
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
void main()
{
clrscr();
char input[50];
cout<<"enter text ";
gets(input);
for(int j=1;j<60;j++)
{
for(int i=1;i<80;i++)
{ clrscr();
textcolor(i);
gotoxy(i,3+j);
cout<<input;
delay(50);
 }
 }
getch();
}