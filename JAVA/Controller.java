package problem1;

public abstract class Controller {
	// �������� �������� �� �� �ְ� ���ִ� boolean �ʵ�
	boolean power;

	// power�� true�� �����ٰ� false�� �����ٰ� ������ִ� �޼���
	public void show() {

		if (power) {
			System.out.println(getName() + "�� �������ϴ�.");
		} else if (!power) {
			System.out.println(getName() + "�� �������ϴ�.");
		}
	}

	// ��ġ �̸� ��� ���� �߻� �޼���
	public abstract String getName();

}
