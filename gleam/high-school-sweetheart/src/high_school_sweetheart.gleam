import gleam/list
import gleam/result
import gleam/string

pub fn first_letter(name: String) -> String {
  name
  |> string.trim()
  |> string.first()
  |> result.unwrap("")
}

pub fn initial(name: String) -> String {
  name
  |> first_letter()
  |> string.uppercase()
  |> string.append(".")
}

pub fn initials(full_name: String) -> String {
  let split = string.split(full_name, " ")
  split
  |> list.map(fn(name) { initial(name) })
  |> string.join(" ")
}

pub fn pair(full_name1: String, full_name2: String) -> String {
  "
     ******       ******
   **      **   **      **
 **         ** **         **
**            *            **
**                         **
**     " <> initials(full_name1) <> "  +  " <> initials(full_name2) <> "     **
 **                       **
   **                   **
     **               **
       **           **
         **       **
           **   **
             ***
              *
"
}
