pub type Pizza {
  Margherita
  Caprese
  Formaggio
  ExtraSauce(Pizza)
  ExtraToppings(Pizza)
}

pub fn pizza_price(pizza: Pizza) -> Int {
  pizza_price_tco(pizza, 0)
}

fn pizza_price_tco(pizza: Pizza, accumulator: Int) -> Int {
  case pizza {
    Margherita -> accumulator + 7
    Caprese -> accumulator + 9
    Formaggio -> accumulator + 10
    ExtraSauce(pizza) -> accumulator + pizza_price_tco(pizza, 1)
    ExtraToppings(pizza) -> accumulator + pizza_price_tco(pizza, 2)
  }
}

pub fn order_price(order: List(Pizza)) -> Int {
  let fee = case order {
    [_] -> 3
    [_, _] -> 2
    _ -> 0
  }

  order_price_tco(order, fee)
}

fn order_price_tco(order: List(Pizza), accumulator) -> Int {
  case order {
    [first, ..rest] -> order_price_tco(rest, accumulator + pizza_price(first))
    [] -> accumulator
  }
}
