#include <iostream>

#define ll long long

using namespace std;

int main() {
    ll n = 0;
    cin >> n;
    ll arr[n];
    ll sum = 0;
    ll ans= 0;
    ll ans1[n];
    for(int it = 0;it<n;it++) {
        cin >> arr[it];
        sum+=arr[it];
        ans = max(ans,sum);
        if(sum < 0)
            sum = 0;
    }
    cout << ans;
    return 0;
}


// Kadane's Algorithm: to find the maximum sum for subarray or minimum.
// Toturial: https://youtu.be/yVeqKMgvUXo?si=mpuVUZhV-__VqNyi
