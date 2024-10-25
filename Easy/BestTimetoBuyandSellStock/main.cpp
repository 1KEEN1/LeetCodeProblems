#include <iostream>
#include <vector>

int maxProfit(std::vector<int>& prices) {
    if (prices.empty())
        return 0;

    int minPrice = prices[0];
    int maxProfit = 0;

    for (std::size_t i = 1; i < prices.size(); ++i) {
        minPrice = std::min(minPrice, prices[i]);
        maxProfit = std::max(maxProfit, prices[i] - minPrice);
    }

    return maxProfit;
}

int main() {
    std::vector<int> prices = {7, 1, 5, 3, 6, 4};

    std::cout << "Max profit: " << maxProfit(prices) << std::endl;

    return 0;
}