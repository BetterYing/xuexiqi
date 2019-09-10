// 计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值。

public class Test6{
    public static void main(String[] args){
        int i=1;
        double sum=0.0;
        int flag=1;
        while(i<=100){
            sum = sum + flag * 1.0 / i;
            flag = -flag;
            i++;
        }
        System.out.println(sum);
    }
}