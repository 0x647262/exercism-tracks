import gleam/list
import gleam/result
import gleam/set.{type Set}

pub fn new_collection(card: String) -> Set(String) {
  set.from_list([card])
}

pub fn add_card(collection: Set(String), card: String) -> #(Bool, Set(String)) {
  #(set.contains(collection, card), set.insert(collection, card))
}

pub fn trade_card(
  my_card: String,
  their_card: String,
  collection: Set(String),
) -> #(Bool, Set(String)) {
  case
    set.contains(collection, my_card)
    && !set.contains(collection, their_card)
  {
    True -> #(
      True,
      collection
        |> set.delete(my_card)
        |> set.insert(their_card),
    )
    False -> #(
      False,
      collection
        |> set.delete(my_card)
        |> set.insert(their_card),
    )
  }
}

pub fn boring_cards(collections: List(Set(String))) -> List(String) {
  collections
  |> list.reduce(set.intersection)
  |> result.unwrap(set.new())
  |> set.to_list()
}

pub fn total_cards(collections: List(Set(String))) -> Int {
  collections
  |> list.fold(set.new(), set.union)
  |> set.size()
}

pub fn shiny_cards(collection: Set(String)) -> Set(String) {
  collection
  |> set.to_list()
  |> list.filter(fn(card) -> Bool {
    case card {
      "Shiny" <> _ -> True
      _ -> False
    }
  })
  |> set.from_list()
}
