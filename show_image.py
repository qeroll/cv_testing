import cv2

def main():
    filename = "/tmp/test.png"
    cv_img = cv2.imread(filename)

    cv2.imshow("test", cv_img)

    if (cv2.waitKey() == 27):
        return

if __name__=="__main__":
    main()

    exit(0)