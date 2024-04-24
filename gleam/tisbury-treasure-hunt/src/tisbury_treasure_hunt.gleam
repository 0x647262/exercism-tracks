import gleam/list

pub fn place_location_to_treasure_location(
  place_location: #(String, Int),
) -> #(Int, String) {
  #(place_location.1, place_location.0)
}

pub fn treasure_location_matches_place_location(
  place_location: #(String, Int),
  treasure_location: #(Int, String),
) -> Bool {
  place_location_to_treasure_location(place_location) == treasure_location
}

pub fn count_place_treasures(
  place: #(String, #(String, Int)),
  treasures: List(#(String, #(Int, String))),
) -> Int {
  treasures
  |> list.filter(fn(treasure) {
    treasure_location_matches_place_location(place.1, treasure.1)
  })
  |> list.length()
}

// Takes a treasure (such as #("Amethyst Octopus", #(1, "F"))) and a Place
// (such as #("Seaside Cottages", #("C", 1))), and returns True for the
// following combinations:
//
//  * The Brass Spyglass can be swapped for any other treasure at the Abandoned
//    Lighthouse.
//  * The Amethyst Octopus can be swapped for the Crystal Crab or the Glass
//    Starfish at the Stormy Breakwater.
//  * The Vintage Pirate Hat can be swapped for the Model Ship in Large Bottle
//    or the Antique Glass Fishnet Float at the Harbor Managers Office.
pub fn special_case_swap_possible(
  found_treasure: #(String, #(Int, String)),
  place: #(String, #(String, Int)),
  desired_treasure: #(String, #(Int, String)),
) -> Bool {
  case found_treasure, place, desired_treasure {
    #("Brass Spyglass", _), #("Abandoned Lighthouse", _), _ -> True
    #("Amethyst Octopus", _), #("Stormy Breakwater", _), #("Crystal Crab", _) ->
      True
    #("Amethyst Octopus", _), #("Stormy Breakwater", _), #("Glass Starfish", _) ->
      True
    #("Vintage Pirate Hat", _),
      #("Harbor Managers Office", _),
      #("Model Ship in Large Bottle", _) -> True
    #("Vintage Pirate Hat", _),
      #("Harbor Managers Office", _),
      #("Antique Glass Fishnet Float", _) -> True
    _, _, _ -> False
  }
}
