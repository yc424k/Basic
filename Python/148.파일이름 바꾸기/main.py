from os import rename

target_file = '/home/yc424k/Basic/Python/stockcode.txt'
newname = input('[%s]에 대한 새로운 파일이름을 입력하세요:' % target_file)
rename(target_file, '/home/yc424k/Basic/Python/'+newname)
print('[%s]->[%s]로 파일이름이 변경되었습니다.' % ('stockcode.txt', newname))
