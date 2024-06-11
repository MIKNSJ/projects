import pytest
from working import convert

def testing_convert():
    assert convert("2 PM to 3 PM") == "14:00 to 15:00"
    assert convert("2:05 PM to 2:10 PM") == "14:05 to 14:10"
    with pytest.raises(ValueError):
        assert convert("1 PM till 2 PM");
    with pytest.raises(ValueError):
        assert convert("140:00 PM to 123:00 AM");
