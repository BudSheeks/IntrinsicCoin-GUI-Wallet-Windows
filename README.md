Dependencies: boost >= 1.58, CMake >= 2.8.6, GCC >=4.7.3, Qt >=5.0

**1. Clone wallet sources**

```
git clone https://github.com/intrinsiccoin/IntrinsicCoin-GUI-Wallet.git
```

**2. Update git submodule:**

```
git submodule update --init --recursive
git submodule foreach git pull origin master
```

**3. Build**

#### Windows build

On windows, you will have to first seperately build rocksdb and IntrinsicCoin projects with -DSTATIC=0 option. Now pick the .lib files from the built project into the /libs folder in the root or source directory. Then you can proceed with cmake of GUI wallet and build using the following commands.

```
mkdir build && cd build && cmake -G "Visual Studio 15 Win64" .. && make
```

On windows, you may find it helpful to explicitly include Boost and Qt library paths:

```
cmake -G "Visual Studio 15 Win64" -DCMAKE_PREFIX_PATH="C:\Qt2\5.9.1\msvc2015" -DBOOST_ROOT="C:\boost_1_64_0_built" -DBOOST_INCLUDEDIR="C:/boost_1_64_0_built/lib32-msvc-14.1" -DBOOST_LIBRARYDIR="C:\boost_1_64_0_built\libs"
 ```
#### *nix build
```
mkdir build && cd build && cmake -DSTATIC=1 .. && make
```


