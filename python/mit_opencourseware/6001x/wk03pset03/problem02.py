def getGuessedWord(secretWord, lettersGuessed):
    '''
    secretWord: string, the word the user is guessing
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters and underscores that represents
      what letters in secretWord have been guessed so far.
    '''
    guess = ""

    if (len(lettersGuessed) == 0):
        for c in range(0, len(secretWord)):
            guess += '_'
        return guess

    seen = []
    for c in range(0, len(secretWord) - 1):
        if (lettersGuessed[c] in seen):
            continue
        if (secretWord[c] in lettersGuessed):
            seen.append(lettersGuessed[c])
        else:
            continue

    for c in range(0, len(secretWord)):
        if (secretWord[c] in lettersGuessed):
            guess += secretWord[c]
        else:
            guess += '_'

    return guess
