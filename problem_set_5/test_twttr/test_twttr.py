from twttr import shorten

def test_shorten():
    assert shorten("twt") == "twt";
    assert shorten("twEt") == "twt";
    assert shorten("twet") == "twt";
    assert shorten("tw2t") == "tw2t";
    assert shorten("TWT") == "TWT";
    assert shorten("tw.t") == "tw.t";
