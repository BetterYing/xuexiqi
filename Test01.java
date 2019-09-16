public class Test01{
    public static void main(String[] args) {
        int num = 5;
        int ret = print(num);
        System.out.println(ret);
    }
    public static int print(int num){
        if(num == 1){
            return 1;
        } 
        return num * print(num - 1);
    }

}