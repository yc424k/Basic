from posixpath import split


url = 'http://www.naver.com/news/today=202022'
log = 'name:블루 age:25 sex:남자 nation:한국'

ret1 = url.split('/')
print(ret1)

# default 값은 공백
ret2 = log.split()
for data in ret2:
    d1, d2 = data.split(':')
    print('%s -> %s' % (d1, d2))
