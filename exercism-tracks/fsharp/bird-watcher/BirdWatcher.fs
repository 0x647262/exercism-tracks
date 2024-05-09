module BirdWatcher

/// Yesterdays index in a weekly array
let idxYesterday: int = 5

/// Todays index in a weekly array
let idxToday: int = 6

/// Returns last week's bird count log
let lastWeek: int[] = [| 0; 2; 5; 3; 7; 8; 4 |]

/// Returns yesterday's bird count
let yesterday (counts: int[]) : int = counts[idxYesterday]

/// Returns a sum of bird counts passed an array of bird counts
let total (counts: int[]) : int = counts |> Array.sum

/// Returns true if there was a day without birds in the passed array, else
/// false
let dayWithoutBirds (counts: int[]) : bool = counts |> Array.contains 0

/// Returns an array of bird counts, with today's count incremented by 1
let incrementTodaysCount (counts: int[]) : int[] =
    counts[idxToday] <- counts[idxToday] + 1
    counts

/// Returns true if a week's counts are unusual, else false
let unusualWeek (counts: int[]) : bool =
    match counts with
    | [| _; 0; _; 0; _; 0; _ |] -> true
    | [| _; 10; _; 10; _; 10; _ |] -> true
    | [| 5; _; 5; _; 5; _; 5 |] -> true
    | _ -> false
