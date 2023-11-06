def convert(list):
     
    # Converting integer list to string list
    s = [str(i) for i in list]
     
    # Join list items using join()
    res = ("".join(s))
     
    return(res)

def solution(n, b):
    #Your code here
    nList = []
    ans = set()
    firstStop = False
    nSet = set()
    counter = 0
    while(True):
        nList = [int(x) for x in n]
        descendingN = sorted(nList, reverse=True)
        ascendingN = sorted(nList)
        z = []
        for i in range(len(nList)-1,-1,-1):
            if(descendingN[i] - ascendingN[i]<0):
                descendingN[i] +=b
                descendingN[i-1] -=1
            result = descendingN[i] - ascendingN[i]
            z.insert(0,result) 
        if(firstStop==False):
            aux1 = len(nSet)
            print(z)
            n = convert(z)
            print(n)
            nSet.add(n)
            aux2 = len(nSet)    
            if(aux1 == aux2):
                firstStop=True
            print(aux1,aux2)
            print()          
        else:
            aux1 = len(ans)
            print(z)
            n = convert(z)
            ans.add(n)
            aux2 = len(ans)
            print(aux1,aux2)
            print()     
            if(aux1 == aux2):
                print(aux2)
                return aux2
            


solution('1211', 10)