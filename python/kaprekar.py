# kaprekar's routine
def kaprekar(n: int) -> int:
    
    while n != 6174:
        # sorting
        a = int("".join(sorted(list(str(n)))))               # ascending
        b = int("".join(sorted(list(str(n)), reverse=True))) # descending
        
        # min and max
        biggest  = max(a, b)
        smallest = min(a, b)
        
        # subtration and show
        n = biggest - smallest
        print(n)
        # recursion
        return kaprekar(n)

kaprekar(1568)

# 03.06.2026.