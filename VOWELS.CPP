#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char arr[50];
int vowels=0;
cout<<"enter your lines\n";
cin.getline(arr,50);
for(int i=0;i<arr[i];i++)
 {
  if(arr[i]=='a' || arr[i]=='i'|| arr[i]=='e'||
  arr[i]=='o' || arr[i]=='u')
  {
  vowels++;
  }
}
cout<<"no of vowels is:"<<vowels<<endl;
getch();
}
