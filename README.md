# data-struct-helper

Provide data structer helper in c

# hash

example

```c
uint64_t h1, h2;
h1 = siphash((uint8_t*)"hello world",11,(uint8_t*)"1234567812345678");
h2 = siphash_nocase((uint8_t*)"hello world",11,(uint8_t*)"1234567812345678");
```
