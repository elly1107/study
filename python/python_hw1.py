#20190937, 이혜린, 융합보안공학과

#random 함수를 이용하여 각 간식의 종류별 개수를 결정한다.
import random
snack_num=random.randint(1,10)
cookie_num=random.randint(1,10)
bread_num=random.randint(1,10)

#계산 총액을 구한다.
total=1000*snack_num+1500*cookie_num+2000*bread_num

#간식이 각각 몇개 선택되었는지 출력한다.
print("스낵류: %s개 선택"%(snack_num))
print("쿠키류: %s개 선택"%(cookie_num))
print("빵류: %s개 선택"%(bread_num))

#계산 총액이 25000원 이상이면 10% 할인해주고 총 지불금액을 출력한다.
if total>=25000:
    total=int(total*0.9)
    print("10% 할인되었습니다.")
    print("총 지불금액: %s원"%(total))

#계산 총액이 25000 미만이면 할인받으려면 얼마가 부족한지 알려주고 총 지불금액을  출력한다. 
else:
    left=25000-total
    print("%s원이 부족하여 할인되지 않습니다."%(left))
    print("총 지불금액: %s원"%(total))
