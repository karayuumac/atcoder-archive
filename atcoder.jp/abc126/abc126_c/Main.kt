import kotlin.math.ceil
import kotlin.math.log2
import kotlin.math.max
import kotlin.math.pow

/**
 * @author karayuu
 */
fun sigma(end: Int, func: (Int) -> Double): Double = (1..end).map(func).sum()

fun main() {
  val (n, k) = readLine()!!.split(" ").map { it.toDouble() }
  // 確率の合計は 1/n * Σ(p=1, n){(1/2)^log2(k / p)}なので
  println(1 / n * sigma(n.toInt()) { 0.5.pow(max(0, ceil(log2(k / it.toDouble())).toInt())) })
}