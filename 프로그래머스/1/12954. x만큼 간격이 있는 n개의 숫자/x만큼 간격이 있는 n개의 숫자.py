def solution(x, n):
    answer = []
    answer.append(x)
    target = x
    while n > 1:
        n -= 1
        target += x
        answer.append(target)
        
    return answer