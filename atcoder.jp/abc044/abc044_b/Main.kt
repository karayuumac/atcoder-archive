/**
 * @author karayuu
 */
fun main(args: Array<String>) {
    val string = readLine()!!
    val list = mutableListOf<Int>()
    ('a'..'z').forEach { character ->
        list.add(string.count { it == character })
    }

    if (list.isSame()) print("Yes") else print("No")
}

fun MutableList<Int>.isSame() : Boolean {
    for (j in this) {
        if (!j.isEven()) return false
    }
    return true
}

fun Int.isEven() : Boolean = this % 2 == 0