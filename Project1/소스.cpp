#include <iostream>

using namespace std;


int main() 
{
    // new �迭�Ҵ�
    int array_size;

    cout << "�迭 ������ �Է� : ";
    cin >> array_size;

    int *arr = new int[array_size];

    
    for (int i = 0; i < array_size; i++)
    {
        cout << "�迭" << i << "��° �Է� : " << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}