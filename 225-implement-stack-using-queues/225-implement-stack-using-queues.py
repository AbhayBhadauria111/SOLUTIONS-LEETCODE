class MyStack:

    def __init__(self):
        self.L=[]
        

    def push(self, x: int) -> None:
        self.L.append(x)

    def pop(self) -> int:
        top=self.L[-1]
        self.L=self.L[:-1]
        return top
        

    def top(self) -> int:
        return self.L[-1]
        

    def empty(self) -> bool:
        if len(self.L)==0:
            return True
        return False
        


# Your MyStack object will be instantiated and called as such:
# obj = MyStack()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.top()
# param_4 = obj.empty()