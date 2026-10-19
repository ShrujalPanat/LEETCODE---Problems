
char* intToRoman(int num) {
    static char result[20];
    int values[] = {
        1000, 900, 500, 400, 100, 90,
        50, 40, 10, 9, 5, 4, 1
    };

    char *symbols[] = {
        "M", "CM", "D", "CD", "C", "XC",
        "L", "XL", "X", "IX", "V", "IV", "I"
    };

    int i = 0;
    int pos = 0;

    while (num > 0) {
        while (num >= values[i]) {
            num -= values[i];

            char *p = symbols[i];
            while (*p != '\0') {
                result[pos++] = *p++;
            }
        }
        i++;
    }

    result[pos] = '\0';

    return result;
}
