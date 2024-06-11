import pytest
from fuel import convert, gauge

def test_convert():
    with pytest.raises(ValueError):
        assert convert("2.5/3");

    with pytest.raises(ValueError):
        assert convert("4/3");

    with pytest.raises(ZeroDivisionError):
        assert convert("4/0");

    assert convert("3/4") == 75;

def test_gauge():
    assert gauge(1) == "E";
    assert gauge(99) == "F";
    assert gauge(75) == "75%";
