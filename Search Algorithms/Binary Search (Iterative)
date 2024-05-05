#include "iostream"
#include "vector"

using namespace std;

int binary_Search(vector<int> &arr,int key) {
    int law = 0, high = arr.size()-1,mid = 0;

    while(law<=high) {
        mid = high + (law - high) / 2;
        if(arr[mid] == key)
            return mid;

        if(arr[mid] < key)
            law = mid + 1;
        else high = mid - 1;
    }

    return -1;
}

int main() {
    vector<int> arr(5);
    for(int i = 0;i<5;i++)
        arr[i] = i;

    int key = 10;
    cout << binary_Search(arr,key) << "\n";
    key = -1;
    cout << binary_Search(arr,key) << "\n";
    key = 4;
    cout << binary_Search(arr,key) << "\n";
    return 0;
}
