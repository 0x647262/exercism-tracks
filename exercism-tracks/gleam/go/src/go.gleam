import gleam/result

pub type Player {
  Black
  White
}

pub type Game {
  Game(
    white_captured_stones: Int,
    black_captured_stones: Int,
    player: Player,
    error: String,
  )
}

pub fn apply_rules(
  game: Game,
  rule1: fn(Game) -> Result(Game, String),
  rule2: fn(Game) -> Game,
  rule3: fn(Game) -> Result(Game, String),
  rule4: fn(Game) -> Result(Game, String),
) -> Game {
  let turn =
    game
    |> rule1
    // Apply rule2 to an Ok result or pass the Error
    |> result.map(rule2)
    // Chain remaining rules
    |> result.try(rule3)
    |> result.try(rule4)

  case turn {
    // Advance game state
    Ok(next_turn) ->
      Game(
        ..next_turn,
        player: case game.player {
          Black -> White
          White -> Black
        },
      )
    // Stall game state
    Error(error) -> Game(..game, error: error)
  }
}
