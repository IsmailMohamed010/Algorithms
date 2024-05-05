#include "iostream"
#include "vector"

using namespace std;

int Sequential_search(vector<int> &array,int key,int index = 0) {
    if(index == array.size())
        return -1;
    if(array[index] == key)
        return index;
    return Sequential_search(array,key,index+1);
}

int main() {
    vector<int> array(5);
    for(int i = 0;i<5;i++)
        array[i] = i;

    int key = 10;
    cout << Sequential_search(array,key) << "\n";
    key = 4;
    cout << Sequential_search(array,key) << "\n";
    return 0;
}
