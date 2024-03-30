def solution(n):
    # n이 제곱수인지 확인
    sqrt_n = int(n ** 0.5) # n의 제곱근을 구함
    if sqrt_n * sqrt_n == n: # n이 제곱수인지 확인
        return 1
    else:
        return 2