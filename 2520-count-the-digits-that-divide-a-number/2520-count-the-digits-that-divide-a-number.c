int countDigits(int num) {
    int original = num;
    int count = 0;

    for (; num > 0; num = num / 10) {
        int digit = num % 10;

        if (original % digit == 0) {
            count++;
        }
    }

    return count;
}