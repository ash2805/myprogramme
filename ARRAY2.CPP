//wap to find sum and average of sales
#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
float sales[5],total=0,avg;
for(int i=0;i<5;i++)
{
cout<<"enter sales of day"<<i+1<<":";
cin>>sales[i];

total= total+sales[i];
}
avg=total/5;
cout<<"total is"<<total<<endl;
cout<<"avg is "<<avg<<endl;
getch();
}
