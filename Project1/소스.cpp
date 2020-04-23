#include <iostream>

using namespace std;

class human
{
private:
    int age;
    int height;
    int weight;
    
public:
    void set_human(int _age, int _height, int _weight)
    {
        age = _age;
        height = _height;
        weight = _weight;
    }
    
    void show_stat()
    {
        cout << "age : " << age << endl << "height : " << height << endl << "weight : " << weight << endl;
    }
};


int main() 
{
    human james;
    james.set_human(18, 180, 70);
    james.show_stat();

    
    return 0;
}