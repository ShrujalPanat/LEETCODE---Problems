#include <stdbool.h>

bool checkPerfectNumber(int num) {
    if (num <= 1)
        return false;

    int sum = 1;  // 1 is a divisor of every number > 1

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            sum += i;

            // Add the paired divisor if it's different
            if (i != num / i)
                sum += num / i;
        }
    }

    return sum == num;
}
