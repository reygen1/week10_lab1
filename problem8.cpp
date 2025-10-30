#include <iostream>
using namespace std;

int main() {
    const int SIZE = 1000;
    int arr[SIZE];
    srand(time(0));

    int s1 = 0, s2 = 0, s3 = 0, s4 = 0, s5 = 0, s6 = 0;

    for (int i = 0; i < SIZE; i++) {
        arr[i] = rand() % 6 + 1;

        if (arr[i] == 1) s1++;
        else if (arr[i] == 2) s2++;
        else if (arr[i] == 3) s3++;
        else if (arr[i] == 4) s4++;
        else if (arr[i] == 5) s5++;
        else if (arr[i] == 6) s6++;
    }

    cout << "1: " << s1 << endl;
    cout << "2: " << s2 << endl;
    cout << "3: " << s3 << endl;
    cout << "4: " << s4 << endl;
    cout << "5: " << s5 << endl;
    cout << "6: " << s6 << endl;

    return 0;
}