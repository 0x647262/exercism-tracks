import gleam/list
import gleam/result

pub fn today(days: List(Int)) -> Int {
  days
  |> list.first()
  |> result.unwrap(0)
}

pub fn increment_day_count(days: List(Int)) -> List(Int) {
  let rest =
    days
    |> list.rest()
    |> result.unwrap([])

  [today(days) + 1, ..rest]
}

pub fn has_day_without_birds(days: List(Int)) -> Bool {
  list.contains(days, 0)
}

pub fn total(days: List(Int)) -> Int {
  days
  |> list.reduce(fn(acc, count) { acc + count })
  |> result.unwrap(0)
}

pub fn busy_days(days: List(Int)) -> Int {
  days
  |> list.filter(fn(count) { count >= 5 })
  |> list.length()
}
