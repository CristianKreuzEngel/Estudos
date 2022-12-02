while True:
  try:
    senha=(int(input()))

    if senha==0:
      print("vai ter copa!")
    else:
      print("vai ter duas!")
  except EOFError:
    break