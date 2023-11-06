import math


def solution(area):
    # Your code here
    max = 1000000
    square_v = []
    result = []
    max_square = math.sqrt(max)
    for i in range(1, math.trunc(max_square)+1):
        square_v.append(i*i)
    print(square_v)
solution(15)
    