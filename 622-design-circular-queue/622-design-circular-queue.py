class MyCircularQueue:

    def __init__(self, k: int):
        self.arr=[None for i in range(k)]
        self.front=self.rear=-1
        self.k=k
        
       
    def enQueue(self, value: int) -> bool:
        if self.isFull():
            return False
        self.rear=(self.rear+1)%self.k
        self.arr[self.rear]=value
        if self.front==-1:
            self.front=0
        
        return True
        
        

    def deQueue(self) -> bool:
        if self.isEmpty():
            return False
        
        if self.front==self.rear:
            self.front=self.rear=-1
        else:
            self.front=(self.front+1)%self.k
        return True
        
        

    def Front(self) -> int:
        if self.isEmpty():
            return -1
        return self.arr[self.front]
        

    def Rear(self) -> int:
        if self.isEmpty():
            return -1
        return self.arr[self.rear]
        

    def isEmpty(self) -> bool:
        if self.front==self.rear==-1:
            return True
        return False
        

    def isFull(self) -> bool:
        if (self.rear+1)%self.k==self.front:
            return True
        return False
        


# Your MyCircularQueue object will be instantiated and called as such:
# obj = MyCircularQueue(k)
# param_1 = obj.enQueue(value)
# param_2 = obj.deQueue()
# param_3 = obj.Front()
# param_4 = obj.Rear()
# param_5 = obj.isEmpty()
# param_6 = obj.isFull()