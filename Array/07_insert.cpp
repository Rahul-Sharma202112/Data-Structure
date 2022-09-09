#include <iostream>
using namespace std;

class Array
{
    int A[10] = {2, 3, 4, 5, 6};
    int size;
    int length;

public:
    Array()
    {

        size = 10;
        length = 5;
    }

    void Insert(Array *arr, int index, int value);
    
    void Display(Array arr);
};

    void Array:: Insert(Array *arr, int index, int value)
    {
        if (index >= 0 && index <= arr->length)
        {
            for (int i = arr->length; i > index; i--)
            {
                arr->A[i] = arr->A[i - 1];
                arr->A[index] = value;
                arr->length++;
            }
        }
    }

    void Array:: Display(Array arr)
    {
        int i;
        cout << "Elements are:" << endl;
        for (i = 0; i < arr.length; i++)
        {
            cout << arr.A[i] << " ";
        }
    }

int main()
{
    Array arr;
    arr.Insert(&arr, 4, 10);
    arr.Display(arr);
    return 0;
}