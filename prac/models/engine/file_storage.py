from os.path import exists
class FileStorage:
    __file_path = "C:/Users/HP/PycharmProjects/pythonProject1/file.json"
    __objects = {}  # dictionary - empty but will store all objects by <class name>.id

    def all(self):
        print("all")
        return self.__objects

    def new(self, obj):
        """sets in __objects the obj with key <obj class name>.id"""
        self.__objects['obj.__class__.__name__.id'] = obj

    def save(self):
        print("saving")
        with open(self.__file_path, mode='w', encoding="utf-8") as f:
            json.dump(self.__objects, f)

    def reload(self):
        if exists(self.__file_path):
            with open(self.__file_path, "r", encoding="utf-8") as f:
                return json.load(f)
        else:
            return False
