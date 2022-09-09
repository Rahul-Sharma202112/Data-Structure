#include <iostream>
using namespace std;

class Array
{
public:
    int A[10];
    int size;
    int length;

    void swap(int *x, int *y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp;
    }

    int Linear_search(Array *arr, int key)
    {
        for (int i = 0; i < arr->length; i++)
        {
            if (key ==arr-> A[i])
            {

                swap(&arr->A[i], &arr->A[i-1]);  //transposition (swapping with previous index)
                // swap(&arr->A[i], &arr->A[0]);   //move to Head
                return i;
            }
            
        }
        return -1;
    }

    void display(Array arr)
    {
        cout << "Elements are:" << endl;
        for (int i = 0; i < arr.length; i++)
        {
            cout << A[i] << " ";
        }
    }
};
int main()
{
    Array arr = {{2, 4, 6, 8, 10,12,14,16}, 10, 8};
    cout<<"Index is: " << arr.Linear_search(&arr, 6) << endl;
    arr.display(arr);
    return 0;
}