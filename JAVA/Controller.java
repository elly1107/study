package problem1;

public abstract class Controller {
	// 켜졌는지 꺼졌는지 알 수 있게 해주는 boolean 필드
	boolean power;

	// power가 true면 켜졌다고 false면 꺼졌다고 출력해주는 메서드
	public void show() {

		if (power) {
			System.out.println(getName() + "가 켜졌습니다.");
		} else if (!power) {
			System.out.println(getName() + "가 꺼졌습니다.");
		}
	}

	// 장치 이름 얻기 위한 추상 메서드
	public abstract String getName();

}
