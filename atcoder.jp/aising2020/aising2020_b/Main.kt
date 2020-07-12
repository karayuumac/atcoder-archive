fun Int.isOdd() : Boolean = this % 2 != 0
fun Int.isEven() : Boolean = this % 2 == 0

/**
 * @author karayuu
 */
fun main(args: Array<String>) {
  val n = readLine()!!.toInt()
  val a = readLine()!!.split(" ").map { it.toInt() }

  println(a.filterIndexed { index, i -> index.isEven() && i.isOdd() }.count())
}