#include "iostream"
#include "vector"

using namespace std;

int binary_Search(vector<int> &arr,int key,int high,int low = 0) {
    if(high < low)
        return -1;
    int mid = low + (high - low) / 2;
    if(arr[mid] == key)
        return mid;
    else if(arr[mid] > key)
        return binary_Search(arr,key,mid-1,low);
    else if(arr[mid] < key)
    return binary_Search(arr,key,high,mid+1);
}

int main() {
    vector<int> arr(5);
    for(int i = 0;i<5;i++)
        arr[i] = i;

    int key = 10;
    cout << binary_Search(arr,key,arr.size()-1) << "\n";
    key = -1;
        cout << binary_Search(arr,key,arr.size()-1) << "\n";
    key = 0;
    cout << binary_Search(arr,key,arr.size()-1) << "\n";
    return 0;
}
