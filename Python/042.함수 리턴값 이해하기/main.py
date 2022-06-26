def reverse(x, y, z):
    return z, y, x  # 리턴 값이 여러개 있으면 튜플로 리턴값을 만듦


ret = reverse(1, 2, 3)
print(ret)

r1, r2, r3 = reverse('a', 'b', 'c')
print(r1)
print(r2)
print(r3)
