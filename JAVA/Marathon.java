package problem1;

public class Marathon {
	public static void main(String[] arguments) {
		String[] names = { "Elena", "Thomas", "Hamilton", "Suzie", "Phil", "Matt", "Alex", "Emma", "John", "James",
				"Jane", "Emily", "Daniel", "Neda", "Aaron", "Kate" };
		int[] times = { 341, 273, 278, 329, 445, 402, 388, 275, 243, 334, 412, 393, 299, 343, 317, 265 };

		// 저장된 데이터에 대한 출력
		for (int i = 0; i < names.length; i++) {
			System.out.println(names[i] + ": " + times[i]);
		}

		// 여기에 코드를 작성하세요

		// 최단시간을 기록한 사람의 인덱스를 min으로 하기로 하고, 0으로 초기값을 잡는다.
		int min = 0;

		// 1부터 times 배열 크기만큼 i 범위를 설정해 놓고, times[i]를 times[min]과 비교하여 times[i]가 더 작으면 해당
		// i값이 min이
		// 된다.
		for (int i = 1; i < times.length; i++) {
			if (times[i] < times[min]) {
				min = i;
			}
		}

		// 보기 편리하도록, 시간을 분과 초로 나눠준다.
		int minutes = times[min] / 60;
		int seconds = times[min] - (minutes * 60);

		// times배열과 names 배열의 크기가 같으므로, names[min]은 최단시간을 기록한 사람의 이름이 나온다. 출력해주기.
		System.out.println(String.format("가장 빠르게 도착한 사람은 %1$s으로 %2$d분 %3$02d초에 도착했다.", names[min], minutes, seconds));
	}
}