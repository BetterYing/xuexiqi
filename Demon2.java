// 求出0～999之间的所有“水仙花数”并输出。
// (“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。) 

public class Demon2{
    public static void main(String[] args){
        int i = 0;
        int a,b,c;
        int sum;
        for(i = 0;i < 1000;i++){
            a = i % 10;
            b = i / 10 % 10;
            c = i / 100;
            sum = a * a * a + b * b * b + c * c * c;
            if (sum == i){
                System.out.println(sum);
            }
        }
    }
}