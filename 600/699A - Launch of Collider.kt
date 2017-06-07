fun main(args: Array<String>) {
    var n = readLine()!!.toInt()
    var d = readLine()
    var p = readLine()!!.split(' ').map(String::toInt)
    var m = -2
    for (i in 0..(n - 2)) {
        if (d!!.get(i) == 'R' && d!!.get(i + 1) == 'L' && (m == -2 || p.get(i + 1) - p.get(i) < m)) {
            m = (p.get(i + 1) - p.get(i))
        }
    }
    println(m / 2)
}
