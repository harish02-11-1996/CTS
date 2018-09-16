#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void prime(int,int);
void main()
{
int number,secondno;
clrscr();
cout<<"\n"<<"Enter the no to find whether it is prime or not";
cin>>number;
secondno = number;
prime(number,secondno);
getch();
}
void prime(int no1,int no2)
{
no2 = no2 - 1;
if(no2 == 1)
{
cout<<"\n"<<"The given no is a prime number";
exit(0);
}
if(no1%no2 != 0)
{
prime(no1,no2);
}
else
{
cout<<"\n"<<"The given no is not a prime number";
exit(0);
}
}