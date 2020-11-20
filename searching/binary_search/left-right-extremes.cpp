/*

   When to use?

   1. If sorted, use Binary search.
   2. Mind the equality at non-extremes. 

*/
#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

int bsearchleft(vector<int>& arr, int find)
{
    int left, right, mid;

    left = 0; right = arr.size()-1;

    while (left <= right)
    {
        mid = floor((left+right) / 2);
 

        if ((mid == 0 || arr[mid-1] < find) && arr[mid] == find)
        {
            return mid;
        }


        if (arr[mid] < find)
        {
            left = mid + 1;
        }

        else
        {
            right = mid-1;
        }

    }

    return -1;

}

int bsearchright(vector<int>& arr, int find)
{
    int left, right, mid;

    left = 0; right = arr.size() - 1;

    while (left <= right)
    {
        mid = floor((left + right) / 2);
      

        if ((mid == arr.size()-1 || arr[mid+1] > find) && arr[mid] == find)
        {
            return mid;
        }


        if (arr[mid] <= find)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
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

    cout << bsearchleft(arr, find) << "***" << bsearchright(arr, find) << endl;

}
