class StockSpanner:

    def __init__(self):
        self.stack=[]
        self.Arr=[]
        self.i=-1
        

    def next(self, price: int) -> int:
        self.Arr.append(price)
        self.i+=1
        flag=0
        while(self.stack and self.Arr[self.stack[-1]]<=price):
            self.stack.pop()
            flag=1
        self.stack.append(self.i)
        if flag==0:
            return 1
        else:
            if len(self.stack)==1:
                return self.stack[-1]+1
            else:
                return self.stack[-1]-self.stack[-2]
                
        
                   
            
            
        


# Your StockSpanner object will be instantiated and called as such:
# obj = StockSpanner()
# param_1 = obj.next(price)