using System;

class RemoteControlCar
{
    private int _distanceTravelled = 0;
    private int _chargeRemaining = 100;

    public static RemoteControlCar Buy() => new RemoteControlCar();

    public string DistanceDisplay() => $"Driven {_distanceTravelled} meters";

    public string BatteryDisplay()
    {
        if (_chargeRemaining == 0) {
        return "Battery empty";
        }

        return $"Battery at {_chargeRemaining}%";
    }

    public void Drive()
    {
        if (_chargeRemaining == 0) {
            return;
        }

        _distanceTravelled = _distanceTravelled + 20;
        _chargeRemaining = _chargeRemaining - 1;
    }
}
