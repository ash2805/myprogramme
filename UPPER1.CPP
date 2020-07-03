#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char arr[30];
cout<<"Enter your line\n";
cin.getline(arr,30);
for(int i=0;i<=strlen(arr);i++)
{
if(arr[i]>=97 && arr[i]<=122)
{
arr[i]=arr[i]-32;
}
}
cout<<"Your line:\n"<<arr;
getch();
}
