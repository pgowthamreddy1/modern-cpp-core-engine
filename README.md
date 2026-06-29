# High-Performance C++ & Object-Oriented Engine

A production-grade launchpad tracking my 25-day sprint to master Modern C++ (C++20/C++23) paradigms, memory optimization, and low-level data structure design prior to commencing my B.Tech CSE Core track at PES University (Ring Road Campus).

This repository serves as a practical, zero-abstraction playground demonstrating architectural migration away from procedural C into highly optimized, object-oriented, and hardware-aware systems.

---

## 🚀 The 25-Day Sprint Architecture (Pre-College Blueprint)
### 🗓️ Phase 1: Object-Oriented Engineering & Structural Encapsulation (Days 1-7)
*   **Milestone:** Transitioning from passive C memory blocks to active, self-contained Classes.
*   **Key Implementations:**
    *   Strict enforcement of **Encapsulation** using `private` data fields coupled with zero-overhead inline accessors.
    *   Dynamic polymorphistic execution layers leveraging abstract base classes and `virtual` tables (`vtables`).
    *   Eliminating structural redundancy using deep **Inheritance** chains.
*   **Directory:** `/01-oop-fundamentals/`

### 🗓️ Phase 2: Manual Memory Control, RAII, & Object Lifecycles (Days 8-15)
*   **Milestone:** Eliminating memory leaks and mastering Apple Silicon Heap/Stack performance mechanics.
*   **Key Implementations:**
    *   **Resource Acquisition Is Initialization (RAII)** paradigms to automate local system resource cleanups.
    *   Defeating data truncation errors via custom **Copy & Move Constructors** and Move Assignment Operators (`std::move`).
    *   Deploying Modern C++ smart pointers (`std::unique_ptr`, `std::shared_ptr`) to eliminate legacy raw `new`/`delete` vulnerabilities.
*   **Directory:** `/02-memory-architecture/`

*   ### 🗓️ Phase 3: High-Performance Data Engines & STL Optimization (Days 16-25)
*   **Milestone:** Overhauling manual sorting mechanisms in favor of the Standard Template Library (STL) and $O(\log n)$ algorithmic layouts.
*   **Key Implementations:**
    *   Custom associative memory layouts utilizing `std::vector`, `std::unordered_map`, and generic Type Templates.
    *   Concurrent dataset processing architectures optimized for multi-threaded cache execution.
*   **Directory:** `/03-performance-engines/`

*   ---

