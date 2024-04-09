def solution(my_string):
    numbers = [int(char) for char in my_string if char.isdigit()]
    sorted_numbers = sorted(numbers)
    return sorted_numbers