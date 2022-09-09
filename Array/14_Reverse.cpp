// Method:1 Reverse by making another auxilary array

#include<iostream>
using namespace std;

class Array
{
    public:

    int A[10];
    int size;
    int length;

    void display(Array arr)
    {
        cout<<"Elements are:"<<endl;
        for (int i = 0; i < length; i++)
        {
            cout<<A[i]<<" ";
        }
        
    }

    void Reverse(Array arr)
    {
        int *B;
        B=new int[length];
        int i,j;
        for ( i =length-1,j=0; i>=0; i--,j++)
        {
            B[j]=A[i];
        }
        for ( i = 0,j=0; j <length ; i++,j++)
        {
            A[i]=B[j];
        }
        
        
    }

};
int main()
{
    Array arr={{2,3,4,5,6,7,8,9,10,11},10,10};
    arr.display(arr);
    arr.Reverse(arr);
    cout<<" "<<endl;
    cout<<"After reverse ";
    arr.display(arr);
    return 0;
}