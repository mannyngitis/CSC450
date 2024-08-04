import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.Condition;

public class CountUp implements Runnable {
    private final Lock lock;
    private final Condition condition;
    private final SharedData sharedData;

    public CountUp(Lock lock, Condition condition, SharedData sharedData) {
        this.lock = lock;
        this.condition = condition;
        this.sharedData = sharedData;
    }

    @Override
    public void run() {
        lock.lock();
        try {
            for (int i = 0; i <= 20; ++i) {
                System.out.println("Count Up: " + i);
            }
            sharedData.setReady(true);
            condition.signal();
        } finally {
            lock.unlock();
        }
    }
}
