# stdstring

A small library to provide various string functions.

# Build example

```
$ make
$ ./example
```

# Usage
```C
bool string_is_empty(const char *data);

bool string_is_equal(const char *a, const char *b);
bool string_is_equal_case(const char *a, const char *b);

bool string_starts_with(const char *str, const char *prefix);
bool string_starts_with_case(const char *str, const char *prefix);

bool string_ends_with(const char *str, const char *suffix);
bool string_ends_with_case(const char *str, const char *suffix);

char *string_to_upper(char *s);
char *string_to_lower(char *s);
char *string_ucwords(char *s);

char *string_init(const char *src);
char *string_to_upper(char *s);
char *string_to_lower(char *s);
char *string_ucwords(char *s);

char *string_trim_left(char *s);
char *string_trim_right(char *s);
char *string_trim(char *s);

int string_split(const char *s, const char *delim, char *parts[], size_t count);
```