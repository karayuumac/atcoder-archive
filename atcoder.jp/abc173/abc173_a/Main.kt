import kotlin.math.ceil

/**
 * @author karayuu
 */
fun main(args: Array<String>) {
  val n = readLine()!!.toDouble()
  // [n / 1000] * 1000 - n
  println((ceil(n / 1000) * 1000 - n).toInt())
}