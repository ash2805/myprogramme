#include <iostream.h>
#include <conio.h>
void main()
{
clrscr();
int arrA[5][5],arrB[5][5],sub[5][5],row,col,j;
cout<<"enter the no. of rows\n";
cin>>row;
cout<<"enter the no. of column\n";
cin>>col;
cout<<"enter elements of matrix A:\n";
for(int i=0;i<row;i++)
 {
 for(j=0;j<col;j++)
 {
 cin>>arrA[i][j];
 }
}
cout<<"enter elements of matrix B:\n";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
cin>>arrB[i][j];
}
}

cout<<"output: ";
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
sub[i][j]=arrA[i][j]-arrB[i][j];
cout<<sub[i][j]<<" ";
}

}
getch();
}