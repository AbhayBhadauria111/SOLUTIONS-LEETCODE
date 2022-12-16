class MyQueue:

    def __init__(self):
        self.A=[]
        

    def push(self, x: int) -> None:
        self.A.append(x)
        

    def pop(self) -> int:
        return self.A.pop(0)

    def peek(self) -> int:
        return self.A[0]

    def empty(self) -> bool:
        return len(self.A)==0
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()