/**
 * @author karayuu
 */
fun main(args: Array<String>) {
    var (a, b, n) = readLine()!!.split(" ").map { it.toInt() }
    val x = readLine()!!

    (0 until n).forEach {
        when (x[it]) {
            'S' -> {
                if (a != 0) {
                    a--
                }
            }

            'C' -> {
                if (b != 0) {
                    b--
                }
            }

            'E' -> {
                if (a == 0 && b == 0) {

                } else {
                    if (a >= b) {
                        a--
                    } else {
                        b--
                    }
                }
            }
        }
    }

    println(a)
    println(b)
}