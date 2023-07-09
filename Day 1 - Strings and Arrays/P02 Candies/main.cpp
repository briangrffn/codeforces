#include <iostream>
#include <vector>

int totalCandies(std::vector<int>& candies, int A, int B) {
    int sum = 0;
    for (int i = A; i <= B; i++) {
        sum += candies[i];
    }
    return sum;
}

int main() {
    int N;
    std::cin >> N;

    std::vector<int> candies(N);
    for (int i = 0; i < N; i++) {
        std::cin >> candies[i];
    }

    int A, B;
    std::cin >> A >> B;

    int total = totalCandies(candies, A, B);
    std::cout << total << std::endl;

    return 0;
}

