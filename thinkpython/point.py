import math
import copy
class Point(object):
    """"""
def print_point(p):
    print(str(p.x)+" "+str(p.y))
class Rectangle(object):
    """"""
def find_center(rect):
    p=Point()
    p.x=rect.corner.x+rect.width/2.0
    p.y=rect.corner.y+rect.height/2.0
    return p
def grow_rectangle(rect,dwidth,dheight):
    rect.width+=dwidth
    rect.height+=dheight
def distance_between_points(p1,p2):
    return math.sqrt((p2.x-p1.x)*(p2.x-p1.x)+(p2.y-p1.y)*(p2.y-p1.y))

def move_rectangle(rect,x,y):
    rect.corner.x+=x
    rect.corner.y+=y

def main():
    blank=Point()
    blank.x=3
    blank.y=4
    print("blank")
    print_point(blank)

    box=Rectangle()
    box.width=100.0
    box.height=200.0
    box.corner=Point()
    box.corner.x=0.0
    box.corner.y=0.0

    center=find_center(box)
    print("center")
    print_point(center)

    print(box.width)
    print(box.height)
    print("grow")
    grow_rectangle(box,50,100)
    print(box.width)
    print(box.height)

    p1=Point()
    p2=Point()
    p1.x=0
    p1.y=0
    p2.x=2
    p2.y=2
    print("distance "+str(distance_between_points(p1,p2)))
    move_rectangle(box,10,20);
    print("move_rectangle")
    print_point(box.corner)
    print(box.width)
    print(box.height)
    p3=copy.copy(p1)
    print(p3 is p1)
if __name__ == "__main__":
    main()