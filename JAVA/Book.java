package problem1;

public class Book {
	String title;
	boolean borrowed;

// Creates a new Book
	public Book(String bookTitle) {
// 여기에 코드를 작성하세요
		// 생성자 매개변수 bookTitle이 Book 클래스 멤버 필드 title이 된다.
		title = bookTitle;
	}

// Marks the book as rented
	public void rented() {
// 여기에 코드를 작성하세요
		// 책을 빌렸으면 빌린 상태는 true가 된다.
		borrowed = true;
	}

// Marks the book as not rented
	public void returned() {
// 여기에 코드를 작성하세요
		// 책 반납했으면 빌린 상태는 false가 된다.
		borrowed = false;
	}

// Returns true if the book is rented, false otherwise
	public boolean isBorrowed() {
// 여기에 코드를 작성하세요
		// boolean의 default값은 false이므로, rent하기 전에 물어보면 false로 나온다.
		return borrowed;
	}

// Returns the title of the book
	public String getTitle() {
// 여기에 코드를 작성하세요
		// Book 클래스의 멤버필드 title을 반환해준다.
		return title;
	}

	public static void main(String[] arguments) {
		// Small test of the Book class
		Book example = new Book("The Da Vinci Code");
		System.out.println("Title (should be The Da Vinci Code): " + example.getTitle());
		System.out.println("Borrowed? (should be false): " + example.isBorrowed());
		example.rented();
		System.out.println("Borrowed? (should be true): " + example.isBorrowed());
		example.returned();
		System.out.println("Borrowed? (should be false): " + example.isBorrowed());
	}
}