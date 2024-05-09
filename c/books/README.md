# Useful resources for C programming:

## Format:

> If you are extending, enhancing, or bug fixing already implemented code, use
the style that is already being used so that the source is uniform and easy to
follow.

> --- http://llvm.org/docs/CodingStandards.html

##### File Layout:

Use a slightly modified Suckless coding style:

* Comment with a short explanation of the file.
* Headers Macros Types Function declarations Exclude variable names Exclude
for short files Order in a.
* logical manner Global variables Functions in the order of their definition.
* <code>main()</code>

##### C Features:

Use a slightly modified Suckless featureset:

* Use C11 w/o extensions Compile with flags: -std=c11 $ALL_WARNINGS $PEDANTIC
* Do not mix declarations and code Do not use for loop initial declarations Use
/\* Comment \*/ for comments, not // Comment Variadic macros are acceptable,
but remember: <code>__VA_ARGS__</code> not a named parameter Arg list cannot be
empty

##### Blocks:

Slightly modified Suckless block:

* All variable declarations at top of block { on same line preceded by single
space } on own line unless continuing statement (if else, do while, ...)
* Always use blocks for single statements

##### Whitespace:

Ideally we let clang-format take care of this for us, but if we need to do
things manually:

* Use tabs for indentation Use spaces for alignment This means no tabs except
beginning of line Everything will line up independent of tab size Use spaces
not tabs for multiline macros as the indentation level is 0, where the #define
began

##### Functions:

* Return type and modifiers own line Function name and argument list on next
line Opening { on own line (function definitions are a special case of blocks
as they cannot be nested)
* Functions not used outside translation unit should be declared and defined
static

##### Variables:

* Global variables not used outside translation unit should be declared static.
* In declaration of pointers the * is adjacent to variable name, not type.

##### Keywords:

* Use a space after if, for, while, switch (they are not function calls) Do not
use a space after the opening ( and before the closing ) Always use () with
sizeof Do not use a space with sizeof() (it does act like a function call)

##### Switch:

* Do not indent cases another level Comment cases that FALLTHROUGH

##### Headers:

* Place system/libc headers first in alphabetical order If headers must be
included in a specific order comment to explain Place local headers after an
empty line When writing and using local headers: Do not use #ifndef guards
Instead ensure they are included where and when they are needed.

See:
* https://talks.golang.org/2012/splash.article#TOC_5
* http://plan9.bell-labs.com/sys/doc/comp.html

##### User Defined Types:

* Do not use type\_t naming (it is reserved for POSIX and less readable)
* Typedef structs Do not typedef builtin types Capitalize the type name Typedef
the type name, if possible without first naming the struct:

    typedef struct { double x, y, z; } Point;

##### Line Length:

* Keep lines to reasonable length (current debate as to reasonable) 80 to 100
    * characters is generally acceptable If your lines are too long your code
is likely too complex

##### Tests and Boolean Values:

* Do not test against NULL explicitly Do not test against 0 explicitly Do not
* use bool types (stick to integer types) Assign at declaration when possible:
    Type *p = malloc(sizeof(*p)); if (!p) hcf();
* Otherwise use compound assignment and tests unless the line grows too long:
    if (!(p = malloc(sizeof(*p)))) hcf();

##### Handling Errors:

* When functions return -1 for error test against 0 not -1:
    if (func() < 0) hcf();
* Use goto to unwind and cleanup when necessary instead of multiple nested
levels
* <code>return()</code> or <code>exit()</code> early on failures instead of
multiple nested levels
* Unreachable code should have a NOTREACHED comment Think long and hard on
* whether or not you should cleanup on fatal errors

##### <code>Enums</code> vs <code>#define</code>

* Use enums for values that are grouped semantically and #define otherwise.
    #define MAXSZ  4096 #define MAGIC1 0xdeadbeef

    enum { DIRECTION_X, DIRECTION_Y, DIRECTION_Z };

## Tools:

* make clang clang-analyzer clang-tools GCC

## Scripts:

Source: https://matt.sh/howto-c


c-cleanup: #!/usr/bin/env bash

    clang-tidy \ -fix \ -fix-errors \ -header-filter=.* \
    --checks=readability-braces-around-statements,misc-macro-parentheses \ $1 \
    -- -I.

c-format: #!/usr/bin/env bash

    clang-format -style="{ BasedOnStyle: Chromium, IndentWidth: 4,
    AllowShortFunctionsOnASingleLine: None, KeepEmptyLinesAtTheStartOfBlocks:
        false }" "$@"

## Online:

Programming in C is a polarizing topic... Please read everything with a grain
of salt.

### Good reads:

* https://matt.sh/howto-c
* https://github.com/Keith-S-Thompson/how-to-c-response/blob/master/README.md
* http://blog.erratasec.com/2016/01/some-notes-c-in-2016.html

### "Exceptional" C:

* http://www.openbsd.org/cgi-bin/man.cgi/OpenBSD-current/man9/style.9?query=style&arch=i386
* http://cvsweb.openbsd.org/cgi-bin/cvsweb/ https://github.com/tj90241/cen64
* https://github.com/mgba-emu/mgba http://suckless.org/
