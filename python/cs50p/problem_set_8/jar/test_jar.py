import pytest
from jar import Jar


def test_init():
    with pytest.raises(ValueError):
        jar = Jar(-1);



def test_str():
    jar = Jar()
    assert str(jar) == ""
    jar.deposit(1)
    assert str(jar) == "🍪"
    jar.deposit(11)
    assert str(jar) == "🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪🍪"


def test_deposit():
    jar = Jar(12);
    with pytest.raises(ValueError):
        assert jar.deposit(14);


def test_withdraw():
    jar = Jar(12);
    with pytest.raises(ValueError):
        assert jar.withdraw(14);
