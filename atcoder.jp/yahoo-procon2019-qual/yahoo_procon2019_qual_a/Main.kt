fun main(args:Array<String>) {
  val(n, k) = readLine()!!.split(" ").map{it.toInt()}
  val a = if (n % 2 == 0) {
    n / 2
} else {
  n / 2 + 1
}
  if (k <= a) {
    println("YES")
  } else {
    println("NO")
  }
}