#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <stdio.h>
#include <cmath>
#include <iomanip>
using namespace std;


struct menuItemType {

string menuItem;

float menuPrice;

int menuOrdered;

};

//Defining array menuList[] of type menuItemType

menuItemType menuList[8];

class Resturant{

public:

int i=0;

void getData(){

char choice;

int iNumber;

cout<<"\nDo you want to make selection Y/y (Yes), N/n (No): ";

cin>>choice;

while(choice=='y'||choice=='Y')

{

cout<<"Enter item number: ";

cin>>iNumber;

menuList[i].menuOrdered=iNumber;

switch(iNumber){

case 1:
menuList[i].menuItem = "Plain Egg";
menuList[i].menuPrice=1.45;

break;

case 2:
menuList[i].menuItem = "Bacon and Egg";
menuList[i].menuPrice=2.45;

break;

case 3:
menuList[i].menuItem = "Muffin";
menuList[i].menuPrice=0.99;

break;

case 4:
menuList[i].menuItem = "French Toast";
menuList[i].menuPrice=1.99;

break;

case 5:
menuList[i].menuItem = "Fruit Basket";
menuList[i].menuPrice=2.49;

break;

case 6:
menuList[i].menuItem = "Cereal";
menuList[i].menuPrice=0.69;

break;

case 7:
menuList[i].menuItem = "Coffee";
menuList[i].menuPrice=0.5;

break;

case 8:
menuList[i].menuItem = "Tea";
menuList[i].menuPrice=0.75;

break;

default: cout<<"\nSelect an appropriate option "; i--;

}

cout<<"\nDo you want to make selection Y/y (Yes), N/n (No): ";

cin>>choice;

i++;

}

}

void showMenu(){

cout<<"\nWelcome to Johnny's Resturant";

for(int j=0; j<i;j++)

{

switch(menuList[j].menuOrdered){

cout<<menuList[j].menuItem<< "\t" << menuList[j].menuPrice;

}

}

}

void printCheck(){

float total=0;

for(int j=0; j<i;j++){

total=total+menuList[j].menuPrice;

}

cout<<"\nTax $" << fixed << setprecision(2) << total*0.05<<"\n";

cout<<"\nAmount Due $" << fixed << setprecision(2) << total + (total * 0.05) << "\n";

}

};

int main(){

Resturant r;

cout<<"\nWelcome to Johnny's Resturant\n ----Today's Menu---- \n1: Plain Egg $1.45 \n2: Bacon and Egg $2.45 \n3: Muffin $0.99 \n4: French Toast $1.99 \n5: Fruit Basket $2.49 \n6: Cereal $0.69 \n7: Coffee $0.50 \n8: Tea $0.75 \nYou can make up to 8 single order selections";

r.getData();

r.showMenu();

r.printCheck();

return 0;

}
