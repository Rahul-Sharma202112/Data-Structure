// Array Append
#include <iostream>
using namespace std;

class Array
{

    int *A ;//[10] = {9, 2, 3, 4, 5};
    int size;
    int length;

public:
    Array()
    {
        A = new int[10];
        A[0]=2;
        A[1]=4;
        A[2]=6;
        A[3]=8;
        A[4]=10;
        size = 10;
        length = 5;
    }
    void Append(Array *arr, int x)
    {
        if (arr->length < arr->size)
        {
            arr->A[arr->length++] = x;
        }
    }
    void Display(Array arr)
    {
        int i;
        cout << "Elements are:" << endl;
        for (i = 0; i < arr.length; i++)
        {
            cout << arr.A[i] << " ";
        }
    }
};

int main()
{
    Array arr; //={{2,4,6,8,10},10,5};

    arr.Append(&arr, 12);
    arr.Display(arr);
    return 0;
}