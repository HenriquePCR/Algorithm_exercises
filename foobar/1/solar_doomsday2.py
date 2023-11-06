import math


def solution(area):
    # Your code here
    ans = []
    while area>0:
        side = math.trunc(math.sqrt(area))
        square = side*side
        ans.append(square)
        area = area - square
    print(ans)
solution(12)