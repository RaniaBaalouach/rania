#include "libft.h"

// int main()
// {
//     // Basic alphabet tests
//     printf("Testing lowercase 'a': %d\n", ft_isalpha('a'));
//     printf("Testing uppercase 'V': %d\n", ft_isalpha('V'));
//     printf("Testing digit '4': %d\n", ft_isalpha('4'));

//     // Edge cases
//     printf("Testing null character: %d\n", ft_isalpha('\0'));
//     printf("Testing space: %d\n", ft_isalpha(' '));
//     printf("Testing newline: %d\n", ft_isalpha('\n'));

//     // Extended tests
//     printf("Testing first lowercase 'a': %d\n", ft_isalpha('a'));
//     printf("Testing last lowercase 'z': %d\n", ft_isalpha('z'));
//     printf("Testing first uppercase 'A': %d\n", ft_isalpha('A'));
//     printf("Testing last uppercase 'Z': %d\n", ft_isalpha('Z'));

//     // Special characters
//     printf("Testing special char '@': %d\n", ft_isalpha('@'));
//     printf("Testing special char '[': %d\n", ft_isalpha('['));
//     printf("Testing special char '': %d\n", ft_isalpha(' '));
//     printf("Testing special char '{': %d\n", ft_isalpha('{'));

//     // Compare with standard isalpha
//     printf("\nComparing with standard isalpha:\n");
//     char test = 'A';
//     printf("ft_isalpha('%c'): %d\n", test, ft_isalpha(test));
//     printf("isalpha('%c'): %d\n", test, isalpha(test));

//     return (0);
// }

// int main()
// {
//     // Basic digit tests
//     printf("Testing digit '0': %d\n", ft_isdigit('0'));
//     printf("Testing digit '5': %d\n", ft_isdigit('5'));
//     printf("Testing digit '9': %d\n", ft_isdigit('9'));

//     // Edge cases
//     printf("Testing null character: %d\n", ft_isdigit('\0'));
//     printf("Testing space: %d\n", ft_isdigit(' '));
//     printf("Testing newline: %d\n", ft_isdigit('\n'));

//     // Extended tests
//     printf("Testing first digit '0': %d\n", ft_isdigit('0'));
//     printf("Testing last digit '9': %d\n", ft_isdigit('9'));

//     // Testing non-digit characters
//     printf("Testing lowercase 'a': %d\n", ft_isdigit('a'));
//     printf("Testing uppercase 'Z': %d\n", ft_isdigit('Z'));

//     // Special characters
//     printf("Testing special char '@': %d\n", ft_isdigit('@'));
//     printf("Testing special char '[': %d\n", ft_isdigit('['));
//     printf("Testing special char ' ': %d\n", ft_isdigit(' '));
//     printf("Testing special char '{': %d\n", ft_isdigit('{'));

//     // Compare with standard isdigit
//     printf("\nComparing with standard isdigit:\n");
//     char test = 'A';
//     printf("ft_isdigit('%c'): %d\n", test, ft_isdigit(test));
//     printf("isdigit('%c'): %d\n", test, isdigit(test));

//     test = '5';
//     printf("ft_isdigit('%c'): %d\n", test, ft_isdigit(test));
//     printf("isdigit('%c'): %d\n", test, isdigit(test));

//     return (0);
// }

// int main()
// {
//     printf("Testing lowercase 'a': %d\n", ft_isalnum('a'));
//     printf("Testing uppercase 'V': %d\n", ft_isalnum('V'));
//     printf("Testing digit '4': %d\n", ft_isalnum('4'));

//     printf("Testing null character: %d\n", ft_isalnum('\0'));
//     printf("Testing space: %d\n", ft_isalnum(' '));
//     printf("Testing newline: %d\n", ft_isalnum('\n'));

//     printf("Testing first lowercase 'a': %d\n", ft_isalnum('a'));
//     printf("Testing last lowercase 'z': %d\n", ft_isalnum('z'));
//     printf("Testing first uppercase 'A': %d\n", ft_isalnum('A'));
//     printf("Testing last uppercase 'Z': %d\n", ft_isalnum('Z'));

//     printf("Testing special char '@': %d\n", ft_isalnum('@'));
//     printf("Testing special char '[': %d\n", ft_isalnum('['));
//     printf("Testing special char ' ': %d\n", ft_isalnum(' '));
//     printf("Testing special char '{': %d\n", ft_isalnum('{'));

//     printf("\nComparing with standard isalnum:\n");
//     char test = ' ';
//     printf("ft_isalnum('%c'): %d\n", test, ft_isalnum(test));
//     printf("isalnum('%c'): %d\n", test, isalnum(test));

//     test = '5';
//     printf("ft_isalnum('%c'): %d\n", test, ft_isalnum(test));
//     printf("isalnum('%c'): %d\n", test, isalnum(test));

//     return (0);
// }

// int main()
// {
//     printf("Testing lowercase 'a': %d\n", ft_isascii('a'));
//     printf("Testing uppercase 'V': %d\n", ft_isascii('V'));
//     printf("Testing digit '4': %d\n", ft_isascii('4'));

//     printf("Testing null character: %d\n", ft_isascii('\0'));
//     printf("Testing space: %d\n", ft_isascii(' '));
//     printf("Testing newline: %d\n", ft_isascii('\n'));

//     printf("Testing first lowercase 'a': %d\n", ft_isascii('a'));
//     printf("Testing last lowercase 'z': %d\n", ft_isascii('z'));
//     printf("Testing first uppercase 'A': %d\n", ft_isascii('A'));
//     printf("Testing last uppercase 'Z': %d\n", ft_isascii('Z'));

//     printf("Testing special char '@': %d\n", ft_isascii('@'));
//     printf("Testing special char '[': %d\n", ft_isascii('['));
//     printf("Testing special char ' ': %d\n", ft_isascii(' '));
//     printf("Testing special char '{': %d\n", ft_isascii('{'));

//     printf("Testing 128: %d\n", ft_isascii(128));
//     printf("Testing 200: %d\n", ft_isascii(200));
//     printf("Testing -5: %d\n", ft_isascii(-5));

//     printf("\nComparing with standard isascii:\n");
//     char test = -5;
//     printf("ft_isascii('%c'): %d\n", test, ft_isascii(test));
//     printf("isascii('%c'): %d\n", test, isascii(test));

//     return (0);
// }

// int main()
// {
//     printf("Testing lowercase 'a': %d\n", ft_isprint('a'));
//     printf("Testing uppercase 'V': %d\n", ft_isprint('V'));
//     printf("Testing digit '4': %d\n", ft_isprint('4'));

//     printf("Testing null character: %d\n", ft_isprint('\0'));
//     printf("Testing space: %d\n", ft_isprint(' '));
//     printf("Testing newline: %d\n", ft_isprint('\n'));

//     printf("Testing first lowercase 'a': %d\n", ft_isprint('a'));
//     printf("Testing last lowercase 'z': %d\n", ft_isprint('z'));
//     printf("Testing first uppercase 'A': %d\n", ft_isprint('A'));
//     printf("Testing last uppercase 'Z': %d\n", ft_isprint('Z'));

//     printf("Testing special char '@': %d\n", ft_isprint('@'));
//     printf("Testing special char '[': %d\n", ft_isprint('['));
//     printf("Testing special char ' ': %d\n", ft_isprint(' '));
//     printf("Testing special char '{': %d\n", ft_isprint('{'));

//     printf("Testing 128: %d\n", ft_isprint(128));
//     printf("Testing 200: %d\n", ft_isprint(200));
//     printf("Testing -5: %d\n", ft_isprint(-5));

//     printf("\nComparing with standard isprint:\n");
//     char test = -5;
//     printf("ft_isprint('%c'): %d\n", test, ft_isprint(test));
//     printf("isprint('%c'): %d\n", test, isprint(test));

//     return (0);
// }

// int main()
// {
//     // Test cases
//     char *testCases[] = {
//         "hello",
//         "hello#",
//         "Ä",                          // Empty string
//         "   ",                       // String with spaces
//         "1234567890",               // Numeric string
//         "Hello, World!",            // String with punctuation
//         "A very long string for testing purposes to see how ft_strlen handles it.",
	// Long string
//         "\0",                       
	// String with a null character at the start
//         "😊",                       
	// String with a Unicode emoji (if supported)
//         "The quick brown fox jumps over the lazy dog."
	// Common English phrase
//     };

//     // Testing ft_strlen
//     for (size_t i = 0; i < sizeof(testCases) / sizeof(testCases[0]); i++) {
//         printf("ft_strlen(\"%s\") = %ld, strlen(\"%s\") = %ld\n",
//                testCases[i], ft_strlen(testCases[i]), testCases[i],
	// strlen(testCases[i]));
//     }

//     return (0);
// }

// int main()
// {
//     char s[10];

//     ft_memset(s, 124, 4);
//     printf("%s\n", s);

//     memset(s, 124, 4);
//     printf("%s\n", s);

//     return (0);
// }

// int main()
// {
//     // Initialize array with some values
//     unsigned char b[20] = "Hello World!";

//     printf("Before ft_bzero: ");
//     for (int i = 0; i < 12; i++)
//         printf("%d ", b[i]);
//     printf("\n");

//     // Apply ft_bzero to first 4 bytes
//     ft_bzero(b, 4);

//     printf("After ft_bzero:  ");
//     for (int i = 0; i < 12; i++)
//         printf("%d ", b[i]);
//     printf("\n");

//     // Print as string to show the effect
//     printf("As string: %s\n", b);

//     return (0);
// }

// int main()
// {
// 	char dest[] = "";
// 	char src[] = "Hello, World";

// 	ft_memcpy(dest, src, 4);
// 	printf("%s\n", dest);
// 	return (0);
// }

// int main()
// {
//     unsigned char s[10] = "abcdef";

//     ft_memmove(s + 3, s, 4);
//     printf("%s\n", s + 3);

//     unsigned char t[] = "abcdef";

//     memmove(t + 3, t, 4);
//     printf("%s\n", t + 3);

//     return (0);
// }

// int main(void)
// {
//     const char src[] = "Hello_ rania";
//     char dest[20];
//     size_t size;

//     size = 10;

//     printf("%ld\n", ft_strlcpy(dest, src, size));
//     return (0);
// }

// int main()
// {
//     char dest[] = "hello";
//     const char src[] = "! +rania";
//     size_t size;

//     size = 10;
//     printf("%ld\n", ft_strlcat(dest, src, size));
//     printf("%s\n", dest);
// }

// int main(void)
// {
//     char c1 = 'a';
//     char c2 = 'A';
//     char c3 = '5';

//     printf("%c\n", ft_toupper(c1));
//     printf("%c\n", ft_toupper(c2));
//     printf("%c\n", ft_toupper(c3));

//     return (0);
// }

// int main()
// {
// 	char c1 = 'a';
// 	char c2 = 'A';
// 	char c3 = '5';

// 	printf("%c\n", ft_tolower(c1));
//     printf("%c\n", ft_tolower(c2));
//     printf("%c\n", ft_tolower(c3));

//     return (0);
// }

// int main()
// {
//     const char s[] = "Hello #00=";

//     printf("%p\n", ft_strchr(s,'#'));
//     printf("%p\n", &s[6]);
//     printf("%p\n", ft_strchr(s,'a'));
//     printf("%p\n", ft_strchr(s,'\0'));

//     return (0);
// }

// int main()
// {
//     const char s[] = "Hello #00=";

//     printf("%p\n", ft_strrchr(s,'#'));
//     printf("%p\n", &s[6]);
//     printf("%p\n", ft_strrchr(s,'a'));
//     printf("%p\n", ft_strrchr(s,'\0'));

//     return (0);
// }

// int main()
// {
// 	const char s1[] = "hello:> dh";
// 	const char s2[] = "hello:>@";

// 	printf("%d\n", ft_strncmp(s1, s2, 10));

// 	return (0);
// }

// int main()
// {
//     const char s[] = "Hello a#00=";

//     printf("%p\n", ft_memchr(s,'#', 8));
//     printf("%p\n", &s[7]);
//     printf("%p\n", ft_memchr(s,'a', 5));
//     printf("%p\n", ft_memchr(s,'\0', 15));

//     return (0);
// }

// int main()
// {
// 	const char s1[] = "hello:> dh";
// 	const char s2[] = "hello:>@";

// 	printf("%d\n", ft_memcmp(s1, s2, 10));

// 	return (0);
// }

// int main()
// {
//     const char big[] = "hello # 087 jkl";
//     const char little[] = "087";

//     printf("%s\n", ft_strnstr(big, little, 30));

//     return (0);
// }

// int main()
// {
// 	const char nptr[] = "-925809";

// 	printf("%d\n", ft_atoi(nptr));
// 	printf("%d\n", atoi(nptr));

// 	return (0);
// }

// int main() {
//     size_t count;
//     size_t size;

// 	count = 5;
// 	size = sizeof(int);
//     int *arr = (int *)ft_calloc(count, size);

//     if (arr == NULL) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }
//     for (size_t i = 0; i < count; i++) {
//         printf("arr[%zu] = %d\n", i, arr[i]);
//     }

//     free(arr);

//     return (0);
// }

// int main(void)
// {
//     // Test 1: Allocate array of integers
//     printf("Test 1: Array of integers\n");
//     int *arr1 = (int *)ft_calloc(5, sizeof(int));
//     if (arr1)
//     {
//         printf("Allocated array of 5 ints: ");
//         for (int i = 0; i < 5; i++)
//             printf("%d ", arr1[i]);  // Should print zeros
//         printf("\n");
//         free(arr1);
//     }
//     else
//         printf("Allocation failed\n");

//     // Test 2: Allocate array of chars
//     printf("\nTest 2: Array of chars\n");
//     char *arr2 = (char *)ft_calloc(5, sizeof(char));
//     if (arr2)
//     {
//         printf("Allocated array of 5 chars: ");
//         for (int i = 0; i < 5; i++)
//             printf("%d ", arr2[i]);  // Should print zeros
//         printf("\n");
//         free(arr2);
//     }
//     else
//         printf("Allocation failed\n");

//     // Test 3: Zero elements
//     printf("\nTest 3: Zero elements\n");
//     int *arr3 = (int *)ft_calloc(0, sizeof(int));
//     if (arr3)
//     {
//         printf("Allocation with 0 elements succeeded\n");
//         free(arr3);
//     }
//     else
//         printf("Allocation failed\n");

//     // Test 4: Zero size
//     printf("\nTest 4: Zero size\n");
//     void *arr4 = ft_calloc(5, 0);
//     if (arr4)
//     {
//         printf("Allocation with 0 size succeeded\n");
//         free(arr4);
//     }
//     else
//         printf("Allocation failed\n");

//     // Test 5: Large allocation
//     printf("\nTest 5: Large allocation\n");
//     long *arr5 = (long *)ft_calloc(1000, sizeof(long));
//     if (arr5)
//     {
//         printf("Large allocation succeeded. First 5 elements: ");
//         for (int i = 0; i < 5; i++)
//             printf("%ld ", arr5[i]);  // Should print zeros
//         printf("\n");
//         free(arr5);
//     }
//     else
//         printf("Allocation failed\n");

//     // Test 6: Compare with standard calloc
//     printf("\nTest 6: Compare with standard calloc\n");
//     int *std_arr = (int *)calloc(5, sizeof(int));
//     int *ft_arr = (int *)ft_calloc(5, sizeof(int));

//     if (std_arr && ft_arr)
//     {
//         printf("Standard calloc: ");
//         for (int i = 0; i < 5; i++)
//             printf("%d ", std_arr[i]);
//         printf("\nft_calloc:      ");
//         for (int i = 0; i < 5; i++)
//             printf("%d ", ft_arr[i]);
//         printf("\n");
//         free(std_arr);
//         free(ft_arr);
//     }
//     else
//         printf("Allocation failed\n");

//     return (0);
// }

// int main() {
//     const char *original = "Hello444rania ";

//     char *duplicate = ft_strdup(original);

//     if (duplicate == NULL) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     printf("Original: %s\n", original);
//     printf("Duplicate: %s\n", duplicate);

//     free(duplicate);

//     return (0);
// }

// int main()
// {
//     char *original = "Hello, World!";
//     char *substring;

//     substring = ft_substr(original, 7, 5);
//     if (substring)
//     {
//         printf("Substring 1: %s\n", substring);
//         free(substring);
//     }

//     substring = ft_substr(original, 20, 5);
//     if (substring)
//     {
//         printf("Substring 2: %s\n", substring);
//         free(substring);
//     }

//     substring = ft_substr(original, 7, 50);
//     if (substring)
//     {
//         printf("Substring 3: %s\n", substring);
//         free(substring);
//     }

//     return (0);
// }

// int main()
// {
//     char *str1 = "Hello, ";
//     char *str2 = "World!";
//     char *new_str;

//     printf("String 1: '%s'\n", str1);
//     printf("String 2: '%s'\n", str2);

//     new_str = ft_strjoin(str1, str2);

//     if (new_str == NULL) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }

//     printf("Joined String: '%s'\n", new_str);

//     free(new_str);
//     return (0);
// }

// int main()
// {
//     char *s1 = "555Hello ]\\ 1235555";
//     char *set = "532";
//     char *trimmed_str;

//     trimmed_str = ft_strtrim(s1, set);

//     if (trimmed_str == NULL) {
//         printf("Memory allocation failed\n");
//         return (1);
//     }
//     printf("%s\n", trimmed_str);

//     free(trimmed_str);

//     return (0);
// }





// int main()
// {
//     printf("Testing ft_itoa:\n");
//     printf("0: %s\n", ft_itoa(0));
//     printf("-42: %s\n", ft_itoa(-42));
//     printf("42: %s\n", ft_itoa(42));
//     printf("-2147483648: %s\n", ft_itoa(-2147483648));
//     printf("2147483647: %s\n", ft_itoa(2147483647));
//     return (0);
// }






// char test_upper(unsigned int i, char c)
// {
//     (void)i;  // Prevents unused parameter warning
//     if (c >= 'a' && c <= 'z')
//         return (c - 32);
//     return c;
// }

// int main(void)
// {   
//     char *str;

//     // Test uppercase transformation
//     str = ft_strmapi("hello", test_upper);
//     printf("Test uppercase: %s\n", str);
//     free(str);

//     // Test empty string
//     str = ft_strmapi("", test_upper);
//     printf("Test empty string: %s\n", str);
//     free(str);
    
//     // Test NULL string
//     str = ft_strmapi(NULL, test_upper);
//     printf("Test NULL string: %s\n", str == NULL ? "NULL" : str);
    
//     // Test NULL function pointer
//     str = ft_strmapi("hello", NULL);
//     printf("Test NULL function: %s\n", str == NULL ? "NULL" : str);
    
//     return (0);
// }







// void to_uppercase(unsigned int i, char *c)
// {
//     (void)i;  // Avoid unused parameter warning
//     if (*c >= 'a' && *c <= 'z')
//         *c -= 32;
// }

// int main(void)
// {
//     // Test 1: Normal string
//     char str1[] = "hello world";
//     printf("Before: %s\n", str1);
//     ft_striteri(str1, to_uppercase);
//     printf("After: %s\n\n", str1);

//     // Test 2: Empty string
//     char str2[] = "";
//     printf("Before (empty): %s\n", str2);
//     ft_striteri(str2, to_uppercase);
//     printf("After (empty): %s\n\n", str2);

//     // Test 3: String with mixed case
//     char str3[] = "HeLLo WoRLD";
//     printf("Before: %s\n", str3);
//     ft_striteri(str3, to_uppercase);
//     printf("After: %s\n\n", str3);

//     // Test 4: String with non-alphabetic characters
//     char str4[] = "Hello123!@#";
//     printf("Before: %s\n", str4);
//     ft_striteri(str4, to_uppercase);
//     printf("After: %s\n\n", str4);

//     // Test 5: NULL string (should handle this case safely)
//     printf("Testing NULL string...\n");
//     ft_striteri(NULL, to_uppercase);
//     printf("NULL test complete\n");

//     return (0);
// }





// int main(void)
// {
//     // Test 1: Write to standard output (fd = 1)
//     ft_putchar_fd('A', 1);  // Expected: Prints 'A' to standard output

//     // Test 2: Write to standard error (fd = 2)
//     ft_putchar_fd('B', 2);  // Expected: Prints 'B' to standard error

//     // Test 4: Invalid file descriptor
//     ft_putchar_fd('D', -1); // Expected: Nothing happens, as fd is invalid

//     return 0;
// }




// int main(void)
// {
//     // Test different file descriptors
//     printf("Testing stdout (fd=1):\n");
//     ft_putstr_fd("Hello to stdout\n", 1);

//     printf("\nTesting file write:\n");
//     int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1)
//     {
//         ft_putstr_fd("Hello to file\n", fd);
//         close(fd);
//     }

//     printf("\nTesting error cases:\n");
//     // Test NULL
//     printf("Testing NULL string:\n");
//     ft_putstr_fd(NULL, 1);
//     printf("NULL test complete\n");

//     // Test invalid fd
//     printf("\nTesting invalid fd:\n");
//     ft_putstr_fd("This shouldn't print", -1);
//     printf("Invalid fd test complete\n");

//     // Test empty string
//     printf("\nTesting empty string:\n");
//     ft_putstr_fd("", 1);
//     printf("Empty string test complete\n");

//     return (0);
// }




// int main(void)
// {
//     int fd;
//     char buffer[256];
//     ssize_t bytes_read;

//     // Test 1: Standard output
//     printf("=== Test 1: Writing to stdout ===\n");
//     ft_putendl_fd("Hello World", 1);
//     ft_putendl_fd("Second line", 1);
//     printf("Above lines should have newlines automatically\n\n");

//     // Test 2: Writing to file and verifying
//     printf("=== Test 2: Writing to file ===\n");
//     fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1)
//     {
//         ft_putendl_fd("First line", fd);
//         ft_putendl_fd("Second line", fd);
//         ft_putendl_fd("Third line", fd);
//         close(fd);

//         // Read and verify file contents
//         fd = open("test.txt", O_RDONLY);
//         bytes_read = read(fd, buffer, 255);
//         buffer[bytes_read] = '\0';
//         printf("File contents:\n%s", buffer);
//         close(fd);
//     }

//     // Test 3: Empty string
//     printf("\n=== Test 3: Empty string ===\n");
//     ft_putendl_fd("", 1);
//     printf("Above should show just a newline\n\n");

//     // Test 4: NULL string (should handle safely)
//     printf("=== Test 4: NULL string ===\n");
//     ft_putendl_fd(NULL, 1);
//     printf("NULL string test complete\n\n");

//     // Test 5: Invalid fd
//     printf("=== Test 5: Invalid fd ===\n");
//     ft_putendl_fd("This should not be written", -1);
//     printf("Invalid fd test complete\n\n");

//     // Test 6: String with special characters
//     printf("=== Test 6: Special characters ===\n");
//     ft_putendl_fd("Tab\there\nNewline\tTest", 1);
//     printf("Above line should have a newline at the end\n\n");

//     // Test 7: Multiple sequential writes to file
//     printf("=== Test 7: Multiple sequential writes ===\n");
//     fd = open("test_multiple.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1)
//     {
//         ft_putendl_fd("Line 1", fd);
//         ft_putendl_fd("Line 2", fd);
//         ft_putendl_fd("Line 3", fd);
//         close(fd);

//         // Read and verify
//         fd = open("test_multiple.txt", O_RDONLY);
//         bytes_read = read(fd, buffer, 255);
//         buffer[bytes_read] = '\0';
//         printf("Multiple writes file contents:\n%s", buffer);
//         close(fd);
//     }

//     return (0);
// }






// int main(void)
// {
//     int fd;
//     char buffer[100];

//     // Test 1: Standard numbers to stdout
//     printf("\n=== Test 1: Standard numbers ===\n");
//     ft_putnbr_fd(42, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-42, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(0, 1);
//     write(1, "\n", 1);

//     // Test 2: Writing to file
//     printf("\n=== Test 2: Writing to file ===\n");
//     fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1)
//     {
//         ft_putnbr_fd(12345, fd);
//         ft_putchar_fd('\n', fd);
//         ft_putnbr_fd(-12345, fd);
//         ft_putchar_fd('\n', fd);
//         close(fd);

//         // Read and verify file contents
//         fd = open("test.txt", O_RDONLY);
//         int bytes_read = read(fd, buffer, 99);
//         buffer[bytes_read] = '\0';
//         printf("File contents:\n%s", buffer);
//         close(fd);
//     }

//     // Test 3: Edge cases
//     printf("\n=== Test 3: Edge cases ===\n");
//     printf("INT_MAX: ");
//     ft_putnbr_fd(INT_MAX, 1);
//     printf("\nINT_MIN: ");
//     ft_putnbr_fd(INT_MIN, 1);
//     printf("\n");

//     // Test 4: Invalid fd
//     printf("\n=== Test 4: Invalid fd ===\n");
//     ft_putnbr_fd(42, -1);
//     printf("Invalid fd test complete\n");

//     // Test 5: Sequential numbers
//     printf("\n=== Test 5: Sequential numbers ===\n");
//     for (int i = -5; i <= 5; i++)
//     {
//         ft_putnbr_fd(i, 1);
//         write(1, " ", 1);
//     }
//     write(1, "\n", 1);

//     // Test 6: Large numbers
//     printf("\n=== Test 6: Large numbers ===\n");
//     ft_putnbr_fd(123456789, 1);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-123456789, 1);
//     write(1, "\n", 1);

//     // Test 7: Multiple writes to file
//     printf("\n=== Test 7: Multiple writes to file ===\n");
//     fd = open("test_numbers.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
//     if (fd != -1)
//     {
//         for (int i = 0; i < 10; i++)
//         {
//             ft_putnbr_fd(i * i, fd);
//             ft_putchar_fd('\n', fd);
//         }
//         close(fd);

//         // Read and verify
//         fd = open("test_numbers.txt", O_RDONLY);
//         int bytes_read = read(fd, buffer, 99);
//         buffer[bytes_read] = '\0';
//         printf("Square numbers file contents:\n%s", buffer);
//         close(fd);
//     }

//     return (0);
// }





