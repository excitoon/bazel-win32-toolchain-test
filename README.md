- Bazel Latest: [![Build status](https://ci.appveyor.com/api/projects/status/hveec4mfiuincmaf?svg=true)](https://ci.appveyor.com/project/excitoon/bazel-win32-toolchain-test)
- Bazel 0.21.0: [![Build status](https://ci.appveyor.com/api/projects/status/wrpfyjwxbbyb43e0?svg=true)](https://ci.appveyor.com/project/excitoon/bazel-win32-toolchain-test-ekk6e)
- Bazel 0.20.0: [![Build status](https://ci.appveyor.com/api/projects/status/2029c5x6sd60r6tj?svg=true)](https://ci.appveyor.com/project/excitoon/bazel-win32-toolchain-test-3sl4p)
- Bazel 0.19.2: [![Build status](https://ci.appveyor.com/api/projects/status/fb2rihba4j6ihe5f?svg=true)](https://ci.appveyor.com/project/excitoon/bazel-win32-toolchain-test-36vw4)

# How to use

## 32-bit

```
bazel build --cpu x86_32_windows --crosstool_top @windows_cc_config//:toolchain //:hello
```

## 64-bit

```
bazel build --cpu x64_windows --crosstool_top @windows_cc_config//:toolchain //:hello
```
