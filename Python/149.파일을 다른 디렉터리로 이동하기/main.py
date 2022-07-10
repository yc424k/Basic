from os import rename

target_file = '/home/yc424k/Basic/Python/stockcode.txt'
newpath = input('[%s]를 이동할 디렉터리의 절대경로를 입력하세요:' % target_file)
if newpath[-1] == '/':
    newname = newpath + target_file
else:
    newname = newpath + '/' + target_file

try:
    rename(target_file, newname)
    print('[%s]->[%s]로 이동되었습니다.' % (target_file, newpath))
except FileNotFoundError as e:
    print(e)
