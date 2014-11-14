# Wavefront Planning Algorithm
This is a simple implementation of the Wavefront algorithm. This algorithm finds a path from point S to point F (goal) in a given graph by using breadth-first search. Each cell is assigned a number which corresponds to the number of moves required for the shortest path from the start state to that cell.
## Usage
### Compilation 
```bash
make
```
### Clean 
```bash
make clean
```
### Execution
```bash
./mazetest
```

### Example
```bash
input:
0000000000000000000000000000
0 S         0              0
0      000000              0
0      0           0       0
0      0           0       0
0      0           0       0
0      00000       0       0
0                  0       0
0                  0     F 0
0000000000000000000000000000

output:
0000000000000000000000000000
01S1234567890@@@@@ABCDEFGHI0
0111234000000????@ABCDEFGHI0
02222340?>>>>>>>?@A0CDEFGHI0
03333340?>=====>?@A0DDEFGHI0
04444440?>=<<<=>?@A0EEEFGHI0
055555500000;<=>?@A0FFFFGHI0
06666666789:;<=>?@A0GGGGGHI0
07777777789:;<=>?@A0HHHHHFI0
0000000000000000000000000000
```
