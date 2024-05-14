<?php

class PizzaPi
{
    public function calculateDoughRequirement(int $pizzas, int $persons): int
    {
        return $pizzas * (($persons * 20) + 200);
    }

    public function calculateSauceRequirement(int $pizzas, int $sauce_can_volume): int
    {
        return intdiv($pizzas * 125, $sauce_can_volume);
    }

    public function calculateCheeseCubeCoverage(int $dimension, float $thickness, int $diameter): int
    {
        return intval($dimension ** 3 / ($thickness * 3.14 * $diameter));
    }

    public function calculateLeftOverSlices(int $pizzas, int $friends): int
    {
        return ($pizzas * 8) % $friends;
    }
}
