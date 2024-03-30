#include <iostream>

using namespace std;

int main() {
    for(int i=1; i<=10; i++) {
        cout<<i<<endl;
    }
    cout<<"meow"<<endl;

    for (int i = 1; i <= 20; i++)
    {
        if (i==13)
        {
            break;
        }
        cout<<i<<endl;
    }

    for (int i = 1; i <= 20; i++)
    {
        if (i==13)
        {
            continue;
        }
        cout<<i<<endl;
        
    }
    
    

}