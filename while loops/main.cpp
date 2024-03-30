#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    while (name.empty()) {

        cout<<"what is your name: ";
        getline(cin, name);
        
    }

    int space = name.find(' ');

    if (space>0) {

        string usrname = name.erase(space, 1);
        string email = usrname.append("@gmail.com");
        cout<<email;
    }
    else {
        string email = name.append("@gmail.com");
        cout<<name;
    }
        
    
}