package elon

import "fmt"

// Drive drains a Car's battery by batteryDrain and increases its distance
// driven by speed
func (car *Car) Drive() {
	if car.battery-car.batteryDrain <= 0 {
		return
	}

	car.distance += car.speed
	car.battery -= car.batteryDrain
}

// DisplayDistance displays a Car's distance driven
func (car *Car) DisplayDistance() string {
	return fmt.Sprintf("Driven %d meters", car.distance)
}

// DisplayBattery displays the current battery info of a Car
func (car *Car) DisplayBattery() string {
	return fmt.Sprintf("Battery at %d%%", car.battery)
}

// CanFinish returns a bool describing whether or not a car can finish a track
func (car *Car) CanFinish(trackDistance int) bool {
	unitsUntilDrained := car.battery / car.batteryDrain
	driveableDistance := car.speed * unitsUntilDrained

	return driveableDistance >= trackDistance
}
