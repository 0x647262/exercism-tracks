def exactPayment(balance, annualInterestRate):
    """
    The following variables contain values as described below:
        balance - the outstanding balance on the credit card
        annualInterestRate - annual interest rate as a decimal
        valueLow - Balance without interest
        valueHigh - Balance with full interest
        reallyGoodGuess - Average of the previous two variables
    """

    monthlyInterestRate = annualInterestRate / 12.0
    boundLow = balance / 12.0
    boundHigh = (balance * (1 + annualInterestRate)) / 12.0
    reallyGoodGuess = round((boundLow + boundHigh) / 2, 2)

    remainingBalance = balance
    while round(boundLow, 1) != round(boundHigh, 1):
        remainingBalance = balance
        for _ in range(1, 13):
            remainingBalance -= reallyGoodGuess
            remainingBalance += remainingBalance * monthlyInterestRate
        if round(remainingBalance, 1) > 0:
            boundLow = reallyGoodGuess
            reallyGoodGuess = round((boundLow + boundHigh) / 2, 2)
        if round(remainingBalance, 1) < 0:
            boundHigh = reallyGoodGuess
            reallyGoodGuess = round((boundLow + boundHigh) / 2, 2)

    print(reallyGoodGuess)
