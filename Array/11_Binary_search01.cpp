// iterative way for binary search
#include <iostream>
using namespace std;

class Array
{
public:
    int A[15];
    int size;
    int length;

    int Binary_search(Array *arr, int key)
    {
        int l, mid, h;
        l = 0;
        h = length;

        while (l <= h)
        {
            mid = (l + h) / 2;

            if (key == A[mid])
            {
                return mid;
            }
            else if (key < A[mid])
            {
                h = mid - 1;
            }
            else if (key > A[mid])
                {
                    l = mid + 1;
                }
        }
        return -1;
    }
};

int main()
{
    Array arr = {{2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12}, 15, 11};
    cout<< "index is:" << arr.Binary_search(&arr, 5);
    return 0;
}