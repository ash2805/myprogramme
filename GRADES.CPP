#include <iostream.h>
#include <conio.h>
void main()

{
clrscr();
float arr[3],sum=0,avg,avg1,avg2,sum1=0,sum2;
cout<<"enter marks obtained by student 1 in 3 test\n";
for(int i=0;i<3;i++)
{
 cin>>arr[i];
 sum=sum+arr[i];
 }
 avg=sum/3;
 cout<<"enter marks obtained by student 2 in 3 test\n";
for(i=0;i<3;i++)
{
cin>>arr[i];
sum1=sum1+arr[i];
}
avg1=sum1/3;
cout<<"enter marks obtained by students 3 in 3 test\n";
for(i=0;i<3;i++)
{
cin>>arr[i];
sum2=sum2+arr[i];
}
 avg2=sum2/3;
 cout<<"result of student 1 is:\npercentage:"<<avg<<"%"<<endl;
if(avg>80)
{
cout<<"grade:A";
}
else if(avg>60 && avg<=80)
{
cout<<"grade:B";
}
else if(avg>40 && avg<=60)
{
cout<<"grade:C";
}
else
{
cout<<"grade:D"<<endl;
}
cout<<"\nresult of student 2 is:\npercentage"<<avg1<<"%"<<endl;
if(avg1>80)
{cout<<"grade:A";
}
else if(avg1>60 && avg<=80)
{ cout<<"grade:B";
}
else if(avg1>40 && avg1<=60)
{
cout<<"grade:C";
}
else{
cout<<"grade:D"<<endl;
}
cout<<"\nresult of student 3 is:\npercentage"<<avg2<<"%"<<endl;
if(avg2>80)
{
cout<<"grade:A";
}
else if(avg2>60 && avg2<=80)
{
cout<<"grade:B";
}
else if(avg2>40 && avg2<=60)
{
cout<<"grade:C";
}
else
{
cout<<"grade:D";
}



getch();
}
