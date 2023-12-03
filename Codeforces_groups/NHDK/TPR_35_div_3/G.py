s = input()
split = input()
s = s.split(split)
for ss in s:
  if not ss:
    continue
  print(ss)