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
        ans1[it] = ans;
        if(sum < 0)
            sum = 0;
    }
    for(auto it : ans1)
        cout << it << " ";
    return 0;
}


// Kadane's Algorithm: to find maximum sum for subarray or minimam.
// Toturial: https://youtu.be/yVeqKMgvUXo?si=mpuVUZhV-__VqNyi