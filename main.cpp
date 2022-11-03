/*
Write a program that asks the user to enter an item's wholesale cost and its markup percentage.
It should then display the item's retail price. For example:
 - If an item's wholesale cost is 5.00 and its markup percentage is 100 percent,
   then the item's retail price is 10.00.
*/
#include <iostream>
using namespace std;

double calculateRetail (double wholePar, double markPar)
{
    double decimal = markPar / 100;
    double rate = decimal * wholePar;
    return wholePar + rate;
}

int main ()
{
    cout << "enter wholesale price: ";
    double wholeSale;
    cin >> wholeSale;
    cout << "enter markup percentage: ";
    double markUp;
    cin >> markUp;
    cout << "your retail price is $" << calculateRetail (wholeSale, markUp);
}
