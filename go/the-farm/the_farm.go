package thefarm

import (
	"errors"
	"fmt"
)

func DivideFood(fc FodderCalculator, cows int) (float64, error) {
	fodderAmount, e := fc.FodderAmount(cows)
	if e != nil {
		return 0.0, e
	}
	fatteningFactor, e := fc.FatteningFactor()
	if e != nil {
		return 0.0, e
	}

	return (fodderAmount * fatteningFactor) / float64(cows), nil
}

func ValidateInputAndDivideFood(fc FodderCalculator, cows int) (float64, error) {
	if cows < 1 {
		return 0, errors.New("invalid number of cows")
	}

	return DivideFood(fc, cows)
}

type InvalidNumberOfCowsError struct {
	number  int
	message string
}

func (e *InvalidNumberOfCowsError) Error() string {
	return fmt.Sprintf("%d cows are invalid: %s", e.number, e.message)
}

func ValidateNumberOfCows(cows int) error {
	if cows == 0 {
		return &InvalidNumberOfCowsError{
			cows,
			"no cows don't need food",
		}
	}
	if cows < 0 {
		return &InvalidNumberOfCowsError{
			cows,
			"there are no negative cows",
		}
	}

	return nil
}
