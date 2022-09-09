#include <iostream>
using namespace std;

int main()
{
    int A[4] = {0};
    int B[5];
    int C[4] = {6, 7, 8, 9};
    int D[5] = {6, 8};

    int arr[] = {4, 5, 6, 7, 3, 2};

    for (int i = 0; i < 6; i++)
    {
        //cout << arr[i] << ",";
        //cout << A[i] << ",";
        //cout << B[i] << ",";
        cout << C[i] << ",";
        //cout << D[i] << ",";

        // cout<<&B[i]<<",";
    }
    return 0;
}