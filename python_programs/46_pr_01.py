def game():
    return 6

current_score = game()
with open('hi_score.txt','r') as f:
    previous_hi_score = f.read()

if(previous_hi_score == "" or (int(previous_hi_score)<current_score)):
    with open('hi_score.txt', 'w') as f:
        f.write(str(current_score))
    print("Updated hi_score.txt with new score: "+str(current_score))
else:
    pass
