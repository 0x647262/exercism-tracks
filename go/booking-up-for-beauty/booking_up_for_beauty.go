// Package booking Mon Jan 2 15:04:05 -0700 MST 2006
package booking

import (
	"fmt"
	"time"
)

func parseTime(layout, date string) time.Time {
	var t, e = time.Parse(layout, date)
	if e != nil {
		panic("Failed to parse date!")
	}

	return t
}

// Schedule returns a time.Time from a string containing a date.
func Schedule(date string) time.Time {
	var layout = "1/2/2006 15:04:05"
	var t = parseTime(layout, date)

	return t.UTC()
}

// HasPassed returns whether a date has passed.
func HasPassed(date string) bool {
	var layout = "January 2, 2006 15:04:05"
	var t = parseTime(layout, date)

	return time.Now().UTC().After(t)
}

// IsAfternoonAppointment returns whether a time is in the afternoon.
func IsAfternoonAppointment(date string) bool {
	var layout = "Monday, January 2, 2006 15:04:05"
	var t = parseTime(layout, date)

	return 12 <= t.Hour() && t.Hour() < 18
}

// Description returns a formatted string of the appointment time.
func Description(date string) string {
	var inLayout = "1/2/2006 15:04:05"
	var t = parseTime(inLayout, date)
	var outLayout = "Monday, January 2, 2006, at 15:04."

	return "You have an appointment on " + t.Format(outLayout)
}

// AnniversaryDate returns a Time with this year's anniversary.
func AnniversaryDate() time.Time {
	var year = time.Now().Year()
	var inLayout = "2006-01-02"

	return parseTime(inLayout, fmt.Sprintf("%d-09-15", year))
}
