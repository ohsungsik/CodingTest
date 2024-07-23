def gcd(a, b):
    while b:
        a, b = b, a % b
    return a

def gcd_of_array(array):
    result = array[0]
    for num in array[1:]:
        result = gcd(result, num)
        if result == 1:
            break
    return result

def mod(array, gcd):
    for num in array:
        if num % gcd == 0:
            return True
    return False

def solution(arrayA, arrayB):
    answer = 0
    
    gcdA = gcd_of_array(arrayA)
    gcdB = gcd_of_array(arrayB)
    
    if gcdA == 1 and gcdB == 1:
        answer = 0
    else:
        if mod(arrayB, gcdA) is False:
            answer = gcdA
        
        if mod(arrayA, gcdB) is False:
            if answer < gcdB:
                answer = gcdB
    
    return answer