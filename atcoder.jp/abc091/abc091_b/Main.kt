/**
 * @author karayuu
 */

fun main(args: Array<String>) {
    val blue = readLine()!!.toInt()
    val blueList = (1..blue).map { readLine()!! }

    val red = readLine()!!.toInt()
    val redList = (1..red).map { readLine()!! }

    val check = blueList.distinct().toMutableList() + redList.distinct()
    val yen = check.map { check ->
        blueList.filter { it == check }.count() - redList.filter { it == check }.count()
    }.max()!!

    println(
            if (yen <= 0) 0 else yen
    )
}