#include <iostream>

using namespace std;


int main() 
{
    // new 배열할당
    int array_size;

    cout << "배열 사이즈 입력 : ";
    cin >> array_size;

    int *arr = new int[array_size];

    
    for (int i = 0; i < array_size; i++)
    {
        cout << "배열" << i << "번째 입력 : " << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < array_size; i++)
    {
        cout << arr[i] << endl;
    }
    cout << endl;
    return 0;
}