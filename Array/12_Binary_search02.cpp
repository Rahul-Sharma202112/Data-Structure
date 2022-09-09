#include<iostream>
using namespace std;

class Array
{
    public:
    int A[15];
    int size;
    int length;

    void Display(Array arr)
    {
        cout<<"Elements are:"<<endl;
        for (int i = 0; i < length; i++)
        {
            cout<<A[i]<<" ";
        }
        
    }

int RBin_search(int a[],int l,int h,int key)
{
    int mid;
    if (l<=h)
    {
        mid=(l+h)/2;
        if (key==A[mid])
        {
            return mid;
        }
        else if (key<A[mid])
        {
            return RBin_search(a,l,mid-1,key);
        }
        else
        {
            return RBin_search(a,mid+1,h,key);
        }
        
        
    }
    return -1;
    
}


};
int main()
{
    Array arr={{2,3,4,5,6,7,8,9,10,11,12},15,11};
    cout<<"index is:"<<arr.RBin_search(arr.A,0,arr.length,14)<<endl;
    arr.Display(arr);
    return 0;
}