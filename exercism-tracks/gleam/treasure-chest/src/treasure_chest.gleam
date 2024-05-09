// Please define the TreasureChest generic custom type
pub type TreasureChest(treasure) {
  TreasureChest(password: String, treasure: treasure)
}

// Please define the UnlockResult generic custom type
pub type UnlockResult(treasure) {
  Unlocked(treasure: treasure)
  WrongPassword
}

pub fn get_treasure(
  chest: TreasureChest(treasure),
  password: String,
) -> UnlockResult(treasure) {
  case password {
    _ if password == chest.password -> Unlocked(chest.treasure)
    _ -> WrongPassword
  }
}
