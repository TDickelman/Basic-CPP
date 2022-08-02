//romanType.cpp
#include<iostream>
#include<string>
#include "romanType.h"
using namespace std;
int romanType::getdecimal(char ch)
{
if (ch == 'I')
return 1;
if (ch == 'V')
return 5;
if (ch == 'X')
return 10;
if (ch == 'L')
return 50;
if (ch == 'C')
return 100;
if (ch == 'D')
return 500;
if (ch == 'M')
return 1000;

return -1;
}
/*Convert the roman string to integer value*/
int romanType::roman2decimal(string &str)
{
int decimal = 0;
for (int index=0; index<str.length(); index++)
{
int s1 = getdecimal(str[index]);

if (index+1 < str.length())
{
int s2 = getdecimal(str[index+1]);
// check if s1 >=s2
if (s1 >= s2)
decimal = decimal + s1;
else
{
//otherwise subtract s1 from s2 and add to decimal
decimal = decimal + s2 - s1;
index++;

}
}
else
{
decimal = decimal + s1;
index++;
}
}
return decimal;
}
