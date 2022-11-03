class SoccerPlayer():
    def __init__(self, name="No name", position="No position", back_number=0):
        self.name = name
        self.position = position
        self.back_number = back_number

    def change_back_number(self, new_number):
        print(f"선수의 등번호를 변경합니다: From {self.back_number} to {new_number}")
        self.back_number = new_number

    def print_back_number(self):
        print(f"선수의 등번호를 출력한다: {self.back_number}")

    def __str__(self):
        return f"Hello, my name is {self.name}. I am Soccer Player"


class BaseballPlayer(SoccerPlayer):
    def __str__(self):
        return f"Hello, my name is {self.name}. I am BaseBall Player"


messi = SoccerPlayer("Lionel Messi", "Forward", 10)
daeho = BaseballPlayer("Park", "Pitcher", 13)

messi.change_back_number(30)
messi.print_back_number()

print(messi)
print(daeho)
