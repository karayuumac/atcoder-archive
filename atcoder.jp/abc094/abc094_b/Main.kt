/**
 * Created by karayuu on 2018/04/14
 */

fun main(args: Array<String>) {
    val (a, b, c) = readLine()!!.split(" ").map { it.toInt() }

    val list = readLine()!!.split(" ").map { it.toInt() }

    val right = list.filter { it in c..a }.size
    val left = list.filter { it in 0..c }.size

    println(
            if (right <= left) right else left
    )
}