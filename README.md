# Bubblesort
Just a simple bubblesort, used to be referenced on article.

This code was used in the first testings of the code to referrence the number of instructions being repeated.
To compile it and get fixed position of code use:

`gcc bubblesort.cpp -no-pie`

To further analyse and check blocks of code use:

`gdb a.out`

To check each function of it in gdb use:

`disasse main`

`disasse Bubblesort`

This will show the assembly instructions built by the compiler:

```
   0x00000000004011c7 <+0>:     endbr64 
   0x00000000004011cb <+4>:     push   %rbp
   0x00000000004011cc <+5>:     mov    %rsp,%rbp
   0x00000000004011cf <+8>:     sub    $0x20,%rsp
   0x00000000004011d3 <+12>:    mov    %rdi,-0x18(%rbp)
   0x00000000004011d7 <+16>:    mov    %esi,-0x1c(%rbp)
   0x00000000004011da <+19>:    movl   $0x1,-0xc(%rbp)
   0x00000000004011e1 <+26>:    movl   $0x0,-0x8(%rbp)
   0x00000000004011e8 <+33>:    mov    -0x1c(%rbp),%eax
   0x00000000004011eb <+36>:    sub    $0x1,%eax
   0x00000000004011ee <+39>:    cmp    %eax,-0x8(%rbp)
   0x00000000004011f1 <+42>:    jge    0x4012a7 <_Z10bubbleSortPii+224>
   0x00000000004011f7 <+48>:    cmpl   $0x1,-0xc(%rbp)
   0x00000000004011fb <+52>:    jne    0x401204 <_Z10bubbleSortPii+61>
   0x00000000004011fd <+54>:    movl   $0x1,-0xc(%rbp)
   0x0000000000401204 <+61>:    movb   $0x0,-0xd(%rbp)
   0x0000000000401208 <+65>:    movl   $0x0,-0x4(%rbp)
   0x000000000040120f <+72>:    mov    -0x1c(%rbp),%eax
   0x0000000000401212 <+75>:    sub    -0x8(%rbp),%eax
   0x0000000000401215 <+78>:    sub    $0x1,%eax
   0x0000000000401218 <+81>:    cmp    %eax,-0x4(%rbp)
   0x000000000040121b <+84>:    jge    0x401295 <_Z10bubbleSortPii+206>
   0x000000000040121d <+86>:    mov    -0x4(%rbp),%eax
   0x0000000000401220 <+89>:    cltq   
   0x0000000000401222 <+91>:    lea    0x0(,%rax,4),%rdx
   0x000000000040122a <+99>:    mov    -0x18(%rbp),%rax
   0x000000000040122e <+103>:   add    %rdx,%rax
   0x0000000000401231 <+106>:   mov    (%rax),%edx
   0x0000000000401233 <+108>:   mov    -0x4(%rbp),%eax
   0x0000000000401236 <+111>:   cltq   
   0x0000000000401238 <+113>:   add    $0x1,%rax
   0x000000000040123c <+117>:   lea    0x0(,%rax,4),%rcx
   0x0000000000401244 <+125>:   mov    -0x18(%rbp),%rax
   0x0000000000401248 <+129>:   add    %rcx,%rax
   0x000000000040124b <+132>:   mov    (%rax),%eax
   0x000000000040124d <+134>:   cmp    %eax,%edx
   0x000000000040124f <+136>:   jle    0x40128c <_Z10bubbleSortPii+197>
   0x0000000000401251 <+138>:   mov    -0x4(%rbp),%eax
   0x0000000000401254 <+141>:   cltq   
   0x0000000000401256 <+143>:   add    $0x1,%rax
   0x000000000040125a <+147>:   lea    0x0(,%rax,4),%rdx
   0x0000000000401262 <+155>:   mov    -0x18(%rbp),%rax
   0x0000000000401266 <+159>:   add    %rax,%rdx
   0x0000000000401269 <+162>:   mov    -0x4(%rbp),%eax
   0x000000000040126c <+165>:   cltq   
   0x000000000040126e <+167>:   lea    0x0(,%rax,4),%rcx
   0x0000000000401276 <+175>:   mov    -0x18(%rbp),%rax
   0x000000000040127a <+179>:   add    %rcx,%rax
   0x000000000040127d <+182>:   mov    %rdx,%rsi
   0x0000000000401280 <+185>:   mov    %rax,%rdi
   0x0000000000401283 <+188>:   callq  0x401196 <_Z4swapPiS_>
   0x0000000000401288 <+193>:   movb   $0x1,-0xd(%rbp)
   0x000000000040128c <+197>:   addl   $0x1,-0x4(%rbp)
   0x0000000000401290 <+201>:   jmpq   0x40120f <_Z10bubbleSortPii+72>
   0x0000000000401295 <+206>:   movzbl -0xd(%rbp),%eax
   0x0000000000401299 <+210>:   test   %eax,%eax
   0x000000000040129b <+212>:   je     0x4012a6 <_Z10bubbleSortPii+223>
   0x000000000040129d <+214>:   addl   $0x1,-0x8(%rbp)
   0x00000000004012a1 <+218>:   jmpq   0x4011e8 <_Z10bubbleSortPii+33>
   0x00000000004012a6 <+223>:   nop
   0x00000000004012a7 <+224>:   nop
   0x00000000004012a8 <+225>:   leaveq 
   0x00000000004012a9 <+226>:   retq  
```
