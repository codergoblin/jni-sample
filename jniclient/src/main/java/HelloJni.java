
public class HelloJni {

    static {
        System.loadLibrary("hello-jni");
    }

    public native int hello(int n);

    public static void main(String[] args) {
        int hello = new HelloJni().hello(3);
        System.out.println("And hello from java");
        System.out.println("Result was " + hello);
    }

}
