#write function for permutation
def permutation(str1,str2):
    if len(str1) != len(str2):
        return False
    else:
        for i in range(len(str1)):
            if str1[i] not in str2:
                return False
        return True


#write function for anagram
def anagram(str1,str2):
    if len(str1) != len(str2):
        return False
    else:
        str1 = str1.replace(" ","").lower()
        str2 = str2.replace(" ","").lower()
        return sorted(str1) == sorted(str2)

#write function for mongodb connection
def mongo_connect(url):
    try:
        conn = pymongo.MongoClient(url)
        print("Connected to MongoDB")
        return conn
    except pymongo.errors.ConnectionFailure as e:
        print("Could not connect to MongoDB: %s" %e)
        return None