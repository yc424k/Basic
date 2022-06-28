h1 = hex(97)
h2 = hex(98)
ret1 = h1 + h2
# hex는 string으로 반환하기 때문에 문자열이 합해져서 출력됨
print(ret1)

a = int(h1, 16)
b = int(h2, 16)
ret2 = a + b
print(hex(ret2))
