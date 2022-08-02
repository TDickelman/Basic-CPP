#include<iostream>
//include "personTypeImp.cpp"
#include "personTypeImp.cpp"
using namespace std;
int main()
{
//create an object of personType named person
personType person("Samual","Leroy","Jackson");
//set its middle name to "L."
person.setMiddleName("L.");
//check isFirstName() function
cout<<"Is Symon is same as the first name of the person?: "<<person.isFirstName("Symon")<<endl;
//display firstName,middleName and lastName by calling getter methods
cout<<"First name: "<<person.getFirstName()<<endl;
cout<<"Middle name: "<<person.getMiddleName()<<endl;
cout<<"Last name: "<<person.getLastName()<<endl;
return 0;
}
