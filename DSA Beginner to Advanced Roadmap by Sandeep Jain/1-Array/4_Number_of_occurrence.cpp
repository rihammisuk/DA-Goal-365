//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count1(int arr[], int n, int x) {
	    int low = 0;
	    int high = n-1;
	    int res = 0;
        while(low <= high){

            if(arr[high] < x  || arr[low] > x){
                break;
            }
            if(low == high){
                res++;
            }
            if(arr[low] == x && low != high){
                res++;
            }
            if(arr[high] == x && low != high){
                res++;
            }

            low++;
            high--;
        }
        return res;
	}



    int count2(int arr[], int n, int x)
    {
        int res = 0;
        for (int i = 0; i < n; i++)
            if (x == arr[i])
                res++;
        return res;
    }



    /* if x is present in arr[] then returns the count
        of occurrences of x, otherwise returns 0. */
    int count3(int arr[], int x, int n)
    {
      /* get the index of first occurrence of x */
      int *low = lower_bound(arr, arr+n, x);

      // If element is not present, return 0
      if (low == (arr + n) || *low != x)
         return 0;

      /* Else get the index of last occurrence of x.
         Note that we  are only looking in the
         subarray after first occurrence */
      int *high = upper_bound(low, arr+n, x);

      /* return count */
      return high - low;
    }

};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count3(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
