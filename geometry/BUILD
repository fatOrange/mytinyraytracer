load("@rules_cc//cc:defs.bzl", "cc_binary")

cc_binary(
    name = "testgeometry",
    srcs = ["testgeometry.cpp","geometry.h"],
    deps = ["@com_github_google_glog//:glog"],
)

cc_binary(
    name = "tinyraytracer",
    srcs = ["tinyraytracer.cpp","geometry.h"],
    deps = ["@com_github_google_glog//:glog"],
)
