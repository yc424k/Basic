scope = [1,2,3,4,5]
for x in scope:
    print(x)
    if x < 3:
        continue
    else:
        # 반복문 탈출
        break