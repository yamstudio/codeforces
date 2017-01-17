var s = readline()
var k = Number(readline())
var w = readline().split(' ').map(Number)
var l = s.length
var c = Math.max.apply(null, w) * k * (2 * l + k + 1) / 2
for (var i = 1; i <= l; ++i) {
    c += i * w[s.charCodeAt(i - 1) - 'a'.charCodeAt()]
}
print(c)
