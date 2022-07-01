strdata = input('정렬할 문자열을 입력하세요:')
ret1 = sorted(strdata)
ret2 = sorted(strdata, reverse=True)
print(ret1)
print(ret2)

ret1 = ''.join(ret1)
print(ret1)

ret2 = ''.join(ret2)
print(ret2)
