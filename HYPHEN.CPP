#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
char line[50];
cout<<"Enter ur line:\n";
cin.getline(line,50);
for(int i=0;i<line[i];i++)
{
if(line[i]==' ')
  {
  line[i]='-';
  }
cout<<line[i];
}
getch();
}
