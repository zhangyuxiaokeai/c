import javax.swing.*;
import java.security.PublicKey;
import java.util.concurrent.TimeUnit;

public class SubmitSwingProgram extends JFrame {
           JLabel label;
public SubmitSwingProgram(){
     super("hell swing");
    label=new JLabel("A label");
    add(label);
    setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
    setSize(300,100);
    setVisible(true);
}
static SubmitSwingProgram ssp;
public static void main(String[] args) throws InterruptedException {
    SwingUtilities.invokeLater(new Runnable() {
        @Override
        public void run() {
            ssp=new SubmitSwingProgram();
        }
    });
    TimeUnit.SECONDS.sleep(2);
}
}
