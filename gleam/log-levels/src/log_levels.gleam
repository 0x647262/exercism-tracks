import gleam/string

pub fn message(log_line: String) -> String {
  case log_line {
    "[INFO]: " <> rest | "[WARNING]: " <> rest | "[ERROR]: " <> rest ->
      string.trim(rest)
    _ -> log_line
  }
}

pub fn log_level(log_line: String) -> String {
  case log_line {
    "[INFO]" <> _ -> "info"
    "[WARNING]" <> _ -> "warning"
    "[ERROR]" <> _ -> "error"
    _ -> "unknown"
  }
}

pub fn reformat(log_line: String) -> String {
  let msg = message(log_line)
  let lvl = "(" <> log_level(log_line) <> ")"
  msg <> " " <> lvl
}
