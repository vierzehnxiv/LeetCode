# fizzbuzz.S
# Adapted for LeetCode Fizz Buzz problem
# Returns a code indicating the string to use for a given number i:
# 0 = "FizzBuzz", 1 = "Fizz", 2 = "Buzz", 3 = number as string
# Input: %rdi = i (current number)
# Output: %rax = code (0, 1, 2, or 3)

.global get_fizzbuzz_string
.data
  fizzbuzz_string:  .string "FizzBuzz"
  fizz_string:      .string "Fizz"
  buzz_string:      .string "Buzz"

.text
get_fizzbuzz_string:
  push %rbp
  mov %rsp, %rbp
  push %rbx

  # Check if i % 3 == 0 && i % 5 == 0
  mov %rdi, %rax
  xor %rdx, %rdx
  mov $3, %rbx
  div %rbx
  test %rdx, %rdx
  jnz not_fizzbuzz

  mov %rdi, %rax
  xor %rdx, %rdx
  mov $5, %rbx
  div %rbx
  test %rdx, %rdx
  jnz not_fizzbuzz

  # Return code 0 for "FizzBuzz"
  mov $0, %rax
  jmp end

not_fizzbuzz:
  # Check if i % 3 == 0
  mov %rdi, %rax
  xor %rdx, %rdx
  mov $3, %rbx
  div %rbx
  test %rdx, %rdx
  jnz not_fizz

  # Return code 1 for "Fizz"
  mov $1, %rax
  jmp end

not_fizz:
  # Check if i % 5 == 0
  mov %rdi, %rax
  xor %rdx, %rdx
  mov $5, %rbx
  div %rbx
  test %rdx, %rdx
  jnz not_buzz

  # Return code 2 for "Buzz"
  mov $2, %rax
  jmp end

not_buzz:
  # Return code 3 for number as string
  mov $3, %rax

end:
  pop %rbx
  mov %rbp, %rsp
  pop %rbp
  ret
