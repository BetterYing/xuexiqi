// 输出 1000 - 2000 之间所有的闰年

public class Test3{
    public static void main(String[] args){
        int year=0;
        for(year = 1000;year <= 2000;year++){
            // if(year % 400 == 0 || year % 100 != 0 && year % 4 == 0){
            // System.out.println(year);
            // }
            if(year % 100 == 0){
                if(year % 400 == 0){
                    System.out.println(year);
                }
            } else {
                if(year % 4 ==0){
                    System.out.println(year);
                }
            }

        }

    }
}