print("\n#############################")
print("##### Strings VS. Bytes #####")
print("#############################\n")

print("by = b'abcd\x65'")
by = b'abcd\x65'
print("by = {0}".format(by))
print("type(by) = {0}".format(type(by)))
print("len(by) = {0}".format(len(by)))
print("by += b'\xff'")
by += b'\xff'
print("by = {0}".format(by))
print("len(by) = {0}".format(len(by)))
print("by[0] = {0}".format(by[0]))

print("by = b'abcd\x65'")
by = b'abcd\x65'
print("barr = bytearray(by)")
barr = bytearray(by)
print("barr = {0}".format(barr))
print("len(barr) = {0}".format(len(barr)))
print("barr[0] = 102")
barr[0] = 102
print("barr = {0}".format(barr))

print("a_string = '深入 Python'")
a_string = '深入 Python'
print("len(a_string) = {0}".format(len(a_string)))
print("by = by = a_string.encode('utf-8')")
by = a_string.encode('utf-8')
print("by = {0}".format(by))
print("len(by) = {0}".format(len(by)))
print("by = a_string.encode('gb18030')")
by = a_string.encode('gb18030')
print("by = {0}".format(by))
print("by = a_string.encode('big5')")
by = a_string.encode('big5')
print("by = {0}".format(by))
print("len(by) = {0}".format(len(by)))
print("roundtrip = by.decode('big5')")
roundtrip = by.decode('big5')
print("roundtrip = {0}".format(roundtrip))
print("a_string == roundtrip = {0}".format(a_string == roundtrip))
