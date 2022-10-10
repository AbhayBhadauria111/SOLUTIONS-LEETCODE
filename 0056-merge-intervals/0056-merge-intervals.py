class Solution:
    def merge(self, intervals: List[List[int]]) -> List[List[int]]:
        intervals.sort(key=lambda x:x[0])
        last=intervals[0]
        ans=[]
        for i in range(1,len(intervals)):
            current=intervals[i]
            if last[1]>=current[0]:
                last=[last[0],max(last[1],current[1])]
            else:
                ans.append(last)
                last=current
        ans.append(last)
        return ans