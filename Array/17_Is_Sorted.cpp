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
    int Is_Sorted(Array arr)
    {
        int i;

        for (i = 0; i < length - 1; i++)
        {
            if (A[i] > A[i + 1])
            {
                return 0;
            }
            
        }
        return 1;
    }
};
int main()
{
    Array arr = {{2, 3, 5, 7, 9, 10}, 10, 6};
    cout << arr.Is_Sorted(arr) << endl;
    arr.display(arr);

    return 0;
}