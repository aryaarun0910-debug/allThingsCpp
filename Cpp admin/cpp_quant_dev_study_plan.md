# C++ to Quant Dev/SWE Interview-Ready: 22-Week Study Plan

**Goal:** Go from zero C++ to competitive applications at HFT and quant firms (SWE & Quant Dev roles)
**Timeline:** ~22 weeks (target: August 2026)
**Weekly commitment:** 15–20 hours

---

## Phase 1 — Language Foundations (Weeks 1–4)

### Week 1: Environment, Types, Control Flow

**Topics:**
- Setting up GCC/Clang, compiling from the command line
- Fundamental types: `int`, `double`, `char`, `bool`, `std::string`
- Operators, expressions, type conversions (implicit and explicit)
- `if`/`else`, `switch`, `while`, `for`, range-based `for`
- Basic I/O with `std::cin` / `std::cout`
- Compilation flags: always compile with `-Wall -Wextra -std=c++20`

**Resources:**
- Learncpp.com Chapters 1–8
- Install and configure VS Code with C++ extensions (or CLion if you prefer an IDE)

**Practice:**
- HackerRank: Complete the entire "C++ Introduction" section (8 problems)
- HackerRank: "Strings" section (3–4 problems)
- Write 3 small programs from scratch: temperature converter, FizzBuzz, basic calculator with input validation

**Deliverable:** A GitHub repository (`cpp-learning`) initialised this week. Every piece of code you write goes here. Commit daily. This becomes a visible record of your progression that you can reference in applications.

---

### Week 2: Functions, Scope, and Arrays

**Topics:**
- Function declarations, definitions, overloading
- Pass by value vs pass by reference vs pass by `const` reference
- Scope, lifetime, linkage (internal vs external)
- `std::array` and `std::vector` (introduction)
- Header files, include guards, forward declarations
- Namespaces

**Resources:**
- Learncpp.com Chapters 9–13
- Begin reading *A Tour of C++* (Stroustrup), Chapters 1–3

**Practice:**
- LeetCode Easy (do all in C++): Two Sum (#1), Palindrome Number (#9), Valid Parentheses (#20), Merge Two Sorted Lists (#21)
- HackerRank: "Functions" section, "Arrays" section (the C++ track)
- Write a multi-file program: a small statistics library (mean, median, std dev) split across header and source files, compiled manually with `g++`

**Deliverable:** The statistics library as a clean multi-file project in your repo with a README explaining how to compile it.

---

### Week 3: Pointers, Memory, and References

**Topics:**
- Pointers: declaration, dereferencing, pointer arithmetic
- Stack vs heap allocation (`new` / `delete`)
- Why manual memory management is dangerous (dangling pointers, leaks, double free)
- References vs pointers — when to use which
- `const` pointers vs pointer-to-`const`
- Introduction to RAII: the core idea that resource lifetime is tied to object lifetime
- `nullptr` and why it replaced `NULL`

**Resources:**
- Learncpp.com Chapters 14–17
- CppCon Back to Basics: "Pointers and Memory" (any recent year)

**Practice:**
- LeetCode Easy: Reverse Linked List (#206), Linked List Cycle (#141), Remove Duplicates from Sorted Array (#26)
- Implement a dynamic array class from scratch: constructor, destructor, `push_back`, `operator[]`, `size`. This forces you to use `new[]`/`delete[]` and understand when destructors run.

**Deliverable:** Your custom `DynamicArray` class with a `main.cpp` that exercises all operations and prints results. Include comments explaining ownership at each step.

---

### Week 4: OOP, RAII, and Smart Pointers

**Topics:**
- Classes: constructors, destructors, member functions, access specifiers
- The Rule of Three → Rule of Five → Rule of Zero
- Copy constructor, copy assignment, move constructor, move assignment
- `std::unique_ptr` and `std::shared_ptr` — ownership semantics
- `std::make_unique`, `std::make_shared`
- Inheritance basics and virtual functions (keep it brief — you'll revisit this)
- Operator overloading fundamentals

**Resources:**
- Learncpp.com Chapters 18–25
- *A Tour of C++* Chapters 4–5
- CppCon Back to Basics: "RAII and the Rule of Zero" (Arthur O'Dwyer)

**Practice:**
- LeetCode Easy: Implement Stack using Queues (#225), Min Stack (#155)
- Refactor your Week 3 `DynamicArray` to use smart pointers and follow Rule of Five. Then refactor again to follow Rule of Zero using `std::vector` internally. Write both versions and compare.
- HackerRank: "Classes" section in C++ track

**Deliverable:** Both versions of DynamicArray (manual memory vs smart pointer/Rule of Zero) in your repo, with a short markdown doc explaining what changed and why the Rule of Zero version is preferable.

**Phase 1 Checkpoint:** Set up CMake. Take your statistics library from Week 2 and your DynamicArray from Week 4, and build them both under a single CMakeLists.txt with proper target definitions. Follow the "Modern CMake" guide by Henry Schreiner (free online). From this point forward, every project uses CMake.

---

## Phase 2 — Intermediate C++ for Quant Dev (Weeks 5–10)

### Week 5: The STL — Containers and Iterators

**Topics:**
- Sequence containers: `std::vector`, `std::deque`, `std::list`, `std::array`
- Associative containers: `std::map`, `std::set`, `std::unordered_map`, `std::unordered_set`
- Container adaptors: `std::stack`, `std::queue`, `std::priority_queue`
- Iterator categories and range-based patterns
- **Complexity guarantees of every container** — this gets asked directly in interviews
- When to use what: cache performance of `std::vector` vs `std::list`, ordered vs unordered, `std::map` vs `std::unordered_map`

**Resources:**
- *Effective Modern C++* (Scott Meyers): Items 1–4 (type deduction, `auto`)
- cppreference.com — get comfortable navigating this; it's the definitive reference
- CppCon: "The Standard Library" Back to Basics talk

**Practice:**
- LeetCode Medium: Group Anagrams (#49), Top K Frequent Elements (#347), LRU Cache (#146), Kth Largest Element (#215)
- For each problem, explicitly choose your container and justify the choice in a comment
- HackerRank: "STL" section (all problems)

**Deliverable:** A markdown cheat sheet in your repo: every major STL container, its time complexities for insert/lookup/delete, iterator invalidation rules, and a one-line note on when to use it. Writing this yourself is the exercise.

---

### Week 6: Algorithms, Lambdas, and Functional Patterns

**Topics:**
- `<algorithm>` header: `std::sort`, `std::find`, `std::transform`, `std::accumulate`, `std::partition`, `std::lower_bound`, `std::upper_bound`
- Lambda expressions: capture by value, capture by reference, generic lambdas
- `std::function` and callable objects
- `<numeric>` header basics
- Comparators and custom sorting

**Resources:**
- *Effective Modern C++*: Items 31–34 (lambdas)
- Learncpp.com chapters on lambdas and algorithms
- Jason Turner's C++ Weekly: episodes on lambdas (search his playlist)

**Practice:**
- LeetCode Medium: Sort Colors (#75), Merge Intervals (#56), Search in Rotated Sorted Array (#33)
- Rewrite solutions to previous LeetCode problems using STL algorithms instead of manual loops where possible
- Write a data processing pipeline: read a CSV of numbers, filter outliers (>2σ), sort, compute statistics — all using STL algorithms and lambdas with no raw loops

**Deliverable:** The CSV pipeline program. Clean, modern C++, no raw loops, CMake build.

---

### Week 7: Move Semantics and Resource Management (Deep Dive)

**Topics:**
- Lvalues vs rvalues vs xvalues — value categories
- `std::move` — what it actually does (a cast, not a move)
- Move constructors and move assignment operators
- Return value optimisation (RVO, NRVO) — when moves don't even happen
- Perfect forwarding and `std::forward` (conceptual understanding)
- `noexcept` and why it matters for move operations
- When moving is slower than copying (small objects)

**Resources:**
- *Effective Modern C++*: Items 23–30 (the move semantics and forwarding chapter)
- CppCon: "Move Semantics" Back to Basics by Klaus Iglberger
- CppCon: "Understanding Value Categories" by Ben Deane

**Practice:**
- LeetCode Medium: Swap Nodes in Pairs (#24), Rotate List (#61)
- Build a `UniqueResource<T>` class: a move-only wrapper (no copying) around a resource. Implement move constructor, move assignment, and disable copy operations. Write tests that verify moves happen where expected.
- Experiment: write a class with print statements in all five special member functions. Create instances, copy them, move them, return them from functions. Observe what gets called and when.

**Deliverable:** The `UniqueResource<T>` class with tests, and a separate `move_semantics_lab.cpp` that demonstrates each scenario with printed output. Add a README section explaining what you learned.

---

### Week 8: Templates and Generic Programming

**Topics:**
- Function templates and class templates
- Template argument deduction
- Template specialisation (full and partial)
- `constexpr` and `consteval` — compile-time computation
- `if constexpr` for compile-time branching
- Variadic templates (basics — parameter packs, fold expressions)
- `static_assert`
- SFINAE: conceptual understanding only (know what it means, recognise it, don't go down the rabbit hole)
- C++20 Concepts: `requires` clauses as the modern alternative to SFINAE

**Resources:**
- *Effective Modern C++*: Items 24–27 (forwarding references, overloading), Item 15 (`constexpr`)
- *A Tour of C++*: Chapter 7 (Templates)
- CppCon: "Back to Basics: Templates" (any recent year)

**Practice:**
- LeetCode Medium: Implement a generic `Matrix<T, Rows, Cols>` class with compile-time dimension checking
- Write a `constexpr` function that computes Fibonacci numbers at compile time
- Write a variadic `print()` function that accepts any number of arguments of any type
- HackerRank: "C++ Class Templates" and "C++ Variadics"

**Deliverable:** A small `generic_utils` library: templated `Matrix`, `print`, a `constexpr` math utilities header, all under CMake with tests.

---

### Week 9: Error Handling and Software Design Patterns

**Topics:**
- Exceptions: `try`/`catch`/`throw`, exception safety guarantees (basic, strong, nothrow)
- `noexcept` specification — when and why
- `std::optional`, `std::variant`, `std::expected` (C++23, but know the pattern)
- Error handling strategies: exceptions vs error codes vs `std::optional` — tradeoffs in low-latency contexts (quant firms often avoid exceptions on hot paths)
- `const`-correctness as a design tool
- Composition vs inheritance — when to use each
- Dependency injection in C++ (passing interfaces via constructor)
- The PIMPL idiom (for ABI stability and compile times)

**Resources:**
- *Effective Modern C++*: Items 8–12 (prefer `nullptr`, `constexpr`, `override`, scoped enums)
- CppCon: "Want Speed? Don't Always Reach for std::unordered_map" (relevant design thinking)
- CppCon: "Back to Basics: Design Patterns" (Klaus Iglberger, 2021)

**Practice:**
- LeetCode Medium: Implement a basic expression parser that returns `std::optional<double>` for invalid input
- Refactor any previous project to use `std::variant` for a tagged union instead of inheritance
- Write a small "config reader" class: reads key-value pairs from a file, returns `std::optional<std::string>` for missing keys, uses RAII for file handles

**Deliverable:** Config reader library with CMake, unit tests (use Google Test — set it up this week), and a design doc explaining your error handling choices.

---

### Week 10: Concurrency Fundamentals

**Topics:**
- `std::thread`: creation, joining, detaching
- `std::mutex`, `std::lock_guard`, `std::unique_lock`, `std::scoped_lock`
- `std::condition_variable` — producer/consumer pattern
- `std::atomic<T>` — lock-free basics, compare-and-swap
- Data races and undefined behaviour — why these aren't just bugs but literally undefined
- `std::async` and `std::future` (know them, but they're rarely used in HFT)
- Thread safety of STL containers (none of them are thread-safe by default)

**Resources:**
- *C++ Concurrency in Action* (Anthony Williams): Chapters 1–4
- CppCon: "Back to Basics: Concurrency" (Arthur O'Dwyer)
- CppCon: "The C++ Memory Model" (Herb Sutter, older but foundational)

**Practice:**
- Build a thread-safe queue (`ThreadSafeQueue<T>`) using `std::mutex` and `std::condition_variable` with `push()`, `pop()` (blocking), and `try_pop()` (non-blocking)
- Write a producer-consumer program: N producers push integers, M consumers pop and sum them. Verify correctness.
- LeetCode Concurrency section: Print in Order (#1114), Print FooBar Alternately (#1115)

**Deliverable:** `ThreadSafeQueue<T>` library with Google Test unit tests, CMake build, compiled with `-fsanitize=thread` to verify no data races. This is a reusable component for Phase 3.

**Phase 2 Checkpoint:** You should now be able to open any LeetCode medium, solve it in C++ in 25–35 minutes, using modern idioms. If you can't, spend an extra week here before moving on.

---

## Phase 3 — Systems, Performance, and Projects (Weeks 11–16)

### Week 11: Memory Layout, Caches, and Data-Oriented Design

**Topics:**
- How memory actually works: stack frames, heap allocation, virtual memory (high-level)
- Cache lines (typically 64 bytes), spatial and temporal locality
- Why `std::vector` beats `std::list` in nearly all real workloads
- Struct padding and alignment (`alignas`, `alignof`)
- Data-oriented design: struct-of-arrays vs array-of-structs
- Custom allocators — conceptual understanding (arena allocators, pool allocators)
- `std::pmr` (polymorphic memory resources) — the modern way

**Resources:**
- *C++ High Performance* (Andrist & Sehr): Chapters 7–8
- *Computer Systems: A Programmer's Perspective*: Chapter 6 (Cache Memory)
- CppCon: "Efficiency with Algorithms, Performance with Data Structures" (Chandler Carruth)

**Practice:**
- Write a benchmark: iterate over a `std::vector<int>` vs a `std::list<int>` of the same size. Time both. Vary sizes. Observe the cache effect.
- Write a struct-of-arrays vs array-of-structs benchmark for a "Particle" type with x, y, z, velocity. Measure iteration performance.
- LeetCode Medium: Design HashMap (#706), Design Linked List (#707) — implement with cache-awareness in mind

**Deliverable:** A benchmarking report (markdown) with code and results. Include your timings, and write 1–2 paragraphs explaining why you saw what you saw. Use `std::chrono::high_resolution_clock` or Google Benchmark.

---

### Week 12: Advanced Concurrency and Lock-Free Basics

**Topics:**
- Memory ordering: `std::memory_order_relaxed`, `acquire`, `release`, `seq_cst`
- When relaxed ordering is safe and when it isn't
- Lock-free programming concepts: CAS loops, ABA problem
- `std::atomic<T>` with custom types
- Spinlocks vs mutexes — tradeoffs
- Thread pools — design and implementation
- False sharing and how to avoid it (`alignas(64)`)

**Resources:**
- *C++ Concurrency in Action*: Chapters 5 and 7
- CppCon: "Lock-Free Programming" by Herb Sutter (two-part)
- Preshing on Programming blog (preshing.com) — articles on lock-free patterns and memory ordering. Extremely clear explanations.

**Practice:**
- Implement a spinlock using `std::atomic_flag`
- Implement a lock-free stack (Treiber stack) using `std::atomic<T*>` and CAS
- Implement a basic thread pool: fixed number of worker threads, a task queue, `submit()` returns `std::future<T>`
- LeetCode Concurrency: Building H2O (#1117), The Dining Philosophers (#1226)

**Deliverable:** Thread pool library with CMake, tests, and `-fsanitize=thread` clean. This is another strong portfolio piece.

---

### Week 13: Networking and I/O

**Topics:**
- POSIX sockets: TCP client/server, socket lifecycle (bind, listen, accept, connect)
- UDP sockets — relevant for market data feeds
- Blocking vs non-blocking I/O
- I/O multiplexing: `select`, `poll`, `epoll` (Linux)
- Boost.Asio or standalone Asio: async networking in C++
- Serialisation: binary protocols vs text protocols, endianness
- File I/O: `std::fstream`, memory-mapped files (`mmap`)

**Resources:**
- Beej's Guide to Network Programming (beej.us/guide/bgnet/) — read the whole thing, it's short
- Boost.Asio documentation and tutorials
- *C++ High Performance*: I/O chapter

**Practice:**
- Build a TCP echo server and client from scratch using POSIX sockets
- Extend it: make the server handle multiple clients using `epoll`
- Write a simple binary message protocol: define a header (message type, length) and payload, serialise/deserialise in C++
- Parse a sample FIX message string (just the tag=value|tag=value format — no need for the full FIX spec)

**Deliverable:** TCP echo server with `epoll`-based multiplexing, plus the FIX parser. Both with CMake and tests.

---

### Week 14–15: Project — Limit Order Book (2 weeks)

This is the centrepiece of your portfolio. Spend two full weeks on it.

**Specification:**
- Support: Add Limit Order, Cancel Order, Execute/Match Orders
- Price-time priority matching
- Data structures: `std::map<Price, OrderQueue>` for the book levels, where `OrderQueue` is an intrusive doubly-linked list or `std::deque` of orders. `std::unordered_map<OrderID, Order*>` for O(1) cancel lookups.
- Parse input from a file (use the LOBSTER format or create your own simple format)
- Output: trade prints, book state snapshots

**Engineering requirements:**
- Clean API: `OrderBook` class with `addOrder()`, `cancelOrder()`, `getTopOfBook()`, `getVWAP(depth)`
- CMake build with separate `src/`, `include/`, `test/`, `bench/` directories
- Google Test unit tests for every public method
- Google Benchmark (or manual) benchmarks: measure throughput (orders/second)
- Compile with all sanitisers, fix every warning
- Write a README with: design choices, data structure justification, benchmark results, what you'd improve with more time

**Week 14 focus:** Core implementation — get add, cancel, and match working correctly with full test coverage.

**Week 15 focus:** Optimisation and polish — profile with `perf`, identify bottlenecks, try alternative data structures, benchmark before/after. Add the README.

**Practice alongside (lighter load these weeks):**
- LeetCode Medium: 2 problems per week to keep sharp

**Deliverable:** Complete order book project on GitHub. This is the thing you link in applications.

---

### Week 16: Build Tooling, Testing Practices, and CI

**Topics:**
- CMake in depth: targets, dependencies, `FetchContent` for pulling in libraries
- Google Test: fixtures, parameterised tests, mocking with Google Mock
- Sanitisers: ASan, TSan, UBSan — know what each catches
- Static analysis: `clang-tidy`, `cppcheck`
- Profiling: `perf stat`, `perf record`, `perf report`, basic flamegraph generation
- Debugging: `gdb` basics (breakpoints, watchpoints, backtrace, inspect variables)
- Code formatting: `clang-format` with a config file
- Continuous Integration: set up GitHub Actions to build and test your order book on push

**Resources:**
- Official docs for each tool
- "Professional CMake" by Craig Scott (optional, for depth)
- LLVM clang-tidy documentation

**Practice:**
- Add `clang-tidy` and `clang-format` to your order book project
- Set up a GitHub Actions workflow: build → test → sanitiser run
- Run `perf` on your order book benchmarks and generate a flamegraph
- Fix any issues `clang-tidy` finds

**Deliverable:** Your order book project now has CI, static analysis, formatting, and a clean `perf` profile. Update the README with the flamegraph.

**Phase 3 Checkpoint:** You now have a GitHub with: a limit order book, a thread pool, a networking project, and several smaller libraries — all with tests, CMake, and modern C++. This is already a stronger portfolio than most applicants.

---

## Phase 4 — Interview Preparation (Weeks 17–22)

### Week 17: C++ Language Deep Dive and Trivia

**Topics to drill (these get asked directly):**
- Virtual dispatch: vtable mechanism, cost of virtual calls, `override` and `final`
- Object slicing — what it is, how to prevent it
- Rule of Five: when you need it, when Rule of Zero is better
- `std::move` on a `const` object (it doesn't move)
- RVO/NRVO — when the compiler elides copies
- `volatile` — what it does and why it's NOT for threading
- `std::map` vs `std::unordered_map`: ordered iteration, worst-case complexity, cache behaviour
- `std::unique_ptr` vs `std::shared_ptr`: overhead (shared_ptr has a control block and atomic ref count)
- Undefined behaviour: signed overflow, null dereference, use-after-free, data races
- `inline`, `static`, `extern` — linkage rules
- Diamond inheritance and virtual inheritance
- `constexpr` vs `const` vs `consteval`
- C++20 features: concepts, ranges, `std::span`, coroutines (conceptual)

**Resources:**
- cppquiz.org — work through 50+ quizzes
- *Effective Modern C++* — re-read items you flagged
- Jason Turner's C++ Weekly — watch 10 episodes on topics above

**Practice:**
- Create a flashcard deck (Anki or physical) with 80–100 C++ trivia questions and answers
- LeetCode Medium: 1 problem per day this week, strict 25-minute timer

**Deliverable:** Your flashcard deck (shareable). Review it daily from now through your interviews.

---

### Week 18: Data Structures and Algorithms Sprint

**Focus:** The data structures quant firms ask you to implement from scratch.

**Implement each of these in C++ with tests:**
- Hash map with open addressing (linear probing)
- LRU Cache (doubly linked list + hash map)
- Ring buffer / circular buffer (lock-free version as a stretch goal)
- Trie (prefix tree)
- Min/Max heap from scratch (not using `std::priority_queue`)
- Skip list (optional but impressive)

**LeetCode this week (1–2 per day, timed):**
- LRU Cache (#146), LFU Cache (#460)
- Implement Trie (#208), Design Add and Search Words (#211)
- Sliding Window Maximum (#239) — use a deque
- Median from Data Stream (#295) — two heaps

**HackerRank:** "Data Structures" track — do the Stacks, Queues, Trees, and Hash Tables sections

**Deliverable:** All implementations in your repo under a `data_structures/` directory with tests.

---

### Week 19: Algorithms and Problem Solving Intensive

**Focus:** The algorithm patterns that appear most in quant SWE interviews.

**Patterns to master:**
- Two pointers / sliding window
- Binary search (on answer space, not just arrays)
- DFS/BFS on graphs
- Dynamic programming (1D and 2D)
- Sorting algorithms: know quicksort, mergesort, and their properties (stability, in-place, cache behaviour)
- Bit manipulation basics

**LeetCode (2 per day, 25 minutes each):**
- Two Pointers: 3Sum (#15), Container With Most Water (#11), Trapping Rain Water (#42)
- Binary Search: Search in Rotated Sorted Array (#33), Find Minimum in Rotated Sorted Array (#153)
- Graphs: Number of Islands (#200), Course Schedule (#207), Clone Graph (#133)
- DP: Longest Increasing Subsequence (#300), Coin Change (#322), Edit Distance (#72)
- Bit Manipulation: Single Number (#136), Number of 1 Bits (#191)

**HackerRank:** "Algorithms" track — Sorting, Search, Graph Theory sections

**Deliverable:** A problem log — for each problem, write: approach, time complexity, space complexity, and any mistake you made. Review mistakes weekly.

---

### Week 20: System Design and Architecture

**Topics:**
- Market data distribution system design
- Low-latency messaging: shared memory, lock-free queues, kernel bypass (conceptual)
- Pub/sub architectures
- Time-series data storage and retrieval
- Backtesting framework architecture
- Risk engine design: real-time position and PnL computation
- Serialisation protocols: FIX, SBE (Simple Binary Encoding), Protocol Buffers
- IPC mechanisms: pipes, shared memory, Unix domain sockets, message queues

**Resources:**
- *Designing Data-Intensive Applications* (Kleppmann): Chapters 3 (Storage), 11 (Stream Processing)
- Martin Thompson's "Mechanical Sympathy" blog
- Jane Street Tech Blog, Two Sigma Engineering Blog
- LMAX Disruptor paper (foundational for lock-free queue design in trading)

**Practice:**
- Mock system design: "Design a real-time risk engine that processes 100k position updates/second." Write up your answer: components, data flow, data structures, concurrency model, failure modes. 2–3 pages.
- Mock system design: "Design a market data handler that receives UDP multicast, normalises messages, and distributes to N downstream consumers." Same treatment.
- Review your order book project — can you articulate every design decision if asked in an interview?

**Deliverable:** Two written system design documents in your repo. These double as practice for articulating designs verbally.

---

### Week 21: Quant Dev Specifics and the C++/Python Bridge

**Topics:**
- pybind11: exposing C++ classes and functions to Python
- Numerical computing in C++: `Eigen` library basics, matrix operations
- Monte Carlo simulation in C++ (price a European option with Black-Scholes as ground truth)
- Performance comparison: pure Python vs NumPy vs C++ vs C++ with pybind11
- Basic financial concepts for quant dev interviews: Greeks, PnL attribution, position management, risk measures (VaR conceptually)

**Resources:**
- pybind11 documentation and tutorial (pybind11.readthedocs.io)
- Eigen library documentation (eigen.tuxfamily.org)
- *Options, Futures, and Other Derivatives* (Hull) — skim Chapters 13–15 for Black-Scholes basics

**Practice:**
- Implement a Monte Carlo European option pricer in C++
- Expose it to Python via pybind11
- Write a Python script that calls your C++ pricer and compares speed to a pure Python implementation
- Benchmark: how many paths/second can your C++ implementation handle?

**Deliverable:** The Monte Carlo pricer with pybind11 bindings, benchmark results, and a README. This is your "I bridge the gap between research and production" portfolio piece, directly relevant to quant dev.

---

### Week 22: Mock Interviews and Final Polish

**Daily schedule this week:**

**Monday — Timed coding mock:**
- Pick 2 LeetCode Mediums and 1 Hard, 90 minutes total
- Write clean, compiling C++ with no IDE assistance (use a plain text editor)
- After: review your solutions for modern C++ usage

**Tuesday — C++ trivia mock:**
- Have someone (or use your flashcards on shuffle) quiz you on 20 random C++ questions
- Practice explaining out loud, not just knowing the answer
- Record yourself if possible — verbal fluency matters

**Wednesday — System design mock:**
- Pick one of your system design docs, close it, and re-do the design from scratch on a whiteboard or blank doc
- Time: 45 minutes (typical interview length)
- Practice drawing architecture diagrams by hand

**Thursday — Take-home simulation:**
- Find or create a take-home prompt (e.g., "Implement a thread-safe in-memory key-value store with TTL expiry, benchmarks, and tests")
- Complete it in 4 hours with full CMake, tests, README
- This simulates the real take-home format

**Friday — Portfolio review and application prep:**
- Clean up your GitHub: consistent READMEs, no dead code, all tests passing
- Write your CV bullet points for each project
- Draft your cover letter themes: C++ proficiency, systems thinking, ML/quant bridge

**Weekend — Rest and light review:**
- Browse your flashcards
- Read 2–3 blog posts from firm engineering blogs
- Mentally rehearse your "tell me about your order book project" narrative

**Deliverable:** A polished GitHub portfolio and applications-ready CV.

---

## Summary: Key Resources

| Resource | When | Purpose |
|---|---|---|
| Learncpp.com | Weeks 1–4 | Language fundamentals |
| *A Tour of C++* (Stroustrup) | Weeks 2–4 | Big picture overview |
| *Effective Modern C++* (Meyers) | Weeks 5–10 | Modern idioms and best practices |
| *C++ Concurrency in Action* (Williams) | Weeks 10, 12 | Threading and lock-free |
| *C++ High Performance* (Andrist & Sehr) | Weeks 11–13 | Performance and systems |
| *CS:APP* (Bryant & O'Hallaron) | Week 11 | Memory and cache fundamentals |
| *DDIA* (Kleppmann) | Week 20 | System design |
| CppCon Back to Basics (YouTube) | Throughout | Visual explanations of core topics |
| Jason Turner's C++ Weekly (YouTube) | Throughout | Bite-sized modern C++ tips |
| cppquiz.org | Week 17+ | Interview trivia prep |
| LeetCode (C++ only) | Weeks 2–22 | Coding fluency |
| HackerRank C++ track | Weeks 1–6, 18–19 | Structured practice |
| Beej's Guide to Network Programming | Week 13 | Networking fundamentals |
| Preshing on Programming (blog) | Week 12 | Lock-free mental models |

## Summary: Portfolio Projects

By the end of the 22 weeks, your GitHub should contain:

1. **Limit Order Book** — the flagship project (Weeks 14–15)
2. **Thread Pool** — demonstrates concurrency skills (Week 12)
3. **TCP Server with epoll** — demonstrates systems/networking (Week 13)
4. **Monte Carlo Pricer + pybind11** — demonstrates quant relevance (Week 21)
5. **Data structures from scratch** — hash map, LRU cache, ring buffer, trie (Week 18)
6. **Various smaller libraries** — CSV pipeline, config reader, generic utilities (Weeks 6, 9, 8)

All projects should have: CMake builds, Google Test unit tests, clean code, and READMEs.

---

## Weekly Rhythm Template

| Block | Hours | Activity |
|---|---|---|
| Mon–Fri mornings (1 hr) | 5 | LeetCode / HackerRank (timed) |
| Weekday evenings (1.5 hr) | 7.5 | Reading + topic study |
| Weekend (3–4 hr blocks) | 6–8 | Project work and implementation |
| Throughout | ~1 | Flashcards, CppCon talks during commute/gym |
| **Total** | **~18–20** | |

Adjust to fit your schedule, but the key principle is: **code every day, read most days, build something every week.**
