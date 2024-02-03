package problem1;

import java.util.NoSuchElementException;
import java.util.StringTokenizer;

public class TokenPrintTest { // 2)의 경우 TokenPrintTest2
	public static void main(String[] args) {
		String s = "of the people, by the people, for the people";
		showTokens(s, ", ");
	}

	static void showTokens(String s, String delimiter) {
		// showTokens 메서드 내에서 try-catch 문을 활용하여 예외처리 수행
		try {
			StringTokenizer st = new StringTokenizer(s, delimiter);
			while (true) {
				System.out.println(st.nextToken());
			}
		}
		// 발생 가능한 예외는 NoSuchElementException
		catch (NoSuchElementException e) {
			System.out.println("예외 발생");
		}
	}
}
