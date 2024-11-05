
#include<bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
int chocolateArrangement(int input1[], int input2[], int input3) {
    std::unordered_map<int, int> countA, countB;
    for (int i = 0; i < input3; ++i) {
        ++countA[input1[i]];
        ++countB[input2[i]];
    }

    int maxPairs = 0;
    for (const auto& [key, val] : countA) {
        maxPairs += std::min(val, countB[key]);
    }

    for (int shift = 0; shift < input3; ++shift) {
        int pairs = 0;
        for (int i = 0; i < input3; ++i) {
            if (input1[i] == input2[(i + shift) % input3]) {
                ++pairs;
            }
        }
        maxPairs = std::max(maxPairs, pairs);
    }

    return maxPairs;
}

int main() {
    int input1[] = {10, 20, 30, 60, 50};
    int input2[] = {20, 30, 60, 50, 10};
    int input3 = 5;

    int result = chocolateArrangement(input1, input2, input3);

    std::cout << "The maximum number of pairs of boxes that can be successfully arranged is: " << result << std::endl;

    if (result == 5) {
        std::cout << "Test passed!" << std::endl;
    } else {
        std::cout << "Test failed!" << std::endl;
    }

    return 0;
}