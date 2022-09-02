package com.atguigu.com;

import org.junit.Test;

import java.util.Stack;

import static com.atguigu.com.SingleLinkedList.*;

/**
 * @author shkstart
 * @create 2022-03-09 12:21
 */
public class SingleLinkedListDemo {
@Test
    public void test1(){
        //创建要给的链表
//    SingleLinkedList singleLinkedList = new SingleLinkedList();
//    singleLinkedList.add(new HeroNode(1,"松江","及时雨"));
//    singleLinkedList.add( new HeroNode(2,"卢俊义","玉麒麟"));
//    singleLinkedList.add( new HeroNode(3,"吴用","智多星"));
//    singleLinkedList.add( new HeroNode(4,"入云龙","公孙胜"));
//    singleLinkedList.list();
    //加入按照编号的顺序
    SingleLinkedList singleLinkedList = new SingleLinkedList();
    singleLinkedList.addByOrder(new HeroNode(1,"松江","及时雨"));
    singleLinkedList.addByOrder( new HeroNode(5,"卢俊义","玉麒麟"));
    singleLinkedList.addByOrder( new HeroNode(2,"吴用","智多星"));
    singleLinkedList.addByOrder( new HeroNode(7,"入云龙","公孙胜"));

    //测试修改节点的代码
//    HeroNode newheroNode = new HeroNode(2, "小吴", "神算子");
//    singleLinkedList.update(newheroNode);
//    singleLinkedList.list();
//    System.out.println("8888888888888");
//    singleLinkedList.remove(2);
//    singleLinkedList.remove(2);
//    singleLinkedList.list();
//    System.out.println(getlength(singleLinkedList.getHead()));
//    //测试一下看看是否在得到了倒数第K个节点
//    HeroNode res=findLastIndexNode(singleLinkedList.getHead(),1);
//    System.out.println(res);
    singleLinkedList.list();
    //reversetList(singleLinkedList.getHead());
    reversePrint(singleLinkedList.getHead());
}
}
class SingleLinkedList{
    //先量化一个头结点
    private HeroNode head=new HeroNode(0,"","");

    public HeroNode getHead() {
        return head;
    }

    //添加节点到单向列表
    //思路，当不考虑编号顺序时
    //1.找到当前编号的最后节点
    //2.将最后这个节点的next指向新的节点
    public void add(HeroNode heroNode){
        //因为头节点不能动，因此我们需要一个辅助遍历 temp
        HeroNode temp=head;
        //遍历链表，找到最后
        while(true){
            //找到链表的最后
            if(temp.next==null){
                break;
            }
            //如果没有找到最后，就将temp后移
            temp=temp.next;
        }
    //当推出while循环时，temp就指向链表的最后
        temp.next=heroNode;
    }
    //第二种方式添加英雄时，根据排名将英雄插入到指定位置（如果有这个排名，则添加失败，并给出提示）
    public void addByOrder(HeroNode heroNode){
        //因为头节点不能动，因此我们仍然通过一个辅助指针（变量）来帮助找到添加的的位置
        //因为单链表，因为我们找的temp是位于添加位置的前一个节点，否则插入不了
        HeroNode temp=head;
        boolean flag=false;//标志添加的编号是否存在，默认为false
        while(true){
            if(temp.next==null){
                //说明temp已经在链表的最后
                break;
            }
            if (temp.next.no>heroNode.no){//位置找到，就在temp后面插入
                break;
            }else if(temp.next.no== heroNode.no){//说明希望添加的heroNode的编号已然存在
            flag=true;
            break;
            }
      temp=temp.next;
        }
        //判断flag的值
        if(flag==true){
            //不能添加，说明编号存在
            System.out.printf("准备插入的英雄的编号%d已经存在，不能加入\n",heroNode.no);
        }else {
            //插入到链表中。temp后边
            heroNode.next = temp.next;
            temp.next=heroNode;
        }
    }
    //修改节点信息根据no编号来修改，即no编号不能改
    //根据newHeroNode的no来 修改即可
    public void update(HeroNode newHeroNode){
        if(head.next==null){
            System.out.println("列表为空");
            return;
        }
        //找到需要修改的节点，根据no编号
        //定义一个辅助变量
        HeroNode temp=head.next;
        boolean flag=false;//表示是否找到改节点
        while (true){
            if(temp==null){//已经遍历完链表
                break;
            }if(temp.no== newHeroNode.no){//找到
                flag=true;
                break;
            }
            temp=temp.next;
        }
        //根据flag判断是否找到要修改的节点
        if(flag){
            temp.name= newHeroNode.name;
            temp.waihao= newHeroNode.waihao;
        }else {
            //根本没有找到
            System.out.printf("没有找到编号为%d的节点，不能修改\n",newHeroNode.no);
        }
    }
    //删除链表中的节点
    //1.我们先找到需要删除的这个节点的前一个结点temp
    // 2.temp.next=temp.next.next
    //3.被删除的节点将不会有其他引用指向，会被垃圾回收机制回收
    public void remove(int no){
        HeroNode temp=head;
        boolean falg=false;
        while(true){
            if(temp.next==null){
              break;
            }
            if(temp.next.no==no){
                falg=true;
                break;
            }
           temp= temp.next;
        }
        if(falg){
            temp.next=temp.next.next;
        }else{
            System.out.println("删除的节点不存在");
        }
    }
    //百度面试题
    //方法：获取到单链表的节点个数（如果是带头结点的链表，需求不统计头节点）
    public static int getlength(HeroNode head){
        if(head.next==null){
            return 0;
        }
        int length=0;
        //定义一个辅助的变量
        HeroNode cur=head.next;
        while (cur!=null){
            length++;
            cur=cur.next;//遍历
        }
        return length;
    }

    //查找单链表中倒数第K个节点{新浪面试题}

    //思路
    //1.编写一个方法，接收head节点，同时接收一个index
    //2.index表示是倒数index个节点
    //3.先把链表从头到尾遍历，得到链表的总的长度getLength
    //4.得到size后，我们从链表的第一个开始遍历（size-index）个，就可以得到
    //5.如果找到了，则返回该节点，否则返回null
    public static HeroNode findLastIndexNode(HeroNode head,int index){
        //判断如果链表为空，返回null
        if(head.next==null){
            return null;
        }
        //第一次遍历得到链表的长度（节点个数）
        int size=getlength(head);
        //第二次遍历 size-index位置，就是我们倒数第K个节点
        //先做一个index的校验
        if(index<=0 ||index>size){
            return null;
        }
        //定义一个辅助变量 for循环定位到倒数的index个
        HeroNode cur=head.next;
        for(int i=0;i<size-index;i++){
        cur=cur.next;
        }
        return cur;
    }
    //将单链表进行翻转
    public static void reversetList(HeroNode head){
        //如果当前链表为空，或者只有一个节点，无需反转，直接返回
        if(head.next==null || head.next.next==null){
            return;
        }
        //定义一个辅助指针（变量），帮助我们遍历原来的链表
        HeroNode cur=head.next;
        HeroNode next=null;//指向当前节点【cur】的下一个
        HeroNode reverseHead=new HeroNode(0,"","");
        //遍历原来的链表，
        //每遍历一个节点，就将其取出，并放在新的链表reverseHead的最前端
        while(cur!=null){
            next=cur.next;//先暂时保存当前节点的下一个节点，因为后面需要使用
           cur.next=reverseHead.next;//将cur的下一个节点指向新的链表的最前端
            reverseHead.next=cur;//将cur连接到新的姐带你上
            cur=next;//cur后移一次
        }
        //head.next指向reversedHead.next,实现单链表的翻转
        head.next=reverseHead.next;
    }
    //方式二
    //可以利用栈这个数据集结构，将各个节点压入到站中，再利用栈先进后出的特点，就实现了逆序打印的效果
    public static void reversePrint(HeroNode head){
        if(head.next==null){
            return;
        }
        //创建要给一个栈，将各个节点压入栈
        Stack<HeroNode> stack=new Stack<HeroNode>();
        HeroNode cur=head.next;
            while(cur!=null){
        stack.push(cur);
        cur=cur.next;//cur后移，这样就可以压入下一个节点
            }
        //将栈中的节点进行打印
        while(stack.size()>0){
            System.out.println(stack.pop());//stack特点先进后出
        }
    }
  //显示链表[遍历]
    //首先判断链表是不是为空
    public void list(){
        if(head.next==null){
            System.out.println("链表为空");
            return;
        }
        //头节点不能动，因此我们需要一个辅助变量来遍历
        HeroNode temp= head.next;
        while(true){
            //判断是不是到了链表的最后
            if(temp==null){
               break;
            }
        //输出节点的信息
            System.out.println(temp);
            //将next后移，一定小心
            temp=temp.next;
        }

    }
}
class HeroNode{
    public int no;
    public String name;
    public String waihao;
    public HeroNode next;//指向下一个节点

    public HeroNode(int no ,String name,String waihao){
        this.no=no;
        this.name=name;
        this.waihao=waihao;
    }

    @Override
    public String toString() {
        return "HeroNode{" +
                "no=" + no +
                ", name='" + name + '\'' +
                ", waihao='" + waihao + '\'' +
                '}';
    }
}