#include <iostream>
using namespace std;
void  minArr (int arr[], int sz) {
    int min = arr[0];
    for (int i = 1; i < sz; i++) {
        if (arr[i] < min) {
            min = arr[i];
        } }
   cout << min;
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

