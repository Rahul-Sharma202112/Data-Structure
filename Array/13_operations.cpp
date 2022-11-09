#include <iostream>
using namespace std;

class Array
{
public:
    int A[10];
    int size;
    int length;

    void Display(Array arr)
    {
        cout << "Elements are:" << endl;
        for (int i = 0; i < length; i++)
        {
            cout << A[i] << " ";
        }
    }

    int Get_value(Array arr, int index)
    {
        if (index >= 0 && index < length)
        {
            return A[index];
        }
        else
            return -1;
    }

    void Set_value(Array arr, int index, int x)
    {
        if (index >= 0 && index < length)
        {
            A[index] = x;
        }
    }

    int Max(Array arr)
    {
        int max = A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i] > max)
            {
                max = A[i];
            }
        }
        return max;
    }
    int Min(Array arr)
    {
        int min = A[0];
        for (int i = 1; i < length; i++)
        {
            if (A[i] < min)
            {
                min = A[i];
            }
        }
        return min;
    }

    int Sum(Array arr)
    {
        int sum = 0;
        for (int i = 0; i < length; i++)
        {
            sum = sum + A[i];
        }
        return sum;
    }

    float Avg(Array arr)
    {
        float avg=Sum(arr)/length;
        return avg;
    }
};
int main()
{
    Array arr = {{2, 4, 6, 8, 10,12,14}, 10, 8};
    cout << arr.Get_value(arr, 5) << endl;
    arr.Set_value(arr, 7, 16);
    arr.Display(arr);
    cout << " " << endl;
    cout << "maximum num:" << arr.Max(arr) << endl;
    cout << "minimum num:" << arr.Min(arr) << endl;
    cout << "Sum is:" << arr.Sum(arr) << endl;
    cout << "Average is:" << arr.Avg(arr) << endl;
    return 0;
}