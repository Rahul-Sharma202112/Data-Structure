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
    void Rearrange(Array *arr)
    {
        int i, j;
        i = 0;
        j = arr->length - 1;
        while (i < j)
        {
            while (arr->A[i] < 0)

                i++;
            while (arr->A[i] >= 0)

                j--;
        
            if (i < j)

                swap(&arr->A[i], &arr->A[j]);
        }
    }
};
int main()
{
    Array arr = {{4, -5, 6, -8, 9, -10, 7}, 10, 7};
    arr.Rearrange(&arr);
    arr.display(arr);
    return 0;
}