#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;

int main() {
    double totalMiles;       
    double costPerGallon;   
    double milesPerGallon;   
    double parkingFees;      
    double tollsPerDay;     
    double dailyCost;        

    cout << "Enter total miles driven per day: ";
    cin >> totalMiles;

    cout << "Enter cost per gallon of gasoline: ";
    cin >> costPerGallon;

    cout << "Enter average miles per gallon: ";
    cin >> milesPerGallon;

    cout << "Enter parking fees per day: ";
    cin >> parkingFees;

    cout << "Enter tolls per day: ";
    cin >> tollsPerDay;

   
    if (milesPerGallon <= 0) {
        cout << "Error: Average miles per gallon must be greater than 0.\n";
    }
    else {
        
        dailyCost = (totalMiles / milesPerGallon) * costPerGallon + parkingFees + tollsPerDay;

        
        cout << "\nYour daily driving cost to work is: $" << dailyCost << "\n";
        cout << "Consider car-pooling to save money, reduce emissions, and avoid congestion!\n";
    }
    system("pause");
    return 0;
}