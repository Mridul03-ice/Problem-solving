#include <iostream>
#include<bits/stdc++.h>
#include <string>
#include<cctype>
using namespace std;

void makeProductEven(int arr[], int N)
{
    int m = 1000000007, ans = 1;

    // Calculate 2 ^ N
    for (int i = 0; i < N; i++)
    {
        ans = (ans * 2) % m;
    }

    // Print the answer
    cout << ans - 1;
}

// Driver Code
int main()
{

    // Given array
    int arr[100];
    cin>>arr[];

    // Size of the array
    int N = sizeof(arr) / sizeof(arr[0]);
    makeProductEven(arr, N);
    return 0;
}
