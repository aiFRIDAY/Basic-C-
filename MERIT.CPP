//made by saumyashree
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct stud
{
char name[30];
int marks;
};

stud asc(stud a[],int size)
{
stud k;
int i,j,c,n=0;

for(i=0;i<size-1;i++)
{n=i;
c=a[i].marks;
  for(j=i+1;j<size;j++)
   { if(c<a[j].marks)
     { n=j;
       c=a[j].marks; }
   }
 k=a[i];
 a[i]=a[n];
 a[n]=k;
 }
 for(i=0;i<size;i++)
 cout<<a[i].name<<'\t'<<a[i].marks<<'\n';

 }

 void main()
 {
 clrscr();
 stud a[10];
 for(int i=0;i<5;i++)
 {
 cout<<"enter name of "<<i+1;
 gets(a[i].name);
 cout<<"enter marks ";
 cin>>a[i].marks;
 }
 asc(a,5);
 getch();
 }
