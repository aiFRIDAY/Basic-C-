#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
int len,l=1;
clrscr();
char pal[80]="";
char a[80]={"kkmefruuikjnhhacvllvcahhnjkiuurfemkkooooooooo"};
len=strlen(a);
  for(int i=0;i<len;i++)
 {
   for(int j=len;j>0;j--)
   {int c=0;
    if(a[i]==a[j])
    {c=1;
     for(int k=i,l=j;k<=j;k++,l--)
     {if(a[k]!=a[l])
      c=0;
     }
    }
    if(c==1)
    { if(j-i>l)
      { l=j-i;
	for(int x=i,q=0;x<=j;q++,x++)
	pal[q]=a[x];
      }
     }
   }
  }
  cout<<pal;
 getch();
 }