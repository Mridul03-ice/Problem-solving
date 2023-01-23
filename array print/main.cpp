#include <iostream>

using namespace std;
void printArray(int arr[],int s)
{
    int result;
    for(int i=0;i<s;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    int arr[9]={1,2,3,4,5,6,7,8,9};
    printArray(arr,9);
}

