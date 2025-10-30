#include <iostream>
using namespace std;
void  minArr (int arr[], int sz) {
    int max = arr[0];
    int ind  = 0;
    for (int i = 1; i < sz; i++) {
        if (arr[i] > max) {
            max = arr[i];
            ind = i + 1 ;
        } }
    cout << "max : "<<max <<" index : " << ind;
}

int main () {
    int nums ;
    cin >> nums;
    int arr[nums];
    for (int i = 0; i < nums; i++) {
        cin >> arr[i];
    }
    minArr(arr, nums);

}

