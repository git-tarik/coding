//standard kadane's algorithm for maximum array sum

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int main()
{
    int n = 5, maxsum = INT_MIN;
    int arr[5] = {-1, -2, -3, -4, -5};
    int currsum = 0;
        for (int i = 0;i < n; i++){
            currsum = max(currsum + arr[i],arr[i]);
            maxsum = max(maxsum, currsum);
        }
    cout << maxsum;
    return 0;
}

