/**
 * @author karayuu
 */
fun main(args: Array<String>) {
  val x = readLine()!!.toInt()
  val ans = if (x >= 30) {
    "Yes"
  } else {
    "No"
  }
  println(ans)
}