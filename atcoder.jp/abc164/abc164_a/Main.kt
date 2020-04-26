fun main(args: Array<String>) {
  val (s, w) = readLine()!!.split(" ").map { it.toInt() }
  if (s <= w) {
    println("unsafe")
  } else {
    print("safe")
  }
}
