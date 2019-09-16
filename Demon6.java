// 输出一个整数的每一位
public class Demon6{
    public static void main(String[] args){
        int num = 2345;
        print(num);
    }
    public static void print(int num) {
        if(num > 9){
            print(num / 10);
        }
        System.out.println(num % 10);
    }
}