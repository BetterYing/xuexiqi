public class Main{
    public static void main(String[] args){
        int a=23;
        int b=58;
        int c=46;
        if(a>b){
            if(b>c){
            System.out.println(a);      
            } else if(a>c){
            System.out.println(a);
            } else{
            System.out.println(c);
            }
        }
        if(a<b){
            if(b<c){
            System.out.println(c);
            } else if(a<c){
            System.out.println(b);
            } else {
            System.out.println(b);
            }


        }

    }
}