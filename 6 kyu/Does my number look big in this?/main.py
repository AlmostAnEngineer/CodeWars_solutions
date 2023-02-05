def narcissistic( value ):
    st = str(value)
    n = len(st)
    Total = 0
    for it in st:
        Total += int(it) ** n
    return Total == value
