import java.util.concurrent.locks.Lock;
import java.util.concurrent.locks.Condition;

public class CountDown implements Runnable {
    private final Lock lock;
    private final Condition condition;
    private final SharedData sharedData;

    public CountDown(Lock lock, Condition condition, SharedData sharedData) {
        this.lock = lock;
        this.condition = condition;
        this.sharedData = sharedData;
    }

    @Override
    public void run() {
        lock.lock();
        try {
            while (!sharedData.isReady()) {
                condition.await();
            }
            for (int i = 20; i >= 0; --i) {
                System.out.println("Count Down: " + i);
            }
        } catch (InterruptedException e) {
            Thread.currentThread().interrupt();
        } finally {
            lock.unlock();
        }
    }
}

