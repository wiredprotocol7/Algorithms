/*

   When to use?

   1. If sorted, use Binary search.
   2. See if Hashing or Search tree can be used.


*/
#include<iostream>
#include<vector>
using namespace std;

int seq_search(vector<int>& arr, int find)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == find)
        {
            return i;
        }
    }
    
    return -1;

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
    cout << seq_search(arr, find) << endl;
}
