def getPhoneNumber(s):
    num={"zero":0,"one":1,"two":2,"three":3,"four":4,"five":5,"six":6,"seven":7,"eight":8,"nine":9}
    m=s.split()
    phone_number=""
    for q,p in enumerate(m):
        if p == "double":
            p = m[q+1]
        if p == "triple":
            p = m[q+1]
            phone_number += str(num[p])
        for words,nums in num.items():
            if p == words:
                phone_number += str(nums)
    return phone_number