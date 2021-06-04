#include "geometry.h"
#include <iostream>
#include <glog/logging.h>
int main(int argc, char *argv[])
{
    // Initialize Google’s logging library.
    FLAGS_log_dir = "./log";
    google::InitGoogleLogging(argv[0]);

    Vec2f a(1.0, 2.0);
    std::cout << "hello world" << std::endl;
    LOG(INFO) << "HelloWorld";
}