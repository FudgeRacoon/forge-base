#ifndef SYSTEM_HPP
#define SYSTEM_HPP

#if defined(__GNUC__)
	#define FORGE_COMPILER_GCC
#elif defined(_MSC_VER)
	#define FORGE_COMPILER_MSVC
#elif defined(__llvm__)
	#define FORGE_COMPILER_LLVM
#elif defined(__clang__)
	#define FORGE_COMPILER_CLANG
#else
	#error "Unable to detect compiler."
#endif

#if defined(FORGE_COMPILER_GCC)
	#define FORGE_FORCE_INLINE __attribute__((always_inline)) inline
#elif defined(FORGE_COMPILER_MSVC)
	#define FORGE_FORCE_INLINE __forceinline
#elif defined(FORGE_COMPILER_CLANG)
	#error "Clang is not currently supported."
#elif defined(FORGE_COMPILER_LLVM)
	#error "Intel compiler is not currently supported."
#endif

#endif