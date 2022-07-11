from collections import Counter
numbers = [4, 0, 4, 4, 1, 8, 8, 2, 2, 5, 0, 6, 5, 6, 0]
numbers.sort()
for k, v in Counter(numbers).items():
    print(k, v)
