from bank import value

def test_value():
    assert value("hello") == 0;
    assert value("H") == 20;
    assert value("Hello, We the ones!") == 0;
