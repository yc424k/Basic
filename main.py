# 숫자 야구게임
import random


def make_random_number():
    x0, x1, x2 = random.sample(range(10), 3)
    return [x0, x1, x2]


def check_strike_ball(secret_number, answer_number):
    strike = 0
    ball = 0
    for i in range(3):
        if secret_number[i] == answer_number[i]:
            strike += 1
        elif answer_number[i] in secret_number:
            ball += 1
    return [strike, ball]


answer = make_random_number()
count = 0
while True:
    count += 1
    guess = input("숫자를 입력하세요: ")
    # if guess == "q":
    #     break
    guess = [int(x) for x in guess]
    strike, ball = check_strike_ball(answer, guess)
    print("Your answer is {}".format(guess))
    print("{} strike and {} ball".format(strike, ball))

    if strike == 3:
        print("The number of trials is {}".format(count))
        print("The answer is {}".format(answer))
        break
