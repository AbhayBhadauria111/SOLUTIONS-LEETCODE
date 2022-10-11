class Solution:
    def canReach(self, arr: List[int], start: int) -> bool:
        queue=[start]
        visited=set()
        while(queue):
            curr=queue.pop(0)
            if curr in visited:
                continue
            if arr[curr]==0:
                return True
            visited.add(curr)
            if curr+arr[curr]<len(arr):
                queue.append(curr+arr[curr])
            if curr-arr[curr]>=0:
                queue.append(curr-arr[curr])
        return False
            
            
        
        