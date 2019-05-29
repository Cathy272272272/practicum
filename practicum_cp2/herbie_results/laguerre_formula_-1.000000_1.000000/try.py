str ="\
template <class _Real>\n\
_Real __libcpp_hermite_recurrence(unsigned __n, _Real __x) {\n\
    if (__n == 0u)\n\
        return _Real(1);\n\
            \n\
    _Real __t2(1);\n\
    _Real __t1 = _Real(2) * __x;\n\
    for (unsigned __i = 1; __i < __n; ++__i) {\n\
        const _Real __t0 = _Real(2) * (__x * __t1 - _Real(__i) * __t2);\n\
        __t2 = __t1;\n\
        __t1 = __t0;\n\
    }\n\
    return __t1;\n\
}\n\
rel = __libcpp_hermite_recurrence("
print(str)
