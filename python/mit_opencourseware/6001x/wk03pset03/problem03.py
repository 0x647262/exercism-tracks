def getAvailableLetters(lettersGuessed):
    '''
    lettersGuessed: list, what letters have been guessed so far
    returns: string, comprised of letters that represents what letters have not
    yet been guessed.
    '''
    alphabet = "abcdefghijklmnopqrstuvwxyz"
    if (len(lettersGuessed) == 0):
        return alphabet

    temp = ""
    remainingLetters = alphabet
    for letter in lettersGuessed:
        if (letter in alphabet):
            temp = remainingLetters.replace(letter, "")
            remainingLetters = temp

    return remainingLetters
