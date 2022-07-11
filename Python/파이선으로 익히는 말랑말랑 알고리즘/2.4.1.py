# 0번 인덱스와 1번 인덱스 값 바꾸기

from psutil import swap_memory


list = [1, 2, 3]
print("before : ", list)

list[0], list[1] = list[1], list[0]

print("after : ", list)
