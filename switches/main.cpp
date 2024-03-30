#include <iostream>

using namespace std;

int main() {
    // switch is used in place of many else if statements

    int day;
    cout<<"enter a day of the week (1-7): ";
    cin >> day;

    switch(day) {
        case 1:
            cout<<"monday";
            break;
        case 2:
            cout<<"tuesday";
            break;
        case 3:
            cout<<"wednesday";
            break;
        case 4:
            cout<<"thrusday";
            break;
        case 5:
            cout<<"friday";
            break;
        case 6:
            cout<<"saturday";
            break;
        case 7:
            cout<<"sunday";
            break;
        default:
            cout<<"invalid";
    }

}