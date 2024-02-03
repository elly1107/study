package problem1;

import java.util.NoSuchElementException;
import java.util.StringTokenizer;

public class TokenPrintTest { // 2)�� ��� TokenPrintTest2
	public static void main(String[] args) {
		String s = "of the people, by the people, for the people";
		showTokens(s, ", ");
	}

	static void showTokens(String s, String delimiter) {
		// showTokens �޼��� ������ try-catch ���� Ȱ���Ͽ� ����ó�� ����
		try {
			StringTokenizer st = new StringTokenizer(s, delimiter);
			while (true) {
				System.out.println(st.nextToken());
			}
		}
		// �߻� ������ ���ܴ� NoSuchElementException
		catch (NoSuchElementException e) {
			System.out.println("���� �߻�");
		}
	}
}
