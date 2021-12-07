import serial
import cv2


def connect(rate):
    global opencr
    opencr = serial.Serial(port='/dev/ttyACM1', baudrate = rate, timeout = 1)
    return

connect(115200)
# cv2.namedWindow('order direction')

if __name__ == '__main__':
    while True:
    
        try:
            # cv2.waitKey()==
            direction = input('Enter a direction foreward(f), backward(b), right(r), left(l): ')
            if direction == 'q' :
                break
            elif direction != 'f' and 'b' and 'r' and 'l' :
                print("잘못된 방향입니다.")
                continue
            opencr.write(direction.encode('utf-8'))
            pass
        except Exception as e:
            pass
