/*
    Prefer using STL version of Binary search

*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

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
    cout << binary_search(arr.begin(), arr.end(), find) << endl;// check if Find is in the array.
    cout << lower_bound(arr.begin(), arr.end(), find) - arr.begin() << endl;
    cout << upper_bound(arr.begin(), arr.end(), find) - arr.begin() << endl;

}
