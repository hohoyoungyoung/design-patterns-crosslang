using System;

class CPU {
    public string Process() {
        return "CPU 처리 중";
    }
}

class Memory {
    public string Load() {
        return "메모리 로딩 중";
    }
}

class SSD {
    public string Read() {
        return "SSD 드라이브 읽는 중";
    }
}

// 파사드 클래스
class Computer {
    private CPU cpu = new CPU();
    private Memory memory = new Memory();
    private SSD ssd = new SSD();

    public void Boot() {
        Console.WriteLine(ssd.Read());
        Console.WriteLine(memory.Load());
        Console.WriteLine(cpu.Process());
    }
}

class Program {
    static void Main() {
        Computer c = new Computer();
        c.Boot();
    }
}
