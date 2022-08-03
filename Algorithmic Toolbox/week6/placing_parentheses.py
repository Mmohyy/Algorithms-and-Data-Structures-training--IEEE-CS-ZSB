# Uses python3
def evalt(a, b, op):
    if op == '+':
        return a + b
    elif op == '-':
        return a - b
    elif op == '*':
        return a * b
    else:
        assert False


def MinAndMax(i,j,M,m,operators):
    minVal = pow(10,20)
    maxVal = pow(10,-20)
    
    for k in range(i,j):
        a = evalt( M[i][k], M[k+1][j], operators[k])
        b = evalt( M[i][k], m[k+1][j], operators[k])
        c = evalt( m[i][k], M[k+1][j], operators[k])
        d = evalt( m[i][k], m[k+1][j], operators[k])
        
        minVal = min(minVal,a,b,c,d)
        maxVal = max(maxVal,a,b,c,d)
    
    return minVal , maxVal

def get_maximum_value(dataset):
    #write your code here
    operators,operands = [],[]
    for i in dataset:
        if i in ['+','-','*']:
            operators.append(i)
        else:
            operands.append(int(i))
    
    n = len(operands)
    M = [[0]*n for i in range(n)]
    m = [[0]*n for i in range(n)]
    
    for i in range(n):
        M[i][i] = operands[i] 
        m[i][i] = operands[i] 
    
    for s in range(1,n):
        for i in range(0,n-s):
            j = i+s  
            m[i][j] , M[i][j] =  MinAndMax(i,j,M,m,operators)

    return M[0][n-1]


if __name__ == "__main__":
    print(get_maximum_value(input()))
