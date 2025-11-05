import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;
import java.awt.Graphics;
public class SmilingFace extends Frame {

    public SmilingFace() {
        setTitle("Smiling Face");
        setSize(400, 400);
        setVisible(true);
        
        addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent we) {
                System.exit(0);
            }
        });
    }

    public void paint(Graphics g) { 
        setBackground(Color.CYAN);
        g.setColor(new Color(255, 182, 193)); 
        g.fillOval(100, 100, 200, 200); 
        g.setColor(Color.BLACK);
        g.fillOval(150, 150, 20, 20); 
        g.fillOval(220, 150, 20, 20); 
        g.setColor(Color.BLACK);
        g.drawArc(150, 200, 100, 50, 0, -180); 
        g.setColor(Color.BLACK);
        g.drawLine(200, 220, 200, 190);
    }

    public static void main(String[] args) {   
        new SmilingFace(); 
    }
}
/* <applet code="First.class" width="300" height="300"></applet> */
