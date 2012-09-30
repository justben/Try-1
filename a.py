def rev(a, b = 0):
  if a == 0:
    return b
  else:
    return rev(a / 10, b * 10 + a % 10)

print rev(2132353)
