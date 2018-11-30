# 5. Installing Boost.Build Library

### PROBLEM -

Obtain and Install Boost.Build


### MY TAKE ON -

##### DOWNLOAD
Download **Boost** Latest Version from **[here](https://www.boost.org/users/history/version_1_68_0.html)**

##### FOLDER SETUP
1. Extract downloaded boost zip file to `C:\Program Files\boost_1_68_0`
2. Created a Folder for **Boost.Build** installation at `C:\Program Files\boost-build`
3. Created a Folder withing for Building at `C:\Program Files\boost_1_68_0\build`
4. Created a Folder for installation at `C:\Program Files\boost`

##### BOOST.Build SETUP
1. On Command Prompt, navigate to `C:\Program Files\boost_1_68_0\tools\build`
2. Run **`bootstrap.bat gcc`**
3. Run **`b2 install --prefix=C:\Program Files\boost-build`**

##### $PATH SETUP
1. Open System Environment Variables -> PATH
2. Add `C:\Program Files\boost-build\bin` to Windows $PATH

##### BOOST BUILDING
1. On Command Prompt, navigate to `C:\Program Files\boost_1_68_0`
2. Run **`b2 --build-dir="C:\Program Files\boost_1_68_0\build" --prefix="C:\Program Files\boost" toolset=gcc install`**