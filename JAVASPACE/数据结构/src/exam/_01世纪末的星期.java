package exam;

import java.util.Calendar;

/**
 * @author shkstart
 * @create 2022-04-07 17:29
 */
public class _01世纪末的星期 {
    public static void main(String[] args) {
        Calendar clander = Calendar.getInstance();
        for(int i=1999;i<10000;i+=100){
    clander.set(Calendar.YEAR,i);
    clander.set(Calendar.MONTH,11);
    clander.set(Calendar.DAY_OF_MONTH,31);
    if(clander.get(Calendar.DAY_OF_WEEK)==1){
        System.out.println(i);
        break;
    }

        }
    }
}
