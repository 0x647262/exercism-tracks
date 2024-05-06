import gleam/iterator.{type Iterator}

pub type Item {
  Item(name: String, price: Int, quantity: Int)
}

pub fn item_names(items: Iterator(Item)) -> Iterator(String) {
  items
  |> iterator.map(fn(item: Item) { item.name })
}

pub fn cheap(items: Iterator(Item)) -> Iterator(Item) {
  items
  |> iterator.filter(fn(item: Item) { item.price < 30 })
}

pub fn out_of_stock(items: Iterator(Item)) -> Iterator(Item) {
  items
  |> iterator.filter(fn(item: Item) { item.quantity < 1 })
}

pub fn total_stock(items: Iterator(Item)) -> Int {
  items
  |> iterator.fold(0, fn(accumulator: Int, item: Item) {
    accumulator + item.quantity
  })
}
