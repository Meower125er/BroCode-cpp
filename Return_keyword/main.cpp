#include <iostream>

using namespace std;

double square(double length) {

    return length*length;
}

int main(){
    double length;
    cin>>length;
    double area = square(length);

    cout<<area;
    return 0;
}