import javax.swing.*;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.awt.event.KeyEvent;
import java.awt.event.KeyListener;

public class PongGame extends JPanel implements ActionListener, KeyListener {
    private int ballX = 250;
    private int ballY = 250;
    private int ballXSpeed = 2;
    private int ballYSpeed = 2;

    private int player1Y = 200;
    private int player2Y = 200;

    private final int PADDLE_WIDTH = 15;
    private final int PADDLE_HEIGHT = 100;
    private final int BALL_DIAMETER = 20;

    private Timer timer;

    public PongGame() {
        timer = new Timer(10, this);
        timer.start();
        addKeyListener(this);
        setFocusable(true);
        setFocusTraversalKeysEnabled(false);
    }

    public void actionPerformed(ActionEvent e) {
        // Move the ball
        ballX += ballXSpeed;
        ballY += ballYSpeed;

        // Bounce the ball off the top and bottom walls
        if (ballY <= 0 || ballY >= getHeight() - BALL_DIAMETER) {
            ballYSpeed = -ballYSpeed;
        }

        // Check for ball collision with paddles
        if (ballX <= PADDLE_WIDTH && ballY > player1Y && ballY < player1Y + PADDLE_HEIGHT ||
                ballX >= getWidth() - PADDLE_WIDTH - BALL_DIAMETER && ballY > player2Y && ballY < player2Y + PADDLE_HEIGHT) {
            ballXSpeed = -ballXSpeed;
        }

        // Check for ball out of bounds (player scores)
        if (ballX <= 0 || ballX >= getWidth() - BALL_DIAMETER) {
            ballX = 250;
            ballY = 250;
        }

        repaint();
    }

    public void paint(Graphics g) {
        super.paint(g);

        // Draw paddles
        g.fillRect(0, player1Y, PADDLE_WIDTH, PADDLE_HEIGHT);
        g.fillRect(getWidth() - PADDLE_WIDTH, player2Y, PADDLE_WIDTH, PADDLE_HEIGHT);

        // Draw ball
        g.fillOval(ballX, ballY, BALL_DIAMETER, BALL_DIAMETER);
    }

    public void keyPressed(KeyEvent e) {
        int key = e.getKeyCode();
        if (key == KeyEvent.VK_UP && player2Y > 0) {
            player2Y -= 20;
        } else if (key == KeyEvent.VK_DOWN && player2Y < getHeight() - PADDLE_HEIGHT) {
            player2Y += 20;
        } else if (key == KeyEvent.VK_W && player1Y > 0) {
            player1Y -= 20;
        } else if (key == KeyEvent.VK_S && player1Y < getHeight() - PADDLE_HEIGHT) {
            player1Y += 20;
        }
    }

    public void keyTyped(KeyEvent e) {}
    public void keyReleased(KeyEvent e) {}

    public static void main(String[] args) {
        JFrame frame = new JFrame("Pong Game");
        PongGame pongGame = new PongGame();
        frame.add(pongGame);
        frame.setSize(800, 600);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setVisible(true);
    }
}

