use proconio::input;

fn main() {
  input! {
    s: String,
  }
  println!("{}", s.matches("1").collect::<String>().len())
}