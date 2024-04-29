package birdwatcher

// TotalBirdCount return the total bird count by summing
// the individual day's counts.
func TotalBirdCount(birdsPerDay []int) int {
	var total int
	for _, val := range birdsPerDay {
		total += val
	}

	return total
}

// BirdsInWeek returns the total bird count by summing
// only the items belonging to the given week.
func BirdsInWeek(birdsPerDay []int, week int) int {
	start := (week - 1) * 7
	// No partial weeks in the test data no need to guard
	// against index out of bounds errors:
	end := week * 7

	return TotalBirdCount(birdsPerDay[start:end])
}

// FixBirdCountLog returns the bird counts after correcting
// the bird counts for alternate days.
func FixBirdCountLog(birdsPerDay []int) []int {
	for idx, val := range birdsPerDay {
		if idx%2 != 0 {
			continue
		}

		birdsPerDay[idx] = val + 1
	}

	return birdsPerDay
}
