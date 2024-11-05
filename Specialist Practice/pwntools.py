s = "LITCTF{++++++++++++++++++++++++++++++++++}"
def cheese(s):
    sl = list(s)
    sl[13] = '_'
    sl[17] = chr(95)
    sl[19] = '_'
    sl[26] = chr( 190 - ord(sl[19]))
    sl[29] = '_'
    sl[34] = chr(85)
    sl[39] = '_'
    new_s = ''.join(sl)  # Convert the list back to a string
    return new_s


def meat(s):
    s_list = list(s)  # Convert the string to a list to allow modifications
    m = 41
    meat = ['n', 'w', 'y', 'h', 't', 'f', 'i', 'a', 'i']
    dif = [4, 2, 2, 2, 1, 2, 1, 3, 3]
    
    for i in range(len(meat)):
        m -= dif[i]
        if s_list[m] != meat[i]:
            s_list[m] = meat[i]  # Modify the character in the list
    
    new_s = ''.join(s_list)  # Convert the list back to a string
    return new_s

def check_digits(s):
    is_digit = [False, False, False, True, False, True, False, False, True, False, False, False, False, False]
    sl = list(s)
    for i in range(7, 21):
        if sl[i].isdigit() != is_digit[i - 7]:
            sl[i] = '9'
    
    new_s = ''.join(sl)
    return new_s

def check_sauce(s):
    sl = list(s)
    sauce = ['b', 'p', 'u', 'b', 'r', 'n', 'r', 'c']
    a = 7
    b = 20
    i = 0
    good = True
    
    while a < b:
        if sl[a] != sauce[i] or sl[b] != sauce[i + 1]:
            sl[a] = sauce[i]
            sl[b] = sauce[i+1]
        
        a += 1
        b -= 1
        i += 2
        
        # Skip non-letter characters
        while a < len(s) and (sl[a] == '9' or sl[a] == '_'):
            a += 1
        while b >= 0 and (sl[b] == '9' or sl[b] == '_'):
            b -= 1
    
    new_s = ''.join(sl)
    return new_s



#meat
new_s = cheese(s)
new_s = meat(new_s)
new_s = check_digits(new_s)
new_s = check_sauce(new_s)
print(new_s)

#  LITCTF{++++++++++++++i++a++if+th+y+w+n+++}

#10, 12, 15, 22, 23, 25, 32, 36, 38, 40
# 0   1   2   3   4   5   6   7   8   9
#   9    5  4   2    2   5  3   4   7  2
# 7 = 4
# 8 = 7
# 9 = 2

# LITCTF{bur9r5_c4n_b_pi22a5_if_th3y_w4n7_2}