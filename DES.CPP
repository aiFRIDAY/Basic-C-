#include<iostream.h>
#include<conio.h>
#include<process.h>
void controls()
{
cout<<"\n For print movement wasd \n for movement ijkl \n q for clear \n e for exit \n c for colour change ";
cout<<"\n press z for display controls\n ";
}
void main()
{
clrscr();
char d;
controls();
cout<<"Enter design symbol";
cin>>d;
int x,y,c;
y=x=10;
char input;
clrscr();

for(;;)
{ textcolor(c);
     input=getch();
   switch(input)
  {case 'w':gotoxy(x,y-1);
	    cprintf(" ");
	    y--;
	    gotoxy(x,y);
	    cout<<d;
	    break;
   case 's':gotoxy(x,y+1);
	    cprintf(" ");
	    y++;
	    gotoxy(x,y);
	    cout<<d;
	    break;
   case 'd':gotoxy(x+1,y);
	    cprintf(" ");
	    x++;
	    gotoxy(x,y);
	    cout<<d;
	    break;
   case 'a':gotoxy(x-1,y);
	    cprintf(" ");
	    x--;
	    gotoxy(x,y);
	    cout<<d;
	    break;
   case 'i':y--;
	    gotoxy(x,y);
	    break;
   case 'k':y++;
	    gotoxy(x,y);
	    break;
   case 'j':x--;
	    gotoxy(x,y);
	    break;
   case 'l':x++;
	    gotoxy(x,y);
	    break;
   case 'c':c++;
	    break;
   case 'p':d=getch();
	    break;
   case 'q':clrscr();
	    break;
   case 'e':exit(0);
   case 'z':controls();
	    break;

   }
}
getch();
}
