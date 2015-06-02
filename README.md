# WGS84TOGCJ02
Coordinate conversion from WGS-84 to GCJ-02 to fix position shift in China. 

# What's the problem?
When we use `CLLocationManager` to get current location and show it on mapview, We find there is always some shift between real location and current location brought by `CLLocationManager` in `China`.

Geodetic system used in China is called ![GCJ-02](http://baike.baidu.com/link?url=E_OcHuAxYidDOwyHzodkjWhK0EZEodVAdyl7HHkwGuG3LuFU5u2jFSXHVoqDG_jqpGNXLx5LPTXOAk5gF7k_uq) which encrypts the ![WGS-84](https://en.wikipedia.org/wiki/World_Geodetic_System#WGS84). That's why we get the position shift in China.

# How to fix it?
In order to fix the shift in map developing work involved China. Use following method:

```Ojbective-c
if (![WGS84TOGCJ02 isLocationOutOfChina:coordinate]) {
    coordinate = [WGS84TOGCJ02 transformFromWGSToGCJ:coordinate];
}
```
