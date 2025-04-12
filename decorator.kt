open class Coffee {
    open fun cost(): Int = 5
}

open class CoffeeDecorator(private val coffee: Coffee) : Coffee() {
    override fun cost(): Int = coffee.cost()
}

class MilkDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int = super.cost() + 2
}

class SugarDecorator(coffee: Coffee) : CoffeeDecorator(coffee) {
    override fun cost(): Int = super.cost() + 1
}

fun main() {
    val coffee = Coffee()
    println(coffee.cost())  // 5

    val milk = MilkDecorator(coffee)
    println(milk.cost())    // 7

    val sugar = SugarDecorator(coffee)
    println(sugar.cost())   // 6

    val milkAndSugar = SugarDecorator(milk)
    println(milkAndSugar.cost())  // 8
}
