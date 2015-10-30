glob_cnt = {}

def key_or_incr(word):
    if glob_cnt.has_key(word):
        glob_cnt[word]+=1
    else:
        glob_cnt.update({word:1})


if __name__=='__main__':
    # Reads a paragraph of text
    para = open("para.txt","r")
    word_list = para.read().split(" ")
    # update the count entries for each word
    for word in word_list:
        key_or_incr(word.lower())
    
    # Display the word with their count
    for k,v in glob_cnt.items():
        print (k,v)
