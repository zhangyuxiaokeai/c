package BinaryTree;

/**
 * @author shkstart
 * @create 2022-03-15 15:08
 */
public class BinaryTreeText {
    public static void main(String[] args) {
        //创建一个二叉树
        BinaryTree binaryTree = new BinaryTree();
        //创建需要的节点
        HeroNode root = new HeroNode(1,"宋江");
        HeroNode Node2 = new HeroNode(2,"吴用");
        HeroNode Node3 = new HeroNode(3,"卢俊义");
        HeroNode Node4 = new HeroNode(4,"林冲");
        HeroNode Node5 = new HeroNode(5,"关胜");

        //说明：我们显示手动先创建该二叉树，后面学习递归创建的方式创建二叉树
        root.setLeft(Node2);
        root.setRight(Node3);
        Node3.setRight(Node4);
        Node3.setLeft(Node5);
        binaryTree.setRoot(root);
        //测试
//        System.out.println("前序遍历");//1234
//        binaryTree.preOrder();
//        binaryTree.infixOreder();
//        binaryTree.postOrder();
//        System.out.println();

//        //查找：前序遍历
//        System.out.println("前序遍历方式");
//        HeroNode heroNode = binaryTree.preOrderSeaech(2);
//        if(heroNode!=null){
//            System.out.printf("找到了，信息为 no=%d name=%s",heroNode.getNo(),heroNode.getName());
//        }else
//        {
//            System.out.println("没找到");
//        }
//        System.out.println();
//        System.out.println("中序遍历方式");
//        HeroNode heroNode1 = binaryTree.preOrderSeaech(5);
//        if(heroNode1!=null){
//            System.out.printf("找到了，信息为 no=%d name=%s",heroNode1.getNo(),heroNode1.getName());
//        }else
//        {
//            System.out.println("没找到");
//        }
        //测试删除编码

        System.out.println("删除前，前序遍历");
        binaryTree.preOrder();
        binaryTree.deNode1(3);
        System.out.println("删除后仍然是前序遍历");
        binaryTree.preOrder();

    }
}

//定义BinaryTree二叉树
class BinaryTree{
    private HeroNode root;

    public void setRoot(HeroNode root) {
        this.root = root;
    }


    //删除节点
    public void delNode(int no){
        if(root!=null){
            //如果只有一个root节点，这里立即判断root是不是就是要删除节点
            if(root.getNo()==no){
                root=null;
            }else {
                //递归删除
                root.delNode(no);
            }
        }else {
            System.out.println("这是一个空树");
        }
    }
public void deNode1(int no){
        if(root!=null){
            if(root.getNo()==no){
               root=null;
            }else {
             root.delNode1(no);
            }
        }else {
            System.out.println("写错了把");
        }
}

    //前序遍历
    public void preOrder(){
        if(this.root!=null){
            this.root.preOrder();
        }else {
            System.out.println("二叉树为空无法遍历");
        }
    }
    public void infixOreder(){
        if(this.root!=null) {
            this.root.infixOrder();
        }else {
            System.out.println("二叉树为空无法遍历");
        }
    }
    public void postOrder(){
        if(this.root!=null){
            this.root.postOrder();
        }else {
            System.out.println("二叉树为空无法遍历");
        }
    }
        //前序遍历
    public HeroNode preOrderSeaech(int no){
        if(root!=null){
            return root.preOrdersearch(no);
        }else {
            return null;
        }
    }
    public HeroNode infixOrderSearch(int no){
        if(root!=null){
            return root.infixOrderSearch(no);
        }else {
            return null;
        }
    }
    public HeroNode postOrderSearch(int no){
        if(root!=null){
            return root.postOrderSearch(no);
        }
        else {
            return null;
        }
    }
    }


//创建Node节点
class HeroNode{
    private int no;
    private String name;
    private HeroNode left;//默认null
    private  HeroNode right;//默认null

    public HeroNode(int no, String name) {
        this.no = no;
        this.name = name;
    }

    public int getNo() {
        return no;
    }

    public void setNo(int no) {
        this.no = no;
    }

    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public HeroNode getLeft() {
        return left;
    }

    public void setLeft(HeroNode left) {
        this.left = left;
    }

    public HeroNode getRight() {
        return right;
    }

    public void setRight(HeroNode right) {
        this.right = right;
    }

    @Override
    public String toString() {
        return "HeroNode{" +
                "no=" + no +
                ", name='" + name + '\'' +
                '}';
    }

    //递归删除节点
    //1，如果删除的点解时叶子节点，则删除该节点
    //2，如果删除的的节点是非叶子节点，则删除该子树

    public void delNode(int no){

        //思路
        /*
        1，因为我们的二叉树是单向的，所以我们判断当前的子节点是否需要删除节点，而不能去判断当前这个节点是不是需要删除的节点。
        2.如果当前节点的左子节点不为空，并且左子节点，就是要删除的节点，就将this。left=null；并且返回（结束递归删除）
        3.如果当前节点的右子节点不为空,并且右子节点即使要删除的节点，我们直接this，left=null;并且就返回（结束递归删除）
        4如果第二和第三步没有删除节点，那么我们就需要向左子树进行递归删除
        5.如果第四步也没有删除节点，则应向右子树进行递归删除

         */
        //2.如果当前节点的左子节点不为空，并且左子节点，就是要删除的节点，就将this。left=null；并且返回（结束递归删除）
        if(this.left!=null&&this.left.no==no){
            this.left=null;
            return;
        }
        //3如果当前节点的右子节点不为空,并且右子节点即使要删除的节点，我们直接this，left=null;并且就返回（结束递归删除）
        if(this.right!=null&&this.right==null){
            this.right=null;
            return;
        }
        //   4如果第二和第三步没有删除节点，那么我们就需要向左子树进行递归删除
        if(this.left!=null){
            this.left.delNode(no);
        }
        //5. 5.如果第四步也没有删除节点，则应向右子树进行递归删除
        if(this.right!=null){
            this.right.delNode(no);
        }
    }
    public void delNode1(int no){
        if(this.left!=null&&this.left.no==no){
            this.left=null;
        }
        if(this.right!=null&&this.right.no==no){
            this.right=null;
        }
        if(this.left!=null){
            this.left.delNode1(no);
        }
        if(this.right!=null){
            this.right.delNode1(no);
        }
    }

    //节点的方法，前序遍历的方法
    public void preOrder(){
        System.out.println(this);//先输出父节点
        //递归向左子树前序遍历
        if(this.left!=null){
            this.left.preOrder();
        }
        //递归向右子树前序遍历
        if(this.right!=null){
            this.right.preOrder();
        }
    }
    //中序遍历的方法
    public void infixOrder(){
        //递归向左子树遍历
        if(this.left!=null){
            this.left.infixOrder();
        }
        //输出父节点
        System.out.println(this);
    //递归向右子树中序遍历
        if(this.right!=null){
            this.right.infixOrder();
        }
    }
    //后续遍历
    public void postOrder(){
        if(this.left!=null){
            this.left.postOrder();
        }
    if(this.right!=null){
        this.right.postOrder();
    }
        System.out.println(this);
    }

    /**
     *
     * @param no 查找当前编号
     * @return 如果找到就返回N哦的，如果没有找到就返回null
     */
    //前序遍历查找
    public HeroNode preOrdersearch(int no){
        //比较当前节点是不是
        if(this.no==no){
            return this;
        }
        //1.则判断当前节点的左子节点是否为空，如果不为空，则递归前序查找
        //2如果左递归前序查找，找到节点，则返回
        HeroNode resNode=null;
        if(this.left!=null){
            resNode= this.left.preOrdersearch(no);
        }
        if(this.right!=null){//说明我们左子树找到
            return resNode;
        }
        //1.左递归前序查找，找到节点，则返回，否则继续判断
        //2.当前的节点右子节点是否为空，如果不空则继续向右递归前序查找
        if(this.right!=null){
            resNode=this.right.preOrdersearch(no);
        }
        return resNode;
    }
    //中序遍历
    public HeroNode infixOrderSearch(int no){
        HeroNode resNode=null;
        //判断当前的左子节点是否为空，如果不为空，则递归中序查找
        if(this.left!=null){
            resNode=this.left.infixOrderSearch(no);
        }
        if(resNode!=null){
           return resNode;
        }//如果找到，则返回，如果没有找到，就和当前节点比较，如果是则返回当前节点
        if(this.no==no){
            return this;
        }
        if(this.right!=null){
            resNode=this.right.infixOrderSearch(no);
        }
        return resNode;
    }
public HeroNode postOrderSearch(int no){
        //判断当前节点的左子节点是否为空，如果不为空，则递归后续查找
    HeroNode resNode=null;
   if(this.left!=null){
       resNode=this.left.postOrderSearch(no);
   }
    if (resNode!=null){
        return resNode;
    }
    //如果左子树没有找到，则向右子树递归进行后续遍历查找
   if(this.right!=null){
       resNode=this.right.postOrderSearch(no);
   }
   if (resNode!=null){
       return resNode;
   }
   //如果左右子树都没有找到。就比较当前节点是不是
   if (this.no == no){
       return this;
   }
   return resNode;
}
}
