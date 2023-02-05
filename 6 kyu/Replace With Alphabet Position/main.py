def alphabet_position(text):
    final = ""
    text = text.upper()
    if(len(text) == 0):
        return ''
    for ch in text:
        if(ord(ch)-64 <= 0):
            pass
        else:
            final += str(ord(ch) - 64) + " "
    return final[:-1]
