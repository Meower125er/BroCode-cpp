#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double perpendicular;
    double base;

    cout<<"length of the perpendicular: ";
    cin >> perpendicular;
    cout<<"length of the base: ";
    cin >> base;

    double hypotenuse = sqrt(pow(perpendicular, 2) + pow(base, 2));

    cout<<"the hypotenuse is: "<<hypotenuse<<"cm";
}