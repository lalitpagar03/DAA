#include <iostream>
using namespace std;

int main() {
    int capacity = 10;
    int items = 4;
    int price[] = {0, 3, 7, 2, 9};  // Use an array instead of initializing with a size
    int wt[] = {0, 2, 2, 4, 5};     // Use an array instead of initializing with a size
    int dp[items + 1][capacity + 1];

    for (int i = 0; i <= items; i++) {
        for (int j = 0; j <= capacity; j++) {
            if (i == 0 || j == 0) {
                // There's nothing to add to the knapsack
                dp[i][j] = 0;
            } else if (wt[i] <= j) {
                // Choose the previously maximum or value of the current item + value of the remaining weight
                dp[i][j] = max(dp[i - 1][j], price[i] + dp[i - 1][j - wt[i]]);
            } else {
                // Add the previously added item to the knapsack
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    cout << "Maximum Profit Earned: " << dp[items][capacity] << "\n";
    return 0;
}
