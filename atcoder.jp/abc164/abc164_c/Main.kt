/**
 * Created by karayuu on 2020/04/26
 */

fun main(args: Array<String>) {
  val n = readLine()!!.toInt()
  val s = mutableListOf<String>()
  (1..n).forEach {
    s.add(readLine()!!)
  }

  println(s.toSet().size)
}
