from plates import is_valid

def test_is_valid():
    assert is_valid("CS50") == True;
    assert is_valid("CS") == True;
    assert is_valid("CS05") == False;
    assert is_valid("CS500000000") == False;
    assert is_valid("4545") == False;
    assert is_valid("CS50S") == False;
    assert is_valid("C50") == False;
    assert is_valid("CS50.") == False;
