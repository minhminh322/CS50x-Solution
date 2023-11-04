class Jar:
    def __init__(self, capacity = 12):
        # Error condition
        if capacity < 0:
            raise ValueError("Jar's capacity must be a non-negative integer!")
        # Setter method to modify private attribute
        self._capacity = capacity
        self._size = 0


    def __str__(self):
        # Use emoji to represent number of cookies
        return "🍪" * self._size

    def deposit(self, n):
        # Error condition
        if n + self.size > self.capacity:
            raise ValueError("Deposit exceed the cookie jar's capacity")
        # Add n cookies
        self._size += n
    def withdraw(self, n):
        # Error condition
        if n > self.size:
            raise ValueError("Can't withdraw that much")
        # Remove n cookies
        self._size -= n

    @property
    def capacity(self):
        return self._capacity

    @property
    def size(self):
        return self._size

def main():
    jar = Jar()
    # print(jar.capacity)
    print(str(jar.size))
    jar.deposit(2)
    print(str(jar))
    jar.withdraw(1)
    print(str(jar))

main()
