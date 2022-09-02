public class Test {
    public void sperk(){
        System.out.println("去你妈的");
    }

    public static void main(String[] args) {
            //*********Found********
//            int []f=new int[10];
//            f[0]=f[1]=1;
//            //*********Found********
//            for (int i=2;i<10;i++)
//                f[i]=f[i-1]+f[i-2];
//            //*********Found********
//            for (int i=0;i<f.length;i++)
//                //*********Found********
//                System.out.print( f[i]+"  ");
        int [][]aMatrix = new int[4][];
        int i = 0;
        int j = 0;
        int k = 4;

        for(i = 0; i < 4; i++){
            //*********Found**********
            aMatrix[i] = new int[k-i];

            //*********Found**********
            for (j = 0; j <aMatrix[i].length; j++) {
                aMatrix[i][j] = i+1;
                System.out.print(aMatrix[i][j] + " ");
            }
            //*********Found**********
            System.out.println();
        }
    }
}
