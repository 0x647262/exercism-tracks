using System;
using System.Diagnostics.CodeAnalysis;
using System.Linq;

class BirdCount
{
    private int[] birdsPerDay;

    public BirdCount(int[] birdsPerDay)
    {
        this.birdsPerDay = birdsPerDay;
    }

    public static int[] LastWeek() => [0, 2, 5, 3, 7, 8, 4];

    public int Today() => this.birdsPerDay[this.birdsPerDay.Count() - 1];

    public void IncrementTodaysCount() => this.birdsPerDay[this.birdsPerDay.Count() - 1] += 1;

    public bool HasDayWithoutBirds() => this.birdsPerDay.Contains(0);

    public int CountForFirstDays(int numberOfDays)
    {
        int count = 0;
        for (int i = 0; i < numberOfDays; i += 1)
        {
            count += this.birdsPerDay[i];
        }

        return count;
    }

    public int BusyDays() => this.birdsPerDay.Count(count => count >= 5);
}
