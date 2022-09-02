package exam;

import java.util.Iterator;
import java.util.Scanner;
import java.util.TreeSet;

/**
 * @author shkstart
 * @create 2022-04-07 17:40
 */
public class 幸运数 {
    public static void main(String[] args) {
        int q=1;
        int w = 0;
        Scanner scanner = new Scanner(System.in);
        int m = scanner.nextInt();
        int n = scanner.nextInt();
        int[] nums = new int[n / 2];
        for (int i = 0; i < n / 2; i++) {
            nums[i] = i * 2 + 1;
        }
        for (int i = 0; i < nums.length; i++) {
            System.out.print(nums[i]);
        }
        while (q!= nums.length){
            int l = 1;
            int t = nums[l];
            for (int i = 0; i < nums.length; i++) {
                if ((i+1)+t% t == 0) {
                    nums[i+1] = 0;
                }
            }
            TreeSet<Integer> treeSet = new TreeSet();
            for (int i = 0; i < nums.length; i++) {
                treeSet.add(nums[i]);
            }
            Iterator iterator = treeSet.iterator();
            int[] nums1 = new int[treeSet.size()];
            int i = 0;
            while (iterator.hasNext()) {
                nums1[i] = (int) iterator.next();
                i++;
            }
            q++;
//            for(int i=0;i< nums1.length;i++){
//                System.out.print(nums1[i]);
//            }
        }
    }
    }
