// 求两个正整数的最大公约数
public class Test5{
    public static void main(String[] args){
        int a = 12;
        int b = 8;
        int smaller = a < b ? a : b;
	    int i;
	    int max = 0;
        for (i = 1; i <= smaller; i++) {
            if (a % i == 0 && b % i == 0) {
			max = i;
		    }
        } 
        if (max == 1) {
            System.out.println("两数互质");
	    } else{
         System.out.println(a +"和" + b +"的最大公约数为"+ max);     
        }   
    }
}