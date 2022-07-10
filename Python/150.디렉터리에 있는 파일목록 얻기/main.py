from glob import glob


import os
import glob

folder = '/home/yc424k/Basic/Python/'
file_list = os.listdir(folder)
print(file_list)

files = '*.txt'
file_list = glob.glob(files)
print(file_list)
