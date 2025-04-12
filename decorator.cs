using System;

class Coffee {
    public virtual int Cost() => 5;
}

class CoffeeDecorator : Coffee {
    protected Coffee coffee;
    public CoffeeDecorator(Coffee coffee) {
        this.coffee = coffee;
    }

    public override int Cost() => coffee.Cost();
}

class MilkDecorator : CoffeeDecorator {
    public MilkDecorator(Coffee coffee) : base(coffee) { }

    public override int Cost() => base.Cost() + 2;
}

class SugarDecorator : CoffeeDecorator {
    public SugarDecorator(Coffee coffee) : base(coffee) { }

    public override int Cost() => base.Cost() + 1;
}

class Program {
    static void Main() {
        Coffee coffee = new Coffee();
        Console.WriteLine(coffee.Cost());  // 5

        Coffee milk = new MilkDecorator(coffee);
        Console.WriteLine(milk.Cost());    // 7

        Coffee sugar = new SugarDecorator(coffee);
        Console.WriteLine(sugar.Cost());   // 6

        Coffee milkAndSugar = new SugarDecorator(milk);
        Console.WriteLine(milkAndSugar.Cost());  // 8
    }
}
