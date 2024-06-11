class Jar:
    def __init__(self, capacity=12):
        self.capacity = capacity;
        self.size = 0;

    def __str__(self):
        return "🍪" * self._size;

    def deposit(self, n):
        if (self._size + n > self._capacity):
            raise ValueError();

        self._size+=n;

    def withdraw(self, n):
        if (n > self._size):
            raise ValueError();

        self._size-=n;

    @property
    def capacity(self):
        return self._capacity;

    @property
    def size(self):
        return self._size;

    @capacity.setter
    def capacity(self, capacity):
        if (capacity < 0):
            raise ValueError();

        self._capacity = capacity;

    @size.setter
    def size(self, size):
        self._size = size;

#def main():
    #jar = Jar(0);
    #print(jar.capacity);
    #print(jar.size);
    #jar.deposit(14);
    #jar.withdraw(0);
    #print(jar.capacity);
    #print(jar.size);

#main();
