public class Qfnumber {
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
