package problem1;

//추상 클래스 Controller의 자식 클래스 Radio
public class Radio extends Controller {

	// 추상 클래스 Controller의 필드 power를 override.
	public Radio(boolean power) {
		this.power = power;
	}

	// 추상 메서드를 override하여 장치 이름을 알 수 있게 해준다.
	@Override
	public String getName() {
		return "라디오";
	}

}
