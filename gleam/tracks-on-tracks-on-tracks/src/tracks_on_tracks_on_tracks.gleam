import gleam/list

/// Returns an empty list
pub fn new_list() -> List(String) {
  []
}

/// Returns a new list containing: Gleam, Go, and TypeScript
pub fn existing_list() -> List(String) {
  ["Gleam", "Go", "TypeScript"]
}

/// Prepends a new language to a list of languages
pub fn add_language(languages: List(String), language: String) -> List(String) {
  [language, ..languages]
}

/// Counts the length of a list of languages
pub fn count_languages(languages: List(String)) -> Int {
  list.length(languages)
}

/// Reverses a list of languages
pub fn reverse_list(languages: List(String)) -> List(String) {
  list.reverse(languages)
}

/// Determines whether or not a list of languages is exciting or not.
/// 
/// Exciting lists follow the following rules:
/// 
///   * The list starts with Gleam
///   * Gleam is the second item on the list
///   * Gleam is the second item on the list followed by one other language
///
pub fn exciting_list(languages: List(String)) -> Bool {
  case languages {
    ["Gleam", ..] | [_, "Gleam"] | [_, "Gleam", _] -> True
    _ -> False
  }
}
