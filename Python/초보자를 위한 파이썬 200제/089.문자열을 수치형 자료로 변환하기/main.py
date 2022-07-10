from codecs import escape_encode


numstr = input('숫자를 입력하세요:')

try:
    num = int(numstr)
    print(num)
except:
    try:
        num = float(numstr)
        print(num)
    except:
        print('---숫자를 입력하세요.---')
