from audioop import reverse


# reversed는 원본 데이터를 변경하지 않음
listdata = list(range(5))
ret = reversed(listdata)
print(listdata)
print(list(ret))

ret2 = listdata[::-1]
print(ret2)
