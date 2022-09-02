package graph;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;

/**
 * @author shkstart
 * @create 2022-03-27 14:40
 */
public class Graph {

    private ArrayList<String> vertexList;//存储顶点的集合
    private int[][] edges;//存储图对应的邻接矩阵
    private int numOfEdges;//表示边的数目

    //图的深度优先搜索
    //定义数组boolean[],记录某个节点是否被访问
    private boolean[] isVisited;

    public static void main(String[] args) {
            //测试一把图是否被创建
        int n=5;//节点的个数
        String Vertex[]={"A","B","C","D","E"};
        //创建一个图对象
        Graph graph = new Graph(n);
        for(String vertex:Vertex){
            graph.insertVertex(vertex);
        }

        //添加边
        // A-B A-C B-C B-D  B-E
        graph.insertEdge(0,1,1);
        graph.insertEdge(0,2,1);
        graph.insertEdge(1,2,1);
        graph.insertEdge(1,3,1);
        graph.insertEdge(1,4,1);

        //显示一把邻居矩阵
        graph.showGraph();


        //测试一把，我们的dfs遍历是否ok
        System.out.println("@@@@@@@@@@@@@@@@@@@@@@@@@@@");
       // graph.dfs();

        System.out.println("广度优先搜索");
        graph.bfs();
    }

//构造器
    public Graph(int n){
        //初始化矩阵和vertexList
        edges =new int[n][n];
        vertexList =new ArrayList<String>(n);
        numOfEdges =0;

        //
        isVisited =new boolean[5];
    }

    //得到第一个邻接节点的下标w

    /**
     *
     * @param index
     * @return  如果存在就返回对应的下表，否则就返回-1
      */
    //得到第一个临近的顶点下表
    public int getFirstNeighbor(int index){
        for (int j=0;j<vertexList.size();j++){
            if(edges[index][j]>0){
                return j;
            }
        }
        return -1;
    }
    //根据前一个邻接节点的下标来获取下一个邻接节点
    public int getNextNeighbor(int v1,int v2){
        for(int j=v2+1;j<vertexList.size();j++){
            if(edges[v1][j]>0){
                return j;
            }
        }
        return -1;
    }

    //深度优先遍历算法
    //i第一次就是0
    public void dfs(boolean[] isVisited,int i){
        //首先我们访问该节点
        System.out.print(getValueByIndex(i)+"->");
        //将节点设置为已经访问
        isVisited[i]=true;
        //查找节点i的第一个邻接节点w
        int w=getFirstNeighbor(i);
        while (w!=-1){
            //说明有
            if(!isVisited[w]){
                dfs(isVisited,w);
            }
            //如果w节点已经被访问过
            w=getNextNeighbor(i,w);
        }
    }
        //对dfs进行重载，遍历我们所有的节点，并进行dfs
    public void dfs(){
        //遍历所有的节点，进行dfs[回溯]
        for (int i=0;i<getNumOfVertex();i++){
            if(!isVisited[i]){
                dfs(isVisited,1);
            }
        }
    }

    //对一个节点进行广度优先遍历的方法
    private void bfs(boolean[] isVisited,int i){
        int u; //表示队列的头节点对应的下标
        int w;//表示U的邻接节点
        //队列，记录节点访问的顺序
        LinkedList queue = new LinkedList();
        //访问节点秘书处节点信息
        System.out.println(getValueByIndex(i)+"=>");
        //标记为一访问
        isVisited[i]=true;
        //将这个节点加入队列
        queue.addLast(i);
        while(!queue.isEmpty()){
            //取出队列的头节点下标
           u=(Integer)queue.removeFirst();
           //得到第一个邻接点的下标w
           w=getFirstNeighbor(u);
           while(w!=-1){//找到
               //是否访问过
               if(!isVisited[w]){
                   System.out.println(getValueByIndex(w)+"=>");
                   //标记一访问
                   isVisited[w]=true;
                   //入队
                   queue.addLast(w);
               }
               //以u去为前驱点，找w后面的下一个邻接点
               w=getNextNeighbor(u,w);//体现出广度优先
           }
        }

    }
        //遍历所有的节点，都进行广度优先搜索
    public void bfs(){
        for(int i=0;i<getNumOfVertex();i++){
            if(!isVisited[i]){
                bfs(isVisited,i);
            }
        }
    }


    ///
      //图中常用的方法

    //返回节点的个数
    public int getNumOfEdges(){
        return vertexList.size();
    }

    //显示图对应的矩阵
    public void showGraph(){
        for (int[] link:edges){
            System.out.println(Arrays.toString(link));
        }

    }


    //得到边的个数
    public int getNumOfVertex(){
        return numOfEdges;
    }
    //返回节点i（下标）对应的数据 0->"A" 1->"B"  2->"C"
        public String getValueByIndex(int i){
        return vertexList.get(i);
        }

        //返回V1和V2的权值
    public int getWeight(int v1,int v2){
        return edges[v1][v2];
    }

//插入结点
    public void  insertVertex(String vertex){
        vertexList.add(vertex);
    }
//插入边

    /**
     *
     * @param v1:表示点的下表即是第几个顶点
     * @param v2：第二个顶点对应的下标
     * @param weigh：百事值
     */
    public void insertEdge(int v1,int v2,int weigh){
    edges[v1][v2]=weigh;
    edges[v2][v1]=weigh;
    numOfEdges++;
}

}
