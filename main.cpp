#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << '\a';
    system("(speaker-test -t sine -f 1000)& pid=$!; sleep 1.0s; kill -9 $pid");
    return 0;
}
