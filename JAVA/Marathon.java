package problem1;

public class Marathon {
	public static void main(String[] arguments) {
		String[] names = { "Elena", "Thomas", "Hamilton", "Suzie", "Phil", "Matt", "Alex", "Emma", "John", "James",
				"Jane", "Emily", "Daniel", "Neda", "Aaron", "Kate" };
		int[] times = { 341, 273, 278, 329, 445, 402, 388, 275, 243, 334, 412, 393, 299, 343, 317, 265 };

		// ����� �����Ϳ� ���� ���
		for (int i = 0; i < names.length; i++) {
			System.out.println(names[i] + ": " + times[i]);
		}

		// ���⿡ �ڵ带 �ۼ��ϼ���

		// �ִܽð��� ����� ����� �ε����� min���� �ϱ�� �ϰ�, 0���� �ʱⰪ�� ��´�.
		int min = 0;

		// 1���� times �迭 ũ�⸸ŭ i ������ ������ ����, times[i]�� times[min]�� ���Ͽ� times[i]�� �� ������ �ش�
		// i���� min��
		// �ȴ�.
		for (int i = 1; i < times.length; i++) {
			if (times[i] < times[min]) {
				min = i;
			}
		}

		// ���� ���ϵ���, �ð��� �а� �ʷ� �����ش�.
		int minutes = times[min] / 60;
		int seconds = times[min] - (minutes * 60);

		// times�迭�� names �迭�� ũ�Ⱑ �����Ƿ�, names[min]�� �ִܽð��� ����� ����� �̸��� ���´�. ������ֱ�.
		System.out.println(String.format("���� ������ ������ ����� %1$s���� %2$d�� %3$02d�ʿ� �����ߴ�.", names[min], minutes, seconds));
	}
}