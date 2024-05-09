print("\n###############################################")
print("##### 4.5.0 - Other Common String Methods #####")
print("###############################################\n")

print("\
s = '''\n\
Finished files are the re-\n\
sult of years of scientif-\n\
ic study combined with the\n\
experience of years.\n\
'''")
s = '''\
Finished files are the re-\n\
sult of years of scientif-\n\
ic study combined with the\n\
experience of years.\
'''

print("s.splitlines() = {0}".format(s.splitlines()))
print("s.lower() = {0}".format(s.lower()))
print("s.lower().count('f') = {0}".format(s.lower().count('f')))

print("query = 'user=pilgrim&database=master&password=PapayaWhip'")
query = 'user=pilgrim&database=master&password=PapayaWhip'

print("a_list = query.split('&')")
a_list = query.split('&')
print("a_list = {0}".format(a_list))

print("a_list_of_lists = [v.split('=', 1) for v in a_list if '=' in v]")
a_list_of_lists = [v.split('=', 1) for v in a_list if '=' in v]
print("a_list_of_lists = {0}".format(a_list_of_lists))

print("a_dict = dict(a_list_of_lists)")
a_dict = dict(a_list_of_lists)
print("a_dict = {0}".format(a_dict))

print("\n####################################")
print("##### 4.5.1 - Slicing A String #####")
print("####################################\n")

print("a_string = 'My alphabet starts where your alphabet ends.'")
a_string = 'My alphabet starts where your alphabet ends.'
print("a_string[3:11] = {0}".format(a_string[3:11]))
print("a_string[3:-3] = {0}".format(a_string[3:-3]))
print("a_string[0:2] = {0}".format(a_string[0:2]))
print("a_string[:18] = {0}".format(a_string[:18]))
print("a_string[18:] = {0}".format(a_string[18:]))
