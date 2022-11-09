#include<iostream>
using namespace std;

class Array
{
    int A[10]={2,3,4,5,6,7,8,9,10,11};
    int size;
    int length;

    public:
    Array()
    {
        size=10;
        length=10;
    }
    int Linear_search(Array *arr,int x)
    {
        for (int i = 0; i <length; i++)
        {
            if(x==A[i])
            {
                // return i;            //first simple method

                int temp;                  // Transposition(swapping with previous index)
                // temp=A[i];
                // A[i]=A[i-1];
                // A[i-1]=temp;
                // return i-1;

                temp=A[i];                  // Move to front/head 
                A[i]=A[0];
                A[0]=temp;

                return 0;
            }
        }
        return -1;
        
    }


};
int main()
{
    Array arr;
    cout<<arr.Linear_search(&arr,10);

    return 0;
}