import javax.swing.*;
import java.util.concurrent.TimeUnit;

public class SubmitLabelManipu {
    public static void main (String[] args) throws InterruptedException {
        JFrame frame = new JFrame("hello swing");
       final JLabel label = new JLabel("A Label");
        frame.add(label);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(300,300);
        frame.setVisible(true);
        TimeUnit.SECONDS.sleep(2);
        SwingUtilities.invokeLater(new Runnable() {
            @Override
            public void run() {
                label.setText("Hev! this is Different");
            }
        });


    }

}
