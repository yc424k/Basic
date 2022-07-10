string = "ABCDEDE"
array = []

for idx in range(len(string)):
    array.append(0)

print(array, len(array))
print("index 0 :", array[0])
print("index 1 :", array[1])

array1 = [0 for idx in range(len(string))]  # 2~5줄을 1줄로 압축시킴
print(array)
