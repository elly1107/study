package problem1;

import java.util.NoSuchElementException;
import java.util.StringTokenizer;

public class TokenPrintTest2 { // 2)�� ��� TokenPrintTest2
	public static void main(String[] args) {

		String s = "of the people, by the people, for the people";

		// main �Լ����� try-catch ������ ����ó���� ����, showTokens �޼��带 try�� �����ֱ�.
		try {
			showTokens(s, ", ");
		} catch (NoSuchElementException e) {
			System.out.println("���� �߻�");
		}
	}

	// showTokens �޼��忡���� throws�� Ȱ��
	static void showTokens(String s, String delimiter) throws NoSuchElementException {
		StringTokenizer st = new StringTokenizer(s, delimiter);
		while (true) {
			System.out.println(st.nextToken());
		}
	}
}
