/*
CSC 134
M2Lab - the crate program
Mykayla lewis
1/28/26

find volume of crate
find cost, customer_price, and profit
print everything out
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // part 1 -- declare variables
    // constant variabkes (don't cange unless the market changes)
    const double COST_PER_CUBIC_FOOT = 0.23;
    const double CHARGE_PER_CUBIC_FOOT = 0.5;
    // crate variables
    double length, width, height, volume;
    
    // money variables
    double cost, customer_price, profit;

    // part 2 -- get the input
    cout << "Welcome to the Crate Program." << endl;
    cout << "Please enter the crate dimensions." << endl;

    cout << "Crate length? ";
    cin >> length;
    cout << "Crate width? ";
    cin >> width;
    cout << "Crate height? ";
    cin >> height;

    // part 3 -- do the calculations
    volume = length * width * height;
    cost = volume * COST_PER_CUBIC_FOOT;
    customer_price = volume * CHARGE_PER_CUBIC_FOOT;
    profit = customer_price - cost;

    // part 4 -- print the output
    cout << "Volume is " << volume << " cubic feet." << endl;
    return 0;

}