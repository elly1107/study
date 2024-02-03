package problem1;

public class Book {
	String title;
	boolean borrowed;

// Creates a new Book
	public Book(String bookTitle) {
// ���⿡ �ڵ带 �ۼ��ϼ���
		// ������ �Ű����� bookTitle�� Book Ŭ���� ��� �ʵ� title�� �ȴ�.
		title = bookTitle;
	}

// Marks the book as rented
	public void rented() {
// ���⿡ �ڵ带 �ۼ��ϼ���
		// å�� �������� ���� ���´� true�� �ȴ�.
		borrowed = true;
	}

// Marks the book as not rented
	public void returned() {
// ���⿡ �ڵ带 �ۼ��ϼ���
		// å �ݳ������� ���� ���´� false�� �ȴ�.
		borrowed = false;
	}

// Returns true if the book is rented, false otherwise
	public boolean isBorrowed() {
// ���⿡ �ڵ带 �ۼ��ϼ���
		// boolean�� default���� false�̹Ƿ�, rent�ϱ� ���� ����� false�� ���´�.
		return borrowed;
	}

// Returns the title of the book
	public String getTitle() {
// ���⿡ �ڵ带 �ۼ��ϼ���
		// Book Ŭ������ ����ʵ� title�� ��ȯ���ش�.
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