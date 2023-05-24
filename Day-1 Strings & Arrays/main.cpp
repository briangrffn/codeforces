#include <iostream>
using namespace std;

int main() {
    int n;
    //how many integers you want to enter
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    //reversing the array

    for (int i = n-1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << "\n";



    return 0;
}