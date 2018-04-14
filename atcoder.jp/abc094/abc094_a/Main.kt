fun main(args: Array<String>) {
  val (a, b, c) = readLine()!!.split(" ").map{ it.toInt() }
  if (a <= c && (a + b) >= c) println("YES") else println("NO")
}