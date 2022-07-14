#include <iostream>

using namespace std;

int main() 
{

    double totalMilk, cartonMilk = 3.78, costOfMilk = 0.38, profit = 0.27, numberOfCarton;
    double totalCost, totalProfit;



    cout << "Enter total milk produced in morning: ";
    cin >> totalMilk;
    numberOfCarton = static_cast<int> (totalMilk / cartonMilk + 0.5);
    cout << "The number of milk cartons needed to hold milk is " << numberOfCarton
         << endl;

    totalCost = totalMilk * costOfMilk;
    cout << "The cost of producing milk is " << totalCost << endl;

    totalProfit = profit * numberOfCarton;
    cout << "The profit for producing milk is " << totalProfit << endl;



    return 0;
}



