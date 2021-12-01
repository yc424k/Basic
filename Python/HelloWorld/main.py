# num_char = len(input("What is your name?"))

# new_num_char = str(num_char)

# print("Your name has " + new_num_char + " chracters.")

def mean(x, y):
    return (x+y)/2

def var(x,y):
    m = mean(x,y)
    return ((x-m)**2 + (y-m)**2)/2

a = 2
b = 4

print("m = ", mean(a,b))
print("v = ", var(a,b))