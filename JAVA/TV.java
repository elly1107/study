package problem1;

//�߻� Ŭ���� Controller�� �ڽ� Ŭ���� TV
public class TV extends Controller {

	// �߻� Ŭ���� Controller�� �ʵ� power�� override.
	public TV(boolean power) {
		this.power = power;
	}

	// �߻� �޼��带 override �Ͽ� ��ġ �̸��� �� �� �ְ� ���ش�.
	@Override
	public String getName() {
		return "TV";
	}

}
