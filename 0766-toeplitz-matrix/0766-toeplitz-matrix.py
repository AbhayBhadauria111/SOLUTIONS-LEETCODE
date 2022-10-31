class Solution:
    def isToeplitzMatrix(self, matrix: List[List[int]]) -> bool:
        a=[]
        i=len(matrix)-1
        while(i>=0):
            j=0
            temp=[]
            k=i
            while(j<len(matrix[0]) and k<len(matrix)):
                temp.append(matrix[k][j])
                k+=1
                j+=1
            a.append(temp)
            i-=1
            
        j=1
        i=0
        while(j<len(matrix[0])):
            temp=[]
            i=0
            k=j
            while(i<len(matrix) and k<len(matrix[0])):
                temp.append(matrix[i][k])
                k+=1
                i+=1
            j+=1
            a.append(temp)
        
        for i in a:
            temp=i[0]
            for j in i:
                if j!=temp:
                    return False
        return True
        
                
            
            
                
            
        