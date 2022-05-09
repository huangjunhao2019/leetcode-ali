class Time(object):
    """
        attributes: hour, miniute, second
    """
def print_time(t):
    print("%.2d:%.2d:%.2d"%(t.hour,t.minute,t.second))

def int_to_time(seconds):
    time=Time()
    minutes,time.second=divmod(seconds,60)
    time.hour,time.minute=divmod(minutes,60)
    return time

def time_to_int(time):
    minutes=time.hour*60+time.minute
    seconds=minutes*60+time.second
    return seconds

def add_times(t1,t2):
    assert valid_times(t1) and valid_times(t2)
    seconds=time_to_int(t1)+time_to_int(t2)
    return int_to_time(seconds)

def valid_times(time):
    if time.hour<0 or time.minute<0 or time.second<0:
        return False
    if time.minute>60 or time.second>60 or time.hour>24:
        return False
    return True

def main():
    noon_time=Time()
    noon_time.hour=12
    noon_time.minute=0
    noon_time.second=0

    print("Starts at")
    print_time(noon_time)

    movie_minutes=109
    run_time=int_to_time(movie_minutes*60)
    print("run time")
    print_time(run_time)

    end_time=add_times(noon_time,run_time)
    print("Ends at")
    print_time(end_time)

if __name__ == "__main__":
    main()
