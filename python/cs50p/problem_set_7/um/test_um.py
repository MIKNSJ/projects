from um import count


def test_count():
    assert count("sum") == 0;
    assert count(" um ") == 1;
    assert count("Um") == 1;
