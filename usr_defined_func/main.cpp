#include <iostream>

using namespace std;

void happyBirthday(string name, int age) {

    for (int i = 0; i < 3; i++)
    {
    cout<<"Happy birthday to "<<name<<endl;
        
    }
    cout<<"you are "<<age<<" years old";
}

int main() {
    
    string name;
    cout<<"What is your name: ";
    cin>>name;
    int age;
    cout<<"what is your age: ";
    cin>>age;

    happyBirthday(name, age);
    
    return 0;
}

