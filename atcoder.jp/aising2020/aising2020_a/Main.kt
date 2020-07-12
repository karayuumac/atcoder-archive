/**
 * @author karayuu
 */

fun main(args: Array<String>) {
  val (l, r, d) = readLine()!!.split(" ").map { it.toInt() }

  println((l..r).filter { it % d == 0 }.count())
}