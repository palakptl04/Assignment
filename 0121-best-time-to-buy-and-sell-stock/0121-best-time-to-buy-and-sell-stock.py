class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit=0
        min=prices[0]
        for i in range(1,len(prices)):
            if min > prices[i]:
                min=prices[i]
            if profit < prices[i]-min :
                profit = prices[i]-min
        return profit