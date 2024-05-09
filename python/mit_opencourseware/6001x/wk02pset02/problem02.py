def payoffWithinYear(balance, annualInterestRate):
    """
    The following variables contain values as described below:
        balance - the outstanding balance on the credit card
        annualInterestRate - annual interest rate as a decimal
        valueLow - Balance without interest
        valueHigh - Balance with full interest
        reallyGoodGuess - Average of the previous two variables
    """

    monthlyInterestRate = annualInterestRate / 12.0
    valueLow = balance / 12.0
    valueHigh = (balance * (1 + annualInterestRate)) / 12.0
    reallyGoodGuess = round((valueLow + valueHigh) / 2, -1)

    remainingBalance = balance
    for month in range(1, 13):
        remainingBalance -= reallyGoodGuess
        remainingBalance += remainingBalance * monthlyInterestRate

    if remainingBalance > 0:
        # I guess it wan't _that_ good... :'(
        reallyGoodGuess += 10

    print(reallyGoodGuess)
