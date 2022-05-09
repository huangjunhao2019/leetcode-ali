import string
def process_file(filename):
    hist=dict()
    fp=open(filename)
    for line in fp:
        process_line(line,hist)
    return hist
def process_line(line,hist):
    line=line.replace('-',' ')
    for word in line.split():
        word=word.strip(string.punctuation+string.whitespace)
        word=word.lower()
        hist[word]=hist.get(word,0)+1
def different_words(hist):
    print(len(hist))
def total_words(hist):
    return sum(hist.values())
def most_common(hist):
    t=[]
    for key,value in hist.items():
        t.append((value,key))
    t.sort(reverse=True)
    return t
hist=process_file('./pg67944.txt')
print(total_words(hist))
print(different_words(hist))
t=most_common(hist)
for freq,key in t[0:10]:
    print(key+" %d"%freq)