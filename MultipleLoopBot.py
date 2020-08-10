print('What is your name?')
name = input()
print('Cool,',name,', hope you have a good name.' )
print('Are you Happy?')
state = input()
print('I think i knew you will say,',state,'.But its fine to be.')
print('I think,',name,',you should take some rest' )
print('Rate how happy you are? 0 is sad, and 10 is happiest')
rate = int(input())
if rate <=3:
    print('You should work hard.')
    print('How unhappy you are? 0 is worst and 10 is best')
    day = int(input())
if rate <=5:
    print('If i was human, i would give you a hug.')
else:
    print('Maybe i should try your approach.')
elif rate <=6 :
    print('I think you\'re actually happy.')
    print('How much time do you spend like this? 0 is sometime and 10 is 24 hrs ')
    hours = input()
    hours = int(hours)
    if hours <=4:
        print('That\'s no problem')
    else:
        print('You should work on your own.')
elif rate <= 8:
    print('You are doing great.')
    print('How happy you should be more? 0 is fine and 10 is more and more')
    happy = int(input())
    if happy <= 5 
        print('It\'s cool .')
    else:
        print('I think you will be happy more😊')
    else:
        print('Do you exercise? Yes or No')
        exer = input()
        if exer == 'Yes'
                print('My god, you are too good.')
        else:
            print('You should try exercising')
    
