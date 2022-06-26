#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!";
    cout << " This " << "is " << "awesome!";
    cout << "endl makes a line break" << endl;
    cout << "\n also does the same";

    int variable = 10;
    int a,b;

    int num;
    cin >> num; // cin is used for user input
    cin >> a >> b;
    cout << num << a << b;

    // auto keyword automatically deducts type of variable 
    // must be initialized at its declaration
    auto x = 41; // integer
    auto pi = 3.14; // float
    auto phrase = "phrase"; // string

    x = 5;
    int y = ++x; // prefix
    // x is 6, y is 6
    
    x = 5;
    y = x++;
    // x is 6, y is 5
    
    return 0;
}