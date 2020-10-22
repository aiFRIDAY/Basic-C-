//made by saumyashree
//program for rock paper scissors
#include<iostream.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
int a;
// char x[][10]={"rock","paper","scissor"};
for(int i=0;i<5;i++)
{  char input[10];
   cout<<"\n choose rock , paper, scissors \n" ;
   cin>>input;
   randomize();
   a=rand()%3;
     if(a==0)
     { if(strcmpi(input,"rock")==0)
	cout<<"rock vs rock draw";
       if(strcmpi(input,"paper")==0)
	cout<<"rock vs paper you won";
	if(strcmpi(input,"scissors")==0)
	cout<<"rock vs scissors you loose";
      }
      else if(a==1)
     { if(strcmpi(input,"rock")==0)
	cout<<"paper vs rock you loose";
       if(strcmpi(input,"paper")==0)
	cout<<"paper vs paper draw";
	if(strcmpi(input,"scissors")==0)
	cout<<"paper vs scissors you won";
      }
      else if(a==2)
     { if(strcmpi(input,"rock")==0)
	cout<<"scissors vs rock you won";
       if(strcmpi(input,"paper")==0)
	cout<<"scissors vs paper you loose";
	if(strcmpi(input,"scissors")==0)
	cout<<"scissors vs scissors draw";
      }
}
getch();
}








