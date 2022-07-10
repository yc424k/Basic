class MyClass:
    var = 'Hello'

    def sayHello(self):
        print(self.var)


obj = MyClass()  # MyClass 인스턴스 객체 생성
print(obj.var)  # 'Hello'출력
obj.sayHello()  # 'Hello' 출력
