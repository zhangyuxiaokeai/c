package 汉诺塔;

/**
 *
 * @author shkstart
 * @create 2022-04-05 11:21
 */
public class hannuota {
    public static void main(String[] args) {
    hannuota(10,'a','b','c');
    }

    public static void hannuota(int num, char a, char b, char c){
        if(num==1){
            System.out.println(a+"->"+c);
        }else{
            hannuota(num-1,a,c,b);
            System.out.println(a+"->"+c);
            hannuota(num-1,b,a,c);
            System.out.println(b+"->"+c);
        }
    }

}
