from ImgToVideo import create
car = []
car2 = []
guy = []
for i in range(8):
    car.append(f"car_frame{i+1}.jpg")
for i in range(12):
    car2.append(f"car2_frame{i+1}.jpg")
for i in range(6):
    guy.append(f"guy_frame{i+1}.jpg")

create(car, "car_stop_motion.mp4",6)
create(guy, "guy_stop_motion.mp4",6)
create(car2,"car2_stop_motion.mp4",6)