package blackjack

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	switch card {
	case "ace":
		return 11
	case "two":
		return 2
	case "three":
		return 3
	case "four":
		return 4
	case "five":
		return 5
	case "six":
		return 6
	case "seven":
		return 7
	case "eight":
		return 8
	case "nine":
		return 9
	case "ten", "jack", "queen", "king":
		return 10
	default:
		return 0
	}
}

// FirstTurn returns the decision for the first turn, given two cards of the
// player and one card of the dealer.
func FirstTurn(card1, card2, dealerCard string) string {
	var hand int = ParseCard(card1) + ParseCard(card2)
	var dealersCard int = ParseCard(dealerCard)

	switch {
	case hand == 22:
		return "P"
	case hand == 21:
		if dealersCard >= 10 {
			return "S"
		}
		return "W"
	case 17 <= hand && hand <= 20:
		return "S"
	case 12 <= hand && hand <= 16:
		if dealersCard >= 7 {
			return "H"
		}
		return "S"
	default:
		return "H"
	}
}
