// 1. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。 

public class Test1{
    public static void main(String[] args){
        int i = 0;
        int count = 0;
        for(i = 0;i <= 100;i++){
            if(i / 9 == 0){
                count++;
            } else if(i % 9 == 0){
                count++;
            }
        }
        System.out.println(count);
    }
}