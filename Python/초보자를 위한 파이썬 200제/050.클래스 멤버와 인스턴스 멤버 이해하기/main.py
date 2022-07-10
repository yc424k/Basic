class MyClass:
    var = 'Hello'

    def sayHello(self):
        param1 = 'Hello'
        self.param2 = 'Hi'
        print(param1)
        print(self.var)


obj = MyClass()
print(obj.var)
obj.sayHello()
print(obj.param2)  # sayHello() 내에서 선언된 인스턴스 멤버라 sayHello() 호출 후 사용이 가능함
# obj.param1 # sayHello의 지역변수라서 MyClass의 인스턴스 객체로 obj멤버 참조가 불가능
