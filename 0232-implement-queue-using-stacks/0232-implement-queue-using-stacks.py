class Node:
    def __init__(self,val):
        self.val=val
        self.next=None
        self.prev=None
class DD:
    def __init__(self):
        self.head=Node(-1)
        self.tail=Node(-1)
        self.head.next=self.tail
        self.tail.prev=self.head
class MyQueue:

    def __init__(self):
        self.A=DD()

    def push(self, x: int) -> None:
        new=Node(x)
        self.A.tail.prev.next=new
        new.prev=self.A.tail.prev
        new.next=self.A.tail
        self.A.tail.prev=new
        


    def pop(self) -> int:
        a=self.A.head.next.val
        self.A.head.next=self.A.head.next.next
        self.A.head.next.prev=self.A.head
        return a

    def peek(self) -> int:
        return self.A.head.next.val
        

    def empty(self) -> bool:
        return self.A.head.next==self.A.tail
        


# Your MyQueue object will be instantiated and called as such:
# obj = MyQueue()
# obj.push(x)
# param_2 = obj.pop()
# param_3 = obj.peek()
# param_4 = obj.empty()