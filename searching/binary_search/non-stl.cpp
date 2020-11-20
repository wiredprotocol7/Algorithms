/*
   When to use?

   1. If sorted, use Binary search.

*/
#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int binary_search(vector<int>& arr, int find)
{
    int left, right,middle;
    left = 0; right = arr.size() - 1;

    while (left <= right)
    {
        middle = floor((left + right) / 2);

        if (arr[middle] == find)
        {
            return middle;

        }

        else if (arr[middle] < find)
        {
            left = middle + 1;
        }

        else
        {
            right = middle - 1;
        }
    }

    return middle;
    

}



int main()
{
    int n, temp;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        arr[i]=temp;
    }

    int find;
    cin >> find;
    cout << binary_search(arr, find) << endl;
}
