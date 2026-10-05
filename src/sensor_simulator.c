#include <stdio.h>

int main() {
    // Array or individual sample values for 3 readings
    int temps[3] = {25, 32, 43};
    int humids[3] = {55, 61, 82};

    printf("================================\n");
    printf(" Smart Environmental Monitor v0.2\n");
    printf("================================\n\n");

    for (int i = 0; i < 3; i++) {
        printf("Reading %d\n", i + 1);
        printf("Temperature: %d C\n", temps[i]);
        printf("Humidity: %d %%\n", humids[i]);

        // Condition checking for status
        if (temps[i] > 40 || humids[i] > 80) {
            printf("Status: CRITICAL\n\n");
        } else if (temps[i] > 30) {
            printf("Status: WARNING\n\n");
        } else {
            printf("Status: NORMAL\n\n");
        }
    }

    return 0;
}
