#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(int x1, int y1, int x2, int y2) {
        return sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
}
double radius(int x1, int y1, int x2, int y2) {
        return distance(x1, y1, x2, y2);
}
double circumference(double r) {
        return 2 * M_PI * r;
}
double area(double r) {
        return M_PI * (r * r);
}

int main() {
        int x1, y1, x2, y2;

        cout << "Enter x coordinate of center: ";
        cin >> x1;
        cout << "Enter y coordinate of center: ";
        cin >> y1;

        cout << "Enter x coordinate of point on circle: ";
        cin >> x2;
        cout << "Enter y coordinate of point on circle: ";
        cin >> y2;

        double radius = distance(x1, y1, x2, y2);
        cout << "Radius: " << setprecision(3) << radius <<  endl;
        cout << "Diameter: " << setprecision(4) << 2 * radius << endl;
        cout << "Circumference: " << setprecision(4) << circumference(radius) << endl;
        cout << "Area: " << setprecision(4) << area(radius) << endl;
}
