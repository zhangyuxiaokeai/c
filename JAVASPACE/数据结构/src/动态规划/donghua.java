package 动态规划;

/**
 * @author shkstart
 * @create 2022-04-05 14:32
 */
public class donghua {
    public static void main(String[] args) {
        int[] val={1500,3000,2000,};//价值
        int[] w={1,4,3};//重量
        int m=4;//背包容量
        int n= val.length;//物品个数
        int[][] v=new int[n+1][m+1];
        //初始化二维数组第一行第一列
        for(int i=0;i< v[0].length;i++){
         v[0][i]=0;
        }
        for(int i=0;i<v.length;i++){
        v[i][0]=0;
        }



        //动态规划
        for(int i=1;i<v.length;i++){
            for(int j=1;j<v[0].length;j++){
                if(w[i-1]>j){
                    v[i][j]=v[i-1][j];
                }else {
                    v[i][j]=Math.max(v[i-1][j],val[i-1]+v[i-1][j-w[i-1]]);
                }
            }
        }


        for(int i=0;i<v.length;i++){
            for(int j=0;j<v[0].length;j++){
                System.out.print(v[i][j]+"       ");
            }
            System.out.println();
        }
    }



}
