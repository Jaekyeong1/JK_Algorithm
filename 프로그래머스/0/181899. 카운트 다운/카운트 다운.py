def solution(start_num, end_num):
    result = []
    
    for num in range(start_num, end_num - 1, -1):
        result.append(num)
    
    return result