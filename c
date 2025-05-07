// C: Simple Console Output for Predicted Stock Prices
#include <stdio.h>

int main() {
    float actual_prices[] = {150.0, 151.5, 152.3, 153.7};
    float predicted_prices[] = {150.2, 151.4, 152.8, 153.6};
    int n = sizeof(actual_prices) / sizeof(actual_prices[0]);

    printf("Time\tActual\tPredicted\n");
    for(int i = 0; i < n; i++) {
        printf("%d\t%.2f\t%.2f\n", i + 1, actual_prices[i], predicted_prices[i]);
    }

    return 0;
}


