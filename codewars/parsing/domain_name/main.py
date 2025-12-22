def domain_name(url):
    from urllib import parse
    parsing = parse.urlsplit(url).hostname

    if parsing is None:
        if url.split(".")[0] == "www":
            return url.split(".")[1]
        else:
            return url.split(".")[0]

    if parsing.split(".")[0] == "www":
        return parsing.split(".")[1]

    return parsing.split(".")[0]


if __name__ == "__main__":
    print(domain_name("http://github.com/carbonfive/raygun"))
    print(domain_name("https://github.com/carbonfive/raygun"))
    print(domain_name("http://www.zombie-bites.com"))
    print(domain_name("https://123.net"))
    print(domain_name("http://google.co.jp"))
    print(domain_name("www.xakep.ru"))
    print(domain_name("icann.org"))
