package co.edu.campusucc.poo.domain;

public class ThreadExtends extends Thread {
	//Properties
	private int times;

	public void run() {
		System.out.println("Thread Started Running...on UCC University");
		System.out.println("Random Times: " + times);
		printlTimes();
	}

	// Defined Behavior
	public void printlTimes() {
		int timesCount = 0;
		while (timesCount <= times) {
			System.out.print("-");
			timesCount++;
			try {
				Thread.sleep(50);
			} catch (InterruptedException e) {
				e.printStackTrace();
			}
		}
		System.out.println("> OK");
	}

	// Getters and Setters
	public int getTimes() {
		return times;
	}

	public void setTimes(int times) {
		this.times = times;
	}

}
