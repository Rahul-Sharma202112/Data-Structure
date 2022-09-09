#include<iostream>
using namespace std;

class Array
{
    private:
    int *A;
    int size;
    int length;

    public:
    Array()
    {
        size=10;
        A=new int[size];
        length=10;
    }
    Array(int sz)
    {
        size=sz;
        A=new int[size];
        length=0;
    }
    ~Array()
    {
        delete []A;
    }

    void Display();
    void Insert(int index,int x);


};

void Array::Display()
{
    cout<<"Elements are: "<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<A[i]<<" ";
    }
    
}
void Array::Insert(int index,int x)
{
    
}