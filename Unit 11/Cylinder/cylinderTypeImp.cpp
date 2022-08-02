#include <iostream>

#include "circleType.h"

#include "cylinderType.h"

using namespace std;

cylinderType::cylinderType(double r,double h):circleType(r)

{

setHeight(h);

}

void cylinderType::setHeight(double h)

{

if(h>0)

height=h;

else

height=0;

}

double cylinderType::getHeight()

{

return height;

}

double cylinderType::area()

{

//area= 2pirh+2pir^2

double area=2*((3.1416*getRadius()*height)+(circleType::area()));

return area;

}

double cylinderType::volume()

{

double vol=circleType::area()*height;

return vol;

}

void cylinderType::print()

{

cout << "Radius = " << getRadius()<< ", Height = "<<height<<", area = " << area()<< ", volumne = " << volume();

}
