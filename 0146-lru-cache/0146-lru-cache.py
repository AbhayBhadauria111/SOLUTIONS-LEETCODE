class Node:
    def __init__(self,val,next,prev,key):
        self.val=val
        self.next=next
        self.prev=prev
        self.key=key
class LRUCache:

    def __init__(self, capacity: int):
        self.head=Node(-1,None,None,-1)
        self.tail=Node(-1,None,self.head,-1)
        self.head.next=self.tail
        self.D={}
        self.cap=capacity

    def get(self, key: int) -> int:
        if key in self.D:
            ans=self.D[key].val
            self.delete(self.D[key])
            self.insert(key,ans)
            return ans
        else:
            return -1
    def put(self, key: int, value: int) -> None:
        if key in self.D:
            self.delete(self.D[key])
            self.insert(key,value)
            return 
        if len(self.D)>=self.cap:
            self.delete(self.tail.prev)
        self.insert(key,value)
    def delete(self,Node):
        NEXT=Node.next
        PREV=Node.prev
        PREV.next=NEXT
        NEXT.prev=PREV
        del self.D[Node.key]
    def insert(self,key,value):
        new=Node(value,self.head.next,self.head,key)
        self.D[key]=new
        self.head.next.prev=new
        self.head.next=new
            
            
        
        


# Your LRUCache object will be instantiated and called as such:
# obj = LRUCache(capacity)
# param_1 = obj.get(key)
# obj.put(key,value)