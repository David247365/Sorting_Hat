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

    std::cout << "Q2) Dawn or Dusk?\n\n";
    std::cout << "  1) Dawn\n";
    std::cout << "  2) Dusk\n\n";
    std::cin >> a2;

    if(a2 == 1) {
        g++;
        r++;
    } else if (a2 == 2) {
        h++;
        s++;
    } else {
        std::cout << "Invalid input\n";
    }

    std::cout << "Q3) Which kind of instrument most pleases your ear?\n\n";
    std::cout << "  1) The violin\n";
    std::cout << "  2) The trumpet\n";
    std::cout << "  3) The piano\n";
    std::cout << "  4) The drum\n\n";
    std::cin >> a3;

    if (a3 == 1) {
        s++;
    } else if (a3 == 2) {
        h++;
    } else if (a3 == 3) {
        r++;
    } else if (a3 == 4) {
        g++;
    } else {
        std::cout << "Invalid input.\n";
    }

    std::cout << "Q4) Which road tempts you most?\n\n";
    std::cout << "  1) The wide, sunny grassy lane\n";
    std::cout << "  2) The narrow, dark, lantern-lit alley\n";
    std::cout << "  3) The twisting, leaf-strewn path through the woods\n";
    std::cout << "  4) The cobbled street lined (ancient buildings)\n\n";
    std::cin >> a4;

    if (a4 == 1) {
        h++;
    } else if (a4 == 2) {
        s++;
    } else if (a4 == 3) {
        g++;
    } else if (a4 == 4) {
        r++;
    } else {
        std::cout << "Invalid input.\n";
    }
}