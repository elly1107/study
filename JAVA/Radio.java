package problem1;

//�߻� Ŭ���� Controller�� �ڽ� Ŭ���� Radio
public class Radio extends Controller {

	// �߻� Ŭ���� Controller�� �ʵ� power�� override.
	public Radio(boolean power) {
		this.power = power;
	}

	// �߻� �޼��带 override�Ͽ� ��ġ �̸��� �� �� �ְ� ���ش�.
	@Override
	public String getName() {
		return "����";
	}

}
