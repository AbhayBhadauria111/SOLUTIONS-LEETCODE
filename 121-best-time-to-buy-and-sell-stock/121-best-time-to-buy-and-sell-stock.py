class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        profit=0       
        Buy=prices[0]
        for i in range(len(prices)):
            Sell=prices[i]
            profit=max(profit,Sell-Buy)
            Buy=min(Buy,Sell)
        return profit
            
            
            
                
                
                    
        