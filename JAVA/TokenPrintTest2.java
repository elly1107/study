package problem1;

import java.util.NoSuchElementException;
import java.util.StringTokenizer;

public class TokenPrintTest2 { // 2)의 경우 TokenPrintTest2
	public static void main(String[] args) {

		String s = "of the people, by the people, for the people";

		// main 함수에서 try-catch 문으로 예외처리를 수행, showTokens 메서드를 try로 감싸주기.
		try {
			showTokens(s, ", ");
		} catch (NoSuchElementException e) {
			System.out.println("예외 발생");
		}
	}

	// showTokens 메서드에서는 throws를 활용
	static void showTokens(String s, String delimiter) throws NoSuchElementException {
		StringTokenizer st = new StringTokenizer(s, delimiter);
		while (true) {
			System.out.println(st.nextToken());
		}
	}
}
