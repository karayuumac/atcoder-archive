/**
 * @author karayuu
 */
fun main() {
  val s = readLine()!!
  val a = s.slice(0..1).toInt() in 1..12
  val b = s.slice(2..3).toInt() in 1..12
  if (a && b) {
    println("AMBIGUOUS")
  } else if (a && !b) {
    println("MMYY")
  } else if (!a && b) {
    println("YYMM")
  } else {
    println("NA")
  }
}