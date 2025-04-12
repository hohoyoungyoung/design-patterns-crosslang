using System;

class InternalClass {
    public string Fetch() {
        return "get user info";
    }
}

class ExternalClass {
    public string Search() {
        return "get user info";
    }
}

// 어댑터 클래스
class Adapter {
    private ExternalClass external;

    public Adapter(ExternalClass ext) {
        external = ext;
    }

    public string Fetch() {
        return external.Search();
    }
}

class Program {
    static void Main() {
        ExternalClass ext = new ExternalClass();
        Adapter adapter = new Adapter(ext);

        Console.WriteLine(adapter.Fetch());  // get user info
    }
}
