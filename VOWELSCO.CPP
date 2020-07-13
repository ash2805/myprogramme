#include <iostream.h>
#include <conio.h>
#include <string.h>
void main()
{
clrscr();
char string[50];
int count=0;
cout<<"enter your line:\n";
cin.getline(string,50);
for(int i=0;string[i]!='\0';i++)
 {
  switch(string[i])
  {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
   count++;
}
 }
cout<<"vowels present:"<<count++;

getch();
}