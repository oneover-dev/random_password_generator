#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int length;
    std::cout << "Enter password length: "; 
    std::cin >> length;

    if (length <= 0) {
        std::cout << "Length must be greater than 0\n";
        return 1;
    }

    std::string charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()-_=+[]{}<>?/|";
    int charsetSize = charset.size();

    srand(time(0));

    for (int i = 0; i < length; ++i) {
        int key = rand() % charsetSize;
        std::cout << charset[key];
    }

    std::cout << std::endl;
    return 0;
}
