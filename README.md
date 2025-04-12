# design-patterns-crosslang !!


본 저장소는 아래 두 개의 과제를 해결하기 위해 구성되었습니다.

---

## 과제 1: Eigen 행렬곱 프로그램 (main.cpp)

> **문제:**  
> Conda를 통해 Eigen 라이브러리를 설치하고,  
> **다음 행렬곱을 계산하여 그 결과를 화면에 출력하는 프로그램을 작성하세요.**

- C++ 언어 사용
- `Eigen/Dense` 라이브러리 활용
- `main.cpp` 에 구현됨

✔GitHub Actions에서도 `libeigen3-dev`를 설치하여 자동으로 빌드됩니다.

---

## 과제 2: 디자인 패턴 멀티 언어 구현 & 자동화

> **요구사항:**  
> 본 강의자료에서 제공된 파이썬 디자인 패턴 코드를  
> **C++ / C# / Kotlin** 으로 각각 구현하고 다음 조건을 만족하세요.

### 구현된 디자인 패턴
- Adapter
- Decorator
- Facade
- Factory Method
- Method Chaining (선택 과제)

### 자동화 요구사항 충족
- [x] 하나의 GitHub 저장소에 통합 업로드
- [x] Push / Pull Request 발생 시 GitHub Actions 자동 실행
- [x] 각 언어별 파일을 자동 컴파일:
  - `C++` → g++ + Eigen
  - `C#` → .NET SDK로 개별 프로젝트화
  - `Kotlin` → SDKMAN으로 설치 후 kotlinc 사용
- [x] 모든 빌드 결과물을 `build_outputs.zip` 으로 압축
- [x] GitHub Release 탭에 자동 업로드

관련 스크립트는 `.github/workflows/build-release.yml` 에서 확인 가능합니다.

---

## 자동 릴리즈 예시

> [ Release 8 보러가기](../../releases)

- 포함 파일: `.exe`, `.out`, `.jar` 등 각 언어별 실행 파일
- GitHub Actions에서 자동 생성됨

---

## 📁 폴더 구조

```bash
.
├── cpp/         # C++ 구현
│   └── main.cpp, adapter.cpp ...
├── csharp/      # C# 구현
│   └── adapter.cs ...
├── kotlin/      # Kotlin 구현
│   └── adapter.kt ...
├── .github/
│   └── workflows/build-release.yml
└── README.md
🛠 기술 스택
C++ (g++, Eigen)

C# (.NET 7.0)

Kotlin (kotlinc, JDK 17)

GitHub Actions (CI/CD 자동화)
