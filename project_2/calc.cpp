#include <iostream>
#include <cmath>

using namespace std;

int main() {
    char op;
    double x;
    double y;

    cout<<"welcome to this calculator!"<<endl
        <<"enter the first number: ";
    cin>>x;
    cout<<"enter the second number: ";
    cin>>y;

    cout<<"what operation would you like to perform: ";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<x+y;
        break;
    case '-':
        cout<<x-y;
        break;
    case '*':
        cout<<x*y;
        break;
    case '/':
        cout<<x/y;
        break;
    
    default:
        cout<<"invalid operator";
        break;
    }

}