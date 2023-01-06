import pandas as pd
import cv2
import imutils
table=pd.read_csv('C:/Users/HP-PC/Desktop/practical/Book1.csv')
pictures={}
with open('C:/Users/HP-PC/Desktop/practical/112.jpg','rb') as f:
    image=f.read()
pictures[290]=image
face_cap = cv2.CascadeClassifier('C:/Users/HP-PC/AppData/Local/Programs/Python/Python311/Lib/site-packages/cv2/data/haarcascade_frontalface_default.xml')
video_cap = cv2.VideoCapture(0)
while True :
    ret , video_data = video_cap.read()
    col = cv2.cvtColor(video_data , cv2.COLOR_BGR2GRAY)
    faces = face_cap.detectMultiScale(col,scaleFactor = 1.2, minNeighbors = 5,minSize=(30,30),flags=1)
    for x,y,w,h in faces:
        cv2.rectangle(video_data, (x,y), (x+w, y+h), (0,255,0),2)
        cv2.imshow("video_live",video_data)
    if cv2.waitKey(10) == ord("a"):
        break
video_cap.release()

finding=pictures[290]
current=video_data
finding=imutils.resize(finding,h=600)
current=imutils.resize(current,h=600)
diff=finding.copy()
cv2.absdiff(finding,current,diff)
gray=cv2.cvtColor(diff,cv2.COLOR_BGR2GRAY)
for i in range(0,3):
    dilated=cv2.dilate(gray.copy(), None ,iterations=i+1)
    (T, thresh) = cv2.threshold(dilated, 3, 255, cv2.THRESH_BINARY)
    cnts = cv2.findContours(thresh, cv2.RETR_LIST, cv2.CHAIN_APPROX_SIMPLE)
    cnts = imutils.grab_contours(cnts)
    for c in cnts:
        (x, y, w, h) = cv2.boundingRect(c)
        cv2.rectangle(current, (x, y), (x + w, y + h), (0, 255, 0), 2)
cv2.imwrite("changes.png", current)
     
 
     
    



    

