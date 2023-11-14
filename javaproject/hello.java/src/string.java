public class string {
    public static void main(String[] args) {
        String message = "hello, world" + "!!";
        message.endsWith("!!");
        System.out.println(message);
        System.out.println(message.endsWith("!!"));
        System.out.println(message.startsWith("!!"));
        System.out.println(message.length());
        System.out.println(message.indexOf("o"));
        System.out.println(message.replace("!", "*"));
        System.out.println(message.toLowerCase());
    }
}
