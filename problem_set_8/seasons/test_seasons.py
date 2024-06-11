import pytest;
from seasons import age

def test_age():

    with pytest.raises(SystemExit):
        assert age("Jan 23, 2023");
