FROM alpine:3.9.4 as builder
RUN apk add --no-cache g++
WORKDIR /usr/src/app
COPY hello_world.cpp .
RUN g++  -o hello_world -static -Os -s hello_world.cpp
RUN strip hello_world

FROM scratch
COPY --from=builder /usr/src/app/hello_world /hello_world
CMD ["/hello_world"]
