/* wap to search element in a 1-d array */

#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int array[10],size,item,position,a;
cout<<"Enter size of array\n";
cin>>size;
for(int i=0;i<size;i++)
{
cout<<"Enter array element\n";
cin>>array[i];
}
cout<<"Enter elenent to be searched\n";
cin>>item;
for(i=0;i<size;i++)
{
if(array[i]==item)
{

  break;
  }

}
if(i==size)
{
 cout<<"element not found";
 }
else
{
cout<<"element found at position: "<<i+1;
}
getch();
 }

