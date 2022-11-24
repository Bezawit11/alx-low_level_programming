import uuid
from datetime import datetime
class BaseModel:
    def __init__(self, *args, **kwargs):
        if kwargs:
            for key, value in kwargs.items():
                if key == 'id':
                    self.id = value
                elif key == 'created_at':
                    self.created_at = datetime.now()
                elif key == 'updated_at':
                    self.updated_at = datetime.now()
        else:
            
            self.id = uuid.uuid4()
            self.created_at = datetime.now()
            self.updated_at = datetime.now()
    def __str__(self):
        return f"{self.__class__.__name__} ({self.id}) <{self.__dict__}>"
    def save(self):
        self.updated_at = datetime.now()
    def to_dict(self):
        self.__dict__['__class__'] = __class__.__name__
        self.__dict__['created_at'] = self.created_at.isoformat()
        self.__dict__['updated_at'] = self.updated_at.isoformat()
        return self.__dict__
