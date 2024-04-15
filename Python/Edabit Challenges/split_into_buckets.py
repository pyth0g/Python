def split_into_buckets(phrase, n):
    result = [""]
    final = []
    phrases = phrase.replace(" ","|").split("|")
    c = 0
    for i in phrases:
        if len(i) > n:
            return []
    for phrase in phrases:
        if len(phrase) + len(result[c]) <= n:
            result[c] += phrase + " "
        else:
            c += 1
            result.append(phrase + " ")
    for i in result:
        if i:
            if i[-1] == " ":
                final.append(i[:-1])
            else:
                final.append(i)
    return final

print(split_into_buckets("This is a test of the split into buckets funciton", 12))