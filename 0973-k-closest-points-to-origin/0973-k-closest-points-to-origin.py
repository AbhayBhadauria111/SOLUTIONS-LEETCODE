class Solution:
    def kClosest(self, points: List[List[int]], k: int) -> List[List[int]]:
        def dist(i):
            return (i[0]**2+i[1]**2)**0.5
        A=[]
        for i in range(len(points)):
            if i<k:
                heappush(A,[-dist(points[i]),points[i]])
            else:
                if -A[0][0]>dist(points[i]):
                    heappop(A)
                    heappush(A,[-dist(points[i]),points[i]])
        return list(map(lambda x:x[1],A))