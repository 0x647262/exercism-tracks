SUFFIXES = {
    1000: ["KB", "MB", "GB", "TB", "PB", "EB", "ZB", "YB"],
    1024: ["KiB", "MiB", "GiB", "TiB", "PiB", "EiB", "ZiB", "YiB"],
}


def approx_size(size, kb_is_1024=True):
    """
    Convert a file size to human-readable form'

    Keyword arguments:
    size -- file size in bytes
    kb_is_1024 -- if True (default), uses multiples of 1024
                  if False, uses multiples of 1000

    Returns: string
    """

    if size < 0:
        raise ValueError("Number must be non-negative")

    multiple = 1024 if kb_is_1024 else 1000
    for suffix in SUFFIXES[multiple]:
        size /= multiple
        if size < multiple:
            return "{0:.1f} {1}".format(size, suffix)

    raise ValueError("Number too large")


if __name__ == "__main__":
    print(approx_size(1000000000000, False))
    print(approx_size(1000000000000))
