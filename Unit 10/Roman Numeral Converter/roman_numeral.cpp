//main.cpp
//include header files
#include <iostream>
#include "romanType.h"
using namespace std;
int main() {

//create an object of //romanType.h
romanType r;

string roman ;
cout<<"Enter a roman literal : ";
//read roman string
cin>>roman;
//calling roman2decimal method
cout<<"Equivalent decimal value : "<<r.roman2decimal(roman);


cout<<endl;
//pause program output on consoe
system("pause");
// Write your main here
return 0;
}
