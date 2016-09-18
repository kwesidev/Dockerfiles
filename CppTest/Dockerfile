FROM ubuntu:14.04.5
MAINTAINER William Kwasidev <kwasidev@protonmail.com>
RUN apt-get update && apt-get install build-essential g++ cmake libgtest-dev --yes --force-yes \
&& cd /usr/src/gtest && cmake CMakeLists.txt && make && cp *.a /usr/lib
RUN rm -rf /var/cache/apt/*
RUN mkdir /cppapp
COPY . /cppapp
WORKDIR /cppapp
CMD ["/bin/sh","script.sh"]


