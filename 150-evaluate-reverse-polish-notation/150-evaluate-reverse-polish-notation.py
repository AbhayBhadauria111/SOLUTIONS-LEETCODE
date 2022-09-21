class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack=[]
        op=['+','-','/','*']
        for i in tokens:
            if i not in op:
                stack.append(int(i))
            else:
                t2=stack.pop()
                t1=stack.pop()
                if i=='+':
                    stack.append(t1+t2)
                elif i=='-':
                    stack.append(t1-t2)
                elif i=='*':
                    stack.append(t1*t2)
                elif i=='/':
                    
                    stack.append(int(t1/t2))
                print(t1,t2,i)   
                
        return stack[0]
                    
                
                
            
        