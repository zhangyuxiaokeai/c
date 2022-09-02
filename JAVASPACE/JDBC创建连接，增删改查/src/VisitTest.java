/**
 * @author shkstart
 * @create 2022-05-06 9:33
 */
public class VisitTest {
    private int id;
    private int count;
    private String ip;

    public VisitTest() {
    }

    public VisitTest(int id, int count, String ip) {
        this.id = id;
        this.count = count;
        this.ip = ip;
    }

    public int getId() {
        return id;
    }

    public void setId(int id) {
        this.id = id;
    }

    public int getCount() {
        return count;
    }

    public void setCount(int count) {
        this.count = count;
    }

    public String getIp() {
        return ip;
    }

    public void setIp(String ip) {
        this.ip = ip;
    }

    @Override
    public String toString() {
        return "VisitTest{" +
                "id=" + id +
                ", count=" + count +
                ", ip='" + ip + '\'' +
                '}';
    }
}
