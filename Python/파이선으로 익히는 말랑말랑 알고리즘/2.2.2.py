# collections를 사용하지 않고 2.2.1.py랑 같은 기능 만들기

numbers = [4, 0, 4, 4, 1, 8, 8, 2, 2, 5, 0, 6, 5, 6, 0]
# memo = [0] * 10
memo = [0 for idx in range(10)]
for n in numbers:
    memo[n] += 1

for i in range(len(memo)):
    print(i, memo[i])
