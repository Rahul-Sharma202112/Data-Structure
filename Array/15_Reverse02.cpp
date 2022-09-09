// Method: 2 By swapping in same array

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

    void swap(int *x, int *y)
    {

        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }
    void Reverse(Array *arr)
    {
        int i, j;
        for (i = 0, j = length - 1; i < j; i++, j--)
        {
            swap(&A[i], &A[j]);
        }
    }
};

int main()
{
    Array arr = {{2, 3, 4, 5, 6, 7, 8, 9, 10, 11}, 10, 10};
    arr.display(arr);
    arr.Reverse(&arr);
    cout << " " << endl;
    cout << "After reverse ";
    arr.display(arr);
    return 0;
}