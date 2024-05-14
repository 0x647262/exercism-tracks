package blackjack

var cards = map[string]int{
	"ace":   11,
	"two":   2,
	"three": 3,
	"four":  4,
	"five":  5,
	"six":   6,
	"seven": 7,
	"eight": 8,
	"nine":  9,
	"ten":   10,
	"jack":  10,
	"queen": 10,
	"king":  10,
}

// ParseCard returns the integer value of a card following blackjack ruleset.
func ParseCard(card string) int {
	value, ok := cards[card]
	if !ok {
		return 0
	}

	return value
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
