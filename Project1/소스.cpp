#include <iostream>

using namespace std;

class human
{
private:
    int age;
    int height;
    int weight;
    
public:
    human()
    {
        age = 0;
        height = 0;
        weight = 0;
    }

    human(int _age, int _height, int _weight)
    {
        age = _age;
        height = _height;
        weight = _weight;
    }
    
    void show_stat();
    
};

void human::show_stat()
{
    cout << "age : " << age << endl << "height : " << height << endl << "weight : " << weight << endl;
}

void print(int num)
{
    cout << num << endl;
}

void print(char num)
{
    cout << num << endl;
}

int main() 
{

    int a = 10;
    char b = 'Z';
    double c = 3.2f;

    print(a);
    print(b);
    //print(c); ������� �ڵ����� int �Ǵ� char ������ ��ȯ�ǳ� �����ε� 2���� ��ġ�� ������ �����߻�

    human james;
    human john(18, 180, 70);

    john.show_stat();
    cout << endl;
    james.show_stat();

    
    return 0;
}