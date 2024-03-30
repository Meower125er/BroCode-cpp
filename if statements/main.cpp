#include <iostream>

using namespace std;

int main() {
    //logical operators:
    //&& --> both statements true
    //|| --> one statement true
    //! --> statement false
    int age;
    cout<<"enter yout age: ";
    cin>>age;

    if(age>=18) {
        cout<<"welcome to the site!";
    }
    else if(age<0) {
        cout<<"you haven't been born yet";
    }
    else {
        cout<<"You are not old enough to enter";
    }
}