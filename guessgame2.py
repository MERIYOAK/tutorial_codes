secret_word= 'ok'
guess_count = 0
guess_limit = 3
while guess_count < guess_limit:
    guess = input('guess: ')
    guess_count += 1
    if guess == secret_word:
        print('you won! ')
        break
else:
    print('you failed! ')