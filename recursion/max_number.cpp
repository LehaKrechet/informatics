#include <iostream>

char findMaxDigit(const char* input, int index, char maxDigit){
    if (input[index] == '\0') {
        return maxDigit; 
    }

    if (input[index] > maxDigit) {
        maxDigit = input[index]; 
    }


    return findMaxDigit(input, index + 1, maxDigit);
}

int main() {
    char input[1001];
    std::cin >> input;

    char maxDigit = findMaxDigit(input, 0, '0');

    std::cout << maxDigit << std::endl;

    return 0;
}