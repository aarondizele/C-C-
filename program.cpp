#include <iostream>
using namespace std;

void selectSort(int A[], int n)
{
    for(int i=0; i < n-1; i++)
    {
        int iMin = i;
        for(int j= i+1; j<n; j++)
        {
            if(A[j] < A[iMin])
                iMin = j;
        }
        int temp = A[i];
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}
int main()
{
    int A[] = {2, 3, 4, 6, 1, 5};

    selectSort(A,7);
    for(int i = 0; i<6; i++)
        cout<<A[i]<<" ";
}