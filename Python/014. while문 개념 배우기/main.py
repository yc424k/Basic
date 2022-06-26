x = 0
while x < 10:
    x = x + 1
    if x < 3:
        continue
    print(x)
    if x > 7:
        break
# 3보다 작을때는 출력하지 않음
# x가 7보다 커지면 더이상 더하지 않고 break문을 작동시켜 for문을 탈출함