// Package weather attempts to forecast the weather in various cities across Goblinocus.
package weather

// CurrentCondition current weather condition.
var CurrentCondition string

// CurrentLocation current location in Goblinocus.
var CurrentLocation string

// Forecast returns a formatted forcast for a location passed the city and condition.
func Forecast(city, condition string) string {
	CurrentLocation, CurrentCondition = city, condition
	return CurrentLocation + " - current weather condition: " + CurrentCondition
}
