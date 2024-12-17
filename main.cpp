#include <iostream>

void evendigits(long long n, int& ans) {
    if (n == 0) {
        return;
    }

    if ((n % 10) % 2 == 0) {
        ans++;
    }

    evendigits(n / 10, ans);
}

int main() {
    long long n;
    int ans = 0;

    std::cout << "Enter a number: ";
    std::cin >> n;

    evendigits(n, ans);

    std::cout << "Number of even digits: " << ans << std::endl;

    return 0;
}
