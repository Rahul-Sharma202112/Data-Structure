// we can't increase the size of an array in stack but can be increase in heap memory
#include <iostream>
using namespace std;

int main()
{
    int *p, *q;
    p = new int[5];
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];      //copying the elements in q.
    }
    delete[] p;  //delete the array p which is copied in q 
    p = q;        // Now pointer p point the copied array
    q = NULL;     //and q will b null 
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    return 0;
}