fun main(args: Array<String>) {
    val n = readLine()!!
    //val sn = n.chunked(1).map { it.toInt() }.sum()
    var sn = 0
    (0 until n.length).forEach {
        sn += n[it].toString().toInt()
    }

    if (n.toInt() % sn == 0) {
        print("Yes")
    } else {
        print("No")
    }
}
