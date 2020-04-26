fun main(args: Array<String>) {
  var (a, b, c, d) = readLine()!!.split(" ").map { it.toInt() }

  while (true) {
    //高橋
    c -= b
    if (c <= 0) {
      println("Yes")
      return
    }

    // 青木
    a -= d
    if (a <= 0) {
      println("No")
      return
    }
  }
}
