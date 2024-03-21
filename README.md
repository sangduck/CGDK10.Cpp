# CGDK10.Cpp
어마어마한 성능과 안정성을 모두 가진 요구하는 게임 서버를 개발할 수 있는 게임 엔진 모듈입니다.
(game server engine with Ultra performance ans Stablilty)

# Platform
 - windows
 - linux (centos, ubuntu)


## directory

/include
header 파일들 입니다.

/lib
lib(라이브러리) 파일들입니다. 
/lib/cgdk/sdk10 폴터 아래에 windows, ubuntu, centos 용으로 구분해 저장되어 있습니다.

/tutorial
예제 프로젝트들 입니다.

/example
예제 프로젝트들입니다.

/dll
mfc control용 dll들로 windows에서 CGCII의 mfc control들을 사용해서 제작하시면 필요합니다.



## tutorials & examples compile
### windows
Release
> build.Release.bat
Debug
> build.Debug.bat

### ubuntu
Release
>cmake . -DCMAKE_BUILDE_TYPE=Delease -DDIST=ubuntu
Debug
>cmake . -DCMAKE_BUILDE_TYPE=Debug -DDIST=ubuntu

### centos
Release
>cmake . -DCMAKE_BUILDE_TYPE=Delease -DDIST=centos
Debug
>cmake . -DCMAKE_BUILDE_TYPE=Debug -DDIST=centos