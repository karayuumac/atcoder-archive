/**
 * @author karayuu
 */
fun main(args: Array<String>) {
    val (a, b) = (1..2).map { readLine()!!.toInt() }

    print(b * (a / b).floor())
}

fun Int.floor(): Int = Math.floor(this.toDouble()).toInt()