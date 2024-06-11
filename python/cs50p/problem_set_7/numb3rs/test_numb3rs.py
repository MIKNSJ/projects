from numb3rs import validate

def test_validate():
    assert validate("0.0.0.0") == True;
    assert validate("1.256.59.19") == False;
