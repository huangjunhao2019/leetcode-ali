from time import time


class Time(object):
    """
        attribute: hour,minute,second
    """
    def __init__(self,hour=0,minute=0,second=0):
        self.hour=hour
        self.minute=minute
        self.second=second

    def __str__(self):
        return "%.2d:%.2d:%.2d"%(self.hour,self.minute,self.second)
    
    def print_time(self):
        print(str(self))

    def time_to_int(self):
        minutes=self.minute+self.hour*60
        seconds=self.second+minutes*60
        return seconds

    def is_after(self,other):
        return self.time_to_int()>other.time_to_int()

    def __add__(self,other):
        if isinstance(other,Time):
            return self.add_time(other)
        else:
            return self.increment(other)
    
    def __radd__(self,other):
        return self.__add__(other)
    def add_time(self,other):
        assert self.is_valid() and other.is_valid()
        seconds=self.time_to_int()+other.time_to_int()
        return int_to_time(seconds)

    def increment(self,seconds):
        seconds+=self.time_to_int()
        return int_to_time(seconds)

    def is_valid(self):
        if self.hour<0 or self.minute<0 or self.second<0:
            return False
        if self.minute>=60 or self.second>=60 or self.hour>=24:
            return False
        return True


def int_to_time(seconds):
    minute,second=divmod(seconds,60)
    hour,minute=divmod(minute,60)
    time=Time(hour,minute,second)
    return time

def main():
    start=Time(9,45,00)
    start.hello=10
    #start.print_time()
    #print("hello"+str(start.hello))
    end=start.increment(1337)
    end.print_time()

    print("Is end after start")
    print(end.is_after(start))

    print("using __str__")
    print(start)
    print(end)

    start=Time(9,45)
    duration=Time(1,35)
    print(start+duration)
    print(start+1337)
    print(start.__dict__)

    print("Example of polymorphism")
    t1=Time(7,43)
    t2=Time(7,41)
    t3=Time(4,37)
    total=sum([t1,t2,t3])
    print(total)

if __name__ == "__main__":
    main()