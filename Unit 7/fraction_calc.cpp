#include <iostream>

using namespace std;

void menu()
{
cout<<"1. Addition\n2.Subtraction\n3.Multiplication\n4.Divison\n5.Exit\n";

}
void addFractions(int *num,int *denum,int num1,int denum1,int num2,int denum2)
{
*num = num1*denum2 + num2*denum1;
*denum = denum1*denum2;
}

void subtractFractions(int *num,int *denum,int num1,int denum1,int num2,int denum2)
{

*num = num1*denum2 - num2*denum1;
*denum = denum1*denum2;
}

void multiplyFractions(int *num,int *denum,int num1,int denum1,int num2,int denum2)
{

*num = num1*num2;
*denum= denum1*denum2;
}

void divideFractions(int *num,int *denum,int num1,int denum1,int num2,int denum2)
{
*num = num1*denum2;
*denum= denum1*num2;
}

int main()
{

int choice,num,denum,num1,denum1,num2,denum2;

while(true)
{
menu();
cout<<"Enter the choice:";
cin>>choice;

if(choice==5)
{
break;
}

cout<<"Enter the first numerator and denominator:";
cin>>num1>>denum1;
cout<<"Enter the second numerator and denominator:";
cin>>num2>>denum2;

switch(choice)
{

case 1:
{
addFractions(&num,&denum,num1,denum1,num2,denum2);
cout<<num1<<"/"<<denum1<<" + "<<num2<<"/"<<denum2<<" = "<<num<<"/"<<denum<<endl;
}
break;
case 2:
{

subtractFractions(&num,&denum,num1,denum1,num2,denum2);
cout<<num1<<"/"<<denum1<<" - "<<num2<<"/"<<denum2<<" = "<<num<<"/"<<denum<<endl;
}
break;

case 3:
{

multiplyFractions(&num,&denum,num1,denum1,num2,denum2);
cout<<num1<<"/"<<denum1<<" * "<<num2<<"/"<<denum2<<" = "<<num<<"/"<<denum<<endl;
}
break;

case 4:
{

divideFractions(&num,&denum,num1,denum1,num2,denum2);
cout<<num1<<"/"<<denum1<<" / "<<num2<<"/"<<denum2<<" = "<<num<<"/"<<denum<<endl;
}
break;

default:
cout<<"Invalid choice"<<endl;


}
}


return 0;
}
