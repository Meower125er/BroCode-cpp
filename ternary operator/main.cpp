#include <iostream>

using namespace std;

int main() {
    //used in place of if statements
    // condition ? result1 : result2

    int number;
    cout<<"enter a number: ";
    cin>>number;

    number % 2 == 0 ? cout<<"even" : cout <<"odd";
}