class Item:
    # Implement the Item here
    def __init__(self, name: str, price: int):
        self.name = name 
        self.price = price 
        


class ShoppingCart:
    # Implement the ShoppingCart here
    def __init__(self):
        self.article = []
    
    def add(self, item: Item):
        self.article.append(item)
    
    def total(self) -> int:
        return sum(item.price for item in self.article)
    
    def __len__(self) -> int: 
        return len(self.article)

a_item = Item("mause", 100)
b_item = Item("keyboard", 200)
c_item = Item("usb", 300)



my_car = ShoppingCart()
my_car.add(a_item)
my_car.add(b_item)
my_car.add(b_item)

print(my_car.article)
