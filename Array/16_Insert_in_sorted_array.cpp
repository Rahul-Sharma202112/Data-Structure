#include <iostream>
using namespace std;

class Array
{
public:
    int A[10];
    int size;
    int length;

    void display(Array arr)
    {
        cout << "Elements are:" << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }
    void Insert(Array arr, int x)
    {
        if(length==size)
        {
            return;
        }
        int i = length - 1;
        while (i>=0 && A[i] > x)
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
    }
};
int main()
{
    Array arr = {{2, 3, 5, 7, 9, 10,11,12,13}, 10, 9};
    arr.display(arr);
    arr.Insert(arr, -2);
    cout << " " << endl;
    arr.display(arr);
    return 0;
}