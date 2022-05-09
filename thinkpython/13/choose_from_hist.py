import random
def choose_from_hist(hist):
    word=[]
    for key,val in hist.items():
        for i in range(val):
            word.append(key)
    return random.choice(word)
def main():
    d={'a':2,'b':1}
    for i in range(10):
        print(choose_from_hist(d))
if __name__ == "__main__":
    main()