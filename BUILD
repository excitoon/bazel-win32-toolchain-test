package(default_visibility = ["//visibility:public"])

cc_binary(
    name = "hello",
    srcs = ["main.cpp"],
    deps = ["//test_library:test_library"],
    linkopts = ["-DEFAULTLIB:Ws2_32.lib"]
)
