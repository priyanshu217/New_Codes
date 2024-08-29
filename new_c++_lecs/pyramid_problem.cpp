#include <iostream>

void printPyramid(int height) {
    for (int i = 1; i <= height; ++i) {
        // Print leading spaces
        for (int j = height - i; j > 0; --j) {
            std::cout << " ";
        }
        // Print stars
        for (int k = 0; k < (2 * i - 1); ++k) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

int main() {
    int height;
    std::cout << "Enter the height of the pyramid: ";
    std::cin >> height;

    printPyramid(height);

    return 0;
}
