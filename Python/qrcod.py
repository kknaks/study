import qrcode
from PIL import Image
import matplotlib.pyplot as plt

# QR 코드로 변환할 데이터
data = "TRACSE_ID=AIG20230000412897,TRACSE_TME=14,CRSE_TRACSE_SE=C0061"

# QR 코드 객체 생성
qr = qrcode.QRCode(
    version=1,  # QR 코드 크기 (1 ~ 40), 기본값은 1
    error_correction=qrcode.constants.ERROR_CORRECT_L,  # 오류 수정 수준
    box_size=10,  # QR 코드의 각 박스 크기 (픽셀 단위)
    border=4,  # 테두리 크기 (박스 단위)
)

# QR 코드에 데이터 추가
qr.add_data(data)
qr.make(fit=True)

# 이미지 생성
img = qr.make_image(fill_color="black", back_color="white")

# 이미지 파일로 저장
img.save("qrcode.png")

# 이미지 파일을 열고 표시
image = Image.open("qrcode.png")

# 화면에 이미지 표시
plt.imshow(image)
plt.axis('off')  # 축 숨기기
plt.show()

print("QR 코드가 'qrcode.png' 파일로 저장되고 화면에 표시되었습니다.")
