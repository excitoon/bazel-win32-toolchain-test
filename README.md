# How to use

## 32-bit

```
bazel build --cpu x86_32_windows --crosstool_top @windows_cc_config//:toolchain //:hello
```

## 64-bit

```
bazel build --cpu x64_windows --crosstool_top @windows_cc_config//:toolchain //:hello
```
