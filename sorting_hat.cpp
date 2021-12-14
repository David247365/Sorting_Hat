#include <iostream>

int main() {
    // houses and points
    int g = 0;
    int h = 0;
    int r = 0;
    int s = 0;

    // answers 1 - 4
    int a1 = 0, a2 = 0, a3 = 0, a4 = 0;

    // Start Quiz
    std::cout << "The Sorting Hat Quiz!\n\n";

    // questions
    std::cout << "Q1) When I'm dead, I want people to remember me as:\n\n";
    std::cout << "  1) The Good\n";
    std::cout << "  2) The Great\n";
    std::cout << "  3) The Wise\n";
    std::cout << "  4) The Bold\n\n";
    std::cin >> a1;

    if (a1 == 1) {
        h++;
    } else if (a1 == 2) {
        s++;
    } else if (a1 == 3) {
        r++;
    } else if (a1 == 4) {
        g++;
    } else {
        std::cout << "Invalid input.\n";
    }
}