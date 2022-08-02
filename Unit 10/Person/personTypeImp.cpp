// Write your code here
#include<iostream>
//include "PersonType.h"
#include "personType.h"
using namespace std;
//print() function implementation
void personType::print() const
{
//print first name ,middle name and last name
cout<<"First name: "<<firstName<<endl;
cout<<"Middle name: "<<middleName<<endl;
cout<<"Last name: "<<lastName<<endl;
}
//setName() function implementation
void personType::setName(string first, string middle, string last)
{
firstName=first;
middleName=middle;
lastName=last;
}
//setFirstName() function implementation
void personType::setFirstName(string first)
{
firstName=first;
}
//setMiddleName() function implementation
void personType::setMiddleName(string middle)
{
middleName=middle;
}
//setlastName() function implementation
void personType::setLastName(string last)
{
lastName=last;
}
//isLastName() function to check the given name is the last name or not
bool personType::isLastName(string last) const
{
return lastName==last;
}
//isFirstName() function to check the given name is the first name or not
bool personType::isFirstName(string first) const
{
return firstName==first;
}
//getFirstName() function implementation
string personType::getFirstName() const
{
return firstName;
}
//getMiddleName() function implementation
string personType::getMiddleName() const
{
return middleName;
}
//getLastName() function implementation
string personType::getLastName() const
{
return lastName;
}
//constructor to initialize variables
personType::personType(string first, string middle, string last)
{
firstName=first;
middleName=middle;
lastName=last;
}
