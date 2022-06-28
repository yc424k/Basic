txt = 'A lot of things occur each day, every day'
offset1 = txt.find('e')
offset2 = txt.find('day')

# 30번 이후에 있는 day를 찾겠다는 뜻
offset3 = txt.find('day', 30)
offset4 = txt.find('z')

# 값이 없으면 -1를 반환
print(offset1, offset2, offset3, offset4)
