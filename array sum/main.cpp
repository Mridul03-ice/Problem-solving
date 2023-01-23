#include <iostream>

using namespace std;
int arraySum(int arr[],int s)
{
    int result=0;
    for(int i=0; i<s; i++)
        result+=arr[i];
    return result;
}

int main()
{
    int arr[9]= {1,2,3,4,5,6,7,8,9};
    int temp=arraySum(arr,9);
    cout<<temp<<" ";
}

