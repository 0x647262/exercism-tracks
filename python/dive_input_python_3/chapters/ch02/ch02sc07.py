print("\n#########################################")
print("##### 2.7.1 - Creating A Dictionary #####")
print("#########################################\n")

print("a_dict = {'server': 'db.diveintopython3.org', 'database': 'mysql'}")
a_dict = {'server': 'db.diveintopython3.org', 'database': 'mysql'}
print(a_dict)
print(a_dict['server'])
print(a_dict['database'])
#print(a_dict['db.diveintopython3.org'])

print("\n##########################################")
print("##### 2.7.2 - Modifying A Dictionary #####")
print("##########################################\n")

print(a_dict)
print("a_dict['database'] = 'blog'")
a_dict['database'] = 'blog'
print(a_dict)
print("a_dict['user'] = 'mark'")
a_dict['user'] = 'mark'
print(a_dict)
print("a_dict['user'] = 'dora'")
a_dict['user'] = 'dora'
print(a_dict)
print("a_dict['User'] = 'mark'")
a_dict['User'] = 'mark'
print(a_dict)

print("\n############################################")
print("##### 2.7.3 - Mixed-Value Dictionaries #####")
print("############################################\n")

SUFFIXES = {1000: ['KB', 'MB', 'GB', 'TB', 'PB', 'EB', 'ZB', 'YB'],
            1024: ['KiB', 'MiB', 'GiB', 'TiB', 'PiB', 'EiB', 'ZiB', 'YiB']}

print("len(SUFFIXES) = {0}".format(len(SUFFIXES)))
print("1000 in SUFFIXES = {0}".format(1000 in SUFFIXES))
print("SUFFIXES[1000] = {0}".format(SUFFIXES[1000]))
print("SUFFIXES[1024] = {0}".format(SUFFIXES[1024]))
print("SUFFIXES[1000][3] = {0}".format(SUFFIXES[1000][3]))

print("\n#####################################################")
print("##### 2.7.4 - Dictionaries In A Boolean Context #####")
print("#####################################################\n")

def is_it_true(anything):
    if anything:
       print("Yes, it's true")
    else:
        print("No, it's false")

print("is_it_true({{}}):")
is_it_true({})
print("is_it_true({{'a': 1}}):")
is_it_true({'a': 1})
