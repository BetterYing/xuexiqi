public class Test03{
    public static void main(String[] args) {
        int num = 1234;
        int ret = print(num);
        System.out.println(ret);
    }
    public static int print(int num){
        if(num > 9){
           return print (num / 10) + num % 10;
        }
        return num;
    }

}