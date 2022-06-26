def add_txt(t1, t2='파이썬'):
    print(t1+':'+t2)


add_txt('best')
add_txt(t2='Korea', t1='first')


def func1(*args):
    print(args)


def func2(width, height, **kwargs):
    print(kwargs)


func1()
func1(3, 5, 1, 5,)
func2(10, 20)
func2(10, 20, depth=50, color='blue')
