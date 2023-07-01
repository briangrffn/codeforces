#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int N;
    std::cin >> N;

    std::vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        std::cin >> arr[i];
    }

    // Reverse the array using the reverse function from the algorithm library
    std::reverse(arr.begin(), arr.end());

    // Print the reversed array
    for (int i = 0; i < N; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}