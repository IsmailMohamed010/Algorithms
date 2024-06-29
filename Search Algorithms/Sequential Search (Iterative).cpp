#include "iostream"
#include "vector"

using namespace std;

int Sequential_search(vector<int> &array,int key) {
    for(int i = 0;i<array.size();i++)
        if(array[i] == key)
            return i;
    return -1;
}

int main() {
    vector<int> array(5);
    for(int i = 0;i<5;i++)
        array[i] = i;
    
    int key = 10;
    cout << Sequential_search(array,key) << "\n";
    key = 1;
    cout << Sequential_search(array,key) << "\n";
    return 0;
}
