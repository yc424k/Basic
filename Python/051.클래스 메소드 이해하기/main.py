class MyClass:
    def sayHello(self):
        print('Hello')

    def sayBye(self, name):
        print('%s! see you later' % name)


obj = MyClass()
obj.sayHello()
obj.sayBye('YouBlue')
