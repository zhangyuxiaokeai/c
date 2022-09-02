package MySelf;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;

/**
 * @author shkstart
 * @create 2022-03-29 0:05
 */
public class graph {
   private ArrayList<String> dingdian;
   private int[][] edges;
   private int numOfEdges;

   //图的优先深度搜索
    private boolean[] isVisited;

    public static void main(String[] args) {
        //测试一把图是否被创建
        int n=5;//节点的个数
        String Vertex[]={"A","B","C","D","E"};
        //创建一个图对象
        graph graph = new graph(n);
        for(int i=0;i<5;i++){
            graph.insertdingdian(Vertex[i]);
        }
        graph.insertEdge(0,1,1);
        graph.insertEdge(0,2,1);
        graph.insertEdge(1,2,1);
        graph.insertEdge(1,3,1);
        graph.insertEdge(1,4,1);
            graph.showGrapf();

        System.out.println("&&&&&&&&&&&&&&&&&");
        graph.dfs1();
    }


    public graph(int n) {
         dingdian = new ArrayList<String>(n);
         edges = new int[n][n];
        numOfEdges=0;
         isVisited = new boolean[n];
    }

    //得到第一个临近顶点的下标
    public int getFirstNeighbor(int index){
        for(int j=0; j<dingdian.size();j++){
            if(edges[index][j]>0){
                return j;
            }
        }
    return -1;
    }
    //根据前一个邻接节点的下标来获取下一个邻接节点
    public int getNexNeighbor(int v1,int v2){
        for(int j=v2+1;j<dingdian.size();j++){
            if(edges[v1][j]>0){
                return j;
            }
        }
        return -1;
    }


    //深度优先遍历算法
    public void dfs1(boolean[] isVisited,int i){
        //首先访问第一个节点
        System.out.println(getValueByIndex(i));
        isVisited[i]=true;
        //查找下一个邻接节点
        int w=getFirstNeighbor(i);
        while(w!=-1){
            //当第一个邻接节点是通路
            if(!isVisited[w]){
                dfs1(isVisited,w);
            }
            w=getNexNeighbor(i,w);
        }
    }
        //对dfs进行重载，遍历我们所有的节点，并进行dfs

   public void dfs1(){
        for(int i=0;i<getNumVertex();i++){
            if(!isVisited[i]){
                dfs1(isVisited,i);
            }
        }
   }


//图的广度优先搜索
    public void bfs1(boolean[] isVisited, int i){
        int u;
        int w;
        LinkedList queue = new LinkedList();
        System.out.println(getValueByIndex(i)+"->");
        isVisited[i]=true;
        queue.addLast(i);
        while(!queue.isEmpty()){
            //
            u=(Integer)queue.removeFirst();
            w=getFirstNeighbor(u);
            while(getFirstNeighbor(u)!=-1) {
                if(!isVisited[w]){
                    System.out.println(getValueByIndex(w)+"->");
                    isVisited[w]=true;
                    queue.addLast(w);
                }
               w=getNexNeighbor(u,w);
            }
        }
    }




    //显示对应的图

    public void showGrapf(){
        for (int lingk[]:edges){
            System.out.println(Arrays.toString(lingk));
        }

    }
    //得到边的个数
    public int getNumVertex(){
        return numOfEdges;
    }
    //得到顶点个数
    public int getdingdian(){
        return dingdian.size();
    }
    //返回节点i对应的下标
    public String getValueByIndex(int i){
        return dingdian.get(i);
    }
    //返回节点i对应下标的值
//    public int getValueByIndex(int i){
//        return edges[][]
//    }
    //返回V1和V2的权值
    public int getWeightValue(int v1,int v2){
        return edges[v1][v2];
    }

    //插入节点
    public void insertdingdian(String Vertex){
       dingdian.add(Vertex);
    }
    //返回
    public void insertEdge(int v1, int v2, int weight){
        edges[v1][v2]=weight;
        edges[v2][v1]=weight;
        numOfEdges++;
    }


}
