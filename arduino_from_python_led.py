import serial

# 아두이노 시리얼모니터가 꺼져있어야 되.
opencr = serial.Serial(port='/dev/ttyACM0', baudrate =115200, timeout = 1)

while True:
    # 통신은 문자열로 하기 때문에 굳이 input을 int로 바꾸지 않고 보냄.
    num = input('Enter a number : ')
    if num == 0 :
        break
    opencr.write(bytes(num, 'utf-8'))
    # val = opencr.readline()
    # print(f'return : {val}')