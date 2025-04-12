using System;

abstract class Animal {
    public abstract string Speak();
}

class Dog : Animal {
    public override string Speak() {
        return "Woof!";
    }
}

class Cat : Animal {
    public override string Speak() {
        return "Meow!";
    }
}

class AnimalFactory {
    public static Animal CreateAnimal(string type) {
        if (type == "dog") return new Dog();
        else if (type == "cat") return new Cat();
        else return null;
    }
}

class Program {
    static void Main(string[] args) {
        Animal animal = AnimalFactory.CreateAnimal("cat");
        if (animal != null) Console.WriteLine(animal.Speak());
    }
}
