#include "add_nums.h"

int main(void) {
        int a = 3;
        int b = 5;

        int sum = add_nums(a, b);

        if (sum != 8) {
                return (1);
        }

        return (0);
}
