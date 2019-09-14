// 写一个函数返回参数二进制中 1 的个数 
// 比如： 15 0000 1111 4 个 1

public class Demon4{
    public static void main(String[] args){
        int i = 15;
        int count = 0;
        while (i != 0){
        // for (i  = 0;i <= 15;i++){
            count++;
            i &= (i - 1);
        }
        System.out.println("二进制中1的个数是 " + count);
        
    }
}