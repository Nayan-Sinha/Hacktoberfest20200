import random

number=random.randint(1,25)
chances=0

print("Guess a number betwwen 1 and 25")

while chances<5:
    guess= int(input("Ennter your guess: "))

    if guess==number:
        print("Cogratulation YOU WON!!!")
        exit()
    elif guess<number:
        print("Your guess was too low")
    else:
        print("Your guess was too high")
    chances +=1
    print("Chances left : ",5-chances)

print("YOU LOSE!!! The number is : ",number)
