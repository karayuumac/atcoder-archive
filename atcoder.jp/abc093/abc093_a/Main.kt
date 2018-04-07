fun main(args: Array<String>) {
    val input = readLine()!!
    
    val check = mutableListOf<String>()
    check.add("abc")
    check.add("acb")
    check.add("bca")
    check.add("bac")
    check.add("cab")
    check.add("cba")
    
    println(if (check.contains(input)) "Yes" else "No")
}