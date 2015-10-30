public class HelloWorld {
    public native void sayHello();
    public native void sayHelloNumber(int a);
    static {
        System.loadLibrary("HelloWorld");
    }

    public static void main(String args[]) {
        HelloWorld helloWorld = new HelloWorld();
        helloWorld.sayHello();
        helloWorld.sayHelloNumber(123);
    }
}

