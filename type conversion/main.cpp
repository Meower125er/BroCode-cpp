#include <iostream>

using namespace std;

int main() {
    // conversion is of two types:
    // implicit = automatic
    // explicit = precede valeue with new data type

    int x = 3.14; //implicit conversion as int can only hold integers
    double y = 3.24;
    double z = (int) 3.34;//explicit conversion

    cout<<x<<endl<<y<<endl<<z;

}