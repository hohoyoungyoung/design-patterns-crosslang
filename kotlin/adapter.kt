class InternalClass {
    fun fetch(): String = "get user info"
}

class ExternalClass {
    fun search(): String = "get user info"
}

// 어댑터 클래스
class Adapter(private val external: ExternalClass) {
    fun fetch(): String = external.search()
}

fun main() {
    val external = ExternalClass()
    val adapter = Adapter(external)

    println(adapter.fetch()) // get user info
}
