#include <iostream>

using namespace std;

void value3(int& a)
{
    a = 3;
}
int& value(int& a)
{
    return a;
}

int main() 
{
    int a = 5;
    
    cout << " a = " << a << endl;
    value3(a);
    cout << a << endl;

    value(a)++;
    
    cout << a << endl;

    return 0;
}