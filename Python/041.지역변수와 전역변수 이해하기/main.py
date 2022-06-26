param = 10
strdata = 'global var'


def func1():
    strdata = 'local var'
    print(strdata)


def func2(param):
    param = 1


def func3():
    global param
    param = 50


func1()
print(strdata)
print(param)
func2(param)
print(param)
func3()
print(param)
