#include <iostream>
#include <vector>

using namespace std;

typedef vector<pair<string, int>> pairstring_t;
//used to give a nickname to a very long data type
//replaced bu 'using' keyword
using text_t = string;

int main() {
    pairstring_t something{};
    text_t name = "meow";

    cout<<name;
}

