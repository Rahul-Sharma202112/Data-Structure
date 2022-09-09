#include <iostream>
using namespace std;

class Array
{
    int A[10] = {2, 4, 6, 8, 10};
    int size;
    int length;

public:
    Array()
    {
        size = 10;
        length = 5;
    }
    void Delete(Array *arr, int index, int x);
    void Display(Array arr);
};
void Array::Delete(Array *arr, int index, int x)
{
    if (index >= 0 && index <= arr->length)
    {
        x = arr->A[index];
        for (int i = index; i < arr->length - 1; i++)
        {
            arr->A[i] = arr->A[i + 1];
        }
        arr->length--;
    }
}

void Array::Display(Array arr)
{
    cout << "Elements are :" << endl;
    for (int i = 0; i < arr.length; i++)
    {
        cout << A[i] << " ";
    }
}
int main()
{
    Array arr;
    arr.Delete(&arr, 3, 8);
    arr.Display(arr);
    return 0;
}