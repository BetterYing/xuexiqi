// 获取一个数二进制序列中所有的偶数位和奇数位， 
// 分别输出二进制序列。
public  class Demon5{
    public static void main(String[] args){
        int num = 128;
        int i = 0;
        int tmp ;
        System.out.println("奇数序列为 ");
        for (i = 31;i >= 0;i = i - 2){
            tmp = (num >> i) & 1;
            System.out.printf("%d" ,tmp);
            
        }
        System.out.printf("\n");

        System.out.println("偶数序列为 ");
        for (i = 30;i >= 0;i = i - 2){
            tmp = (num >> i) & 1;
            System.out.printf("%d",tmp);
        }
    }
}