/**
 * @author shkstart
 * @create 2022-05-05 17:19
 */
public class Qfnumber {
    /**
     * ORM编程思想（object relational mapping）
     * 一个数据表对应一个java类
     * 表中的一条数据对应java类的一个对对象
     * 表中的一个字段对应java类的一个属性
     *
     */
   private int id ;
   private  String province;
   private  int numbers;
    private String types;

    public Qfnumber() {
    }

    public Qfnumber(int id, String province, int numbers, String types) {
        this.id = id;
        this.province = province;
        this.numbers = numbers;
        this.types = types;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public String getProvince() {
        return province;
    }

    public void setProvince(String province) {
        this.province = province;
    }

    public int getNumbers() {
        return numbers;
    }

    public void setNumbers(int numbers) {
        this.numbers = numbers;
    }

    public String getTypes() {
        return types;
    }

    public void setTypes(String types) {
        this.types = types;
    }

    @Override
    public String toString() {
        return "Qfnumber{" +
                "id=" + id +
                ", province='" + province + '\'' +
                ", numbers=" + numbers +
                ", types='" + types + '\'' +
                '}';
    }
}
