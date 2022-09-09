#include <iostream>
using namespace std;

class Array
{
public:
    int *A;
    int size;
    int lenght;
};
void display(Array arr)
{
    int i;
    cout << "Elements are:" << endl;
    for (i = 0; i < arr.lenght; i++)
    {
        cout << arr.A[i] << " ";
    }
}

int main()
{
    Array arr;
    int n, i;
    cout << "Enter the size of an array:";
    cin >> arr.size;

    arr.A = new int[arr.size];
    arr.lenght = 0;

    cout << "Enter number of numbers:";
    cin >> n;

    cout << "Enter all Elements:" << endl;
    for (i = 0; i < n; i++)
    {
        cin >> arr.A[i];
    }
    arr.lenght = n;
    display(arr);

    return 0;
}