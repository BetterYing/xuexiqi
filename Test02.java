public class Test02{
    public static void main(String[] args) {
        int num = 10;
        int ret = print(num);
        System.out.println(ret);
    }
    public static int print(int num){
        if(num == 1){
            return 1;
        }
        return num + print(num - 1);
    }
}