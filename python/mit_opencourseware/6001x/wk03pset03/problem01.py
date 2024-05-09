def isWordGuessed(secretWord, lettersGuessed):
    '''
    secretWord: string, the word the user is guessing
    lettersGuessed: list, what letters have been guessed so far
    returns: boolean, True if all the letters of secretWord are in lettersGuessed;
      False otherwise
    '''
    if (len(lettersGuessed) == 0):
        return False

    match = False
    check = 0
    seen = []
    for c in range(0, len(secretWord) - 1):
        if (lettersGuessed[c] in seen):
            continue
        if (secretWord[c] in lettersGuessed):
            check += 1
            seen.append(lettersGuessed[c])
        else:
            continue

    if (check == len(secretWord) - 1):
        match = True
    return match
