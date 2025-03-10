
#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int balls[1000]; 
    for (int i = 0; i < n; ++i) {
        std::cin >> balls[i]; 
    }

    int totalDestroyed = 0; 

    bool hasChain = true; 

    while (hasChain) {
        hasChain = false;
        int newIndex = 0; 

        for (int i = 0; i < n;) {
            int count = 1;

            while (i + count < n && balls[i] == balls[i + count]) {
                count++;
            }

            if (count >= 3) {
                totalDestroyed += count;
                hasChain = true; 
                i += count; 
            } else {

                for (int j = 0; j < count; ++j) {
                    balls[newIndex++] = balls[i + j];
                }
                i += count; 
            }
        }

        n = newIndex; 
    }

    std::cout << totalDestroyed << std::endl; 
}
