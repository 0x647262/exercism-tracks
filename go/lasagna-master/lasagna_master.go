// Package lasagna ...
package lasagna

// PreparationTime ...
func PreparationTime(layers []string, time int) int {
	if time == 0 {
		time = 2
	}
	return len(layers) * time
}

// Quantities ...
func Quantities(layers []string) (int, float64) {
	var noodles int
	var sauce float64
	for _, val := range layers {
		switch val {
		case "noodles":
			noodles += 50
			break
		case "sauce":
			sauce += 0.2
			break
		}
	}

	return noodles, sauce
}

// AddSecretIngredient ...
func AddSecretIngredient(theirLayers, myLayers []string) []string {
	var secretIngredient = theirLayers[len(theirLayers)-1]
	return append(myLayers[:len(myLayers)-1], secretIngredient)
}

// ScaleRecipe ...
func ScaleRecipe(quantities []float64, scalar int) []float64 {
	var scaled = make([]float64, len(quantities))
	for idx, val := range quantities {
		scaled[idx] = (val / 2.0) * float64(scalar)
	}

	return scaled
}
