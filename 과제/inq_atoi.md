# inq_atoi

### 📝 About Project
- 제출 파일 : inq_atoi.c
- 허용 함수 : malloc
- 불허 함수 : 허용 함수를 제외한 모든 함수
  
- atoi는 `<stdlib.h>`에 내장되어 있는 함수로, ascii 값을 int형으로 변환하는 함수입니다.<br>
  다양한 문자열을 입력 받아 아래 조건에 맞게 int형으로 변환해야 하는 프로젝트입니다.<br>
  이 프로젝트는 실제 `<stdlib.h>`의 atoi와 일부 다른 결과를 출력합니다.<br>
  원본함수에 의존하지 않고, 아래 설명에 따라 풀이하세요.

  ---

### 🚀 Subject

- 과제 함수 프로토타입

    ```c
    int inq_atoi(char *str){
        // 작성 부분
    }
    ```

- str에 전달된 `문자로 입력된 숫자`를 `int` 값으로 변환하는 함수를 작성하세요.
- 문자열(숫자 부분)은 앞에 `다수의 공백`(ascii = 32)이 입력될 수 있습니다.
- 문자열(숫자 부분)은 앞에 `1개의 ‘+’, ‘-’ 부호`가 입력될 수 있으며, +의 경우 양수로, -의 경우 음수로 변환해야 합니다.
- 문자열(숫자 부분)은 숫자 이외의 다른 값이 문자열(숫자 부분) 중간에 들어온다면, 숫자 부분까지 리턴합니다.
  - ex) str = "5525a521" -> return (5525);
- 숫자가 인식되지 않거나, 비정상적인 문자열 입력시 0을 리턴합니다.
  - ex) str = "    재밌겠죠? 맞아요!  " -> return (0);
- while문을 제외한 어떠한 반복문도 사용을 금지합니다.
- 어떠한 외부 라이브러리의 인클루드를 금지합니다.
    - ex) `<unistd.h>`, `<stdlib.h>`, `<stdio.h>` 등
    - 테스트 목적으로 사용하는 것은 허용하나, 제출 파일 및 함수 구현 과정에서는 절대 포함할 수 없습니다.
- 함정이 있어요!
  - **정수 최댓값, 최솟값 리턴을 어떻게 할지 고심해보세요.**
  - INT_MAX를 초과하는 값이나, INT_MIN 미만의 값이 input될 경우, overflow와 underflow를 자연스럽게 처리해야 합니다.
- (사용하지는 않겠지만) malloc을 사용할 경우, Memory Leak은 허용하지 않습니다.
- 전역변수 사용이 금지됩니다. 함수 분리, 메서드 분리는 지역 변수를 이용하여 parameter로 처리하세요.
- 전체 함수 및 메서드는 `int inq_atoi(char *str)`함수를 포함해 5개 이하로 작성하세요.
---

- 과제 평가는 다음과 같은 main문을 작성하여, 평가를 진행합니다.
    
    ```c
    #include <stdio.h>
    
    int main(void){
       printf("%d\n", inq_atoi("        -3535"));
    }
    ```
    
- 예제 파라미터와 리턴 값을 참고하여 과제를 진행하세요.
위와 같은 테스트 문을 통해, 과제를 검증할 수 있습니다.
    
    
    | *str | return | Description |
    | --- | --- | --- |
    | “&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;-3535” | -3535 | 앞 공백 처리 <br>- 인식(음수)<br>3535 정상 인식<br>3535 리턴 |
    | “&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;+-4242” | 0 | 앞 공백 처리<br>+ 뒤에 -라는 문자열이 들어와 0 리턴 |
    | “&nbsp;&nbsp;&nbsp;&nbsp;-24353&nbsp;&nbsp;&nbsp;&nbsp;35” | -23453 | 앞 공백 처리<br>-24353과 35 사이에 공백 발생<br>따라서 -24353 리턴 |
    | “&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;어렵죠42?&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;” | 0 | 앞 공백 처리<br>숫자가 먼저 입력되지 않음<br>따라서 0 리턴 |
    | “&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;+4212-8243” | 4212 | 앞 공백 처리<br>+ 인식 (양수)<br>4212 정상 인식<br>숫자 뒤 숫자가 아닌 문자 발생<br>따라서 4212 리턴 |
    |"&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;+52262&nbsp;&nbsp;&nbsp;&nbsp;25&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;"|52262|앞 공백 처리</br>+ 인식(양수)</br>52262 정상 인식<br>숫자 뒤에 숫자가 아닌 문자 발생<br>따라서 52262 리턴
    |"+2147483647"|2147483647|앞 공백 처리<br>2147483647 정상 인식|따라서 2147483647 리턴|


- C는 기본적으로 `Snake case` 코드 작성을 권장합니다.
  - 메서드 분리, 함수 분리를 할 계획이라면, [스네이크 케이스](https://blog.naver.com/PostView.nhn?blogId=ki630808&logNo=222175522625&categoryNo=49&parentCategoryNo=40&viewDate=&currentPage=1&postListTopCurrentPage=1&from=postView)를 참고하세요.

---

### ✅ Tips

 - C에서 사용하는 int 자료형의 최소, 최댓값을 확인해보세요. 여러분의 inq_atoi는 이 모든 값을 정상출력해야 합니다.
 - `char *` 에 대한 깊은 이해가 필요해요. 문자열의 인덱스를 이용해 반복문과 조건문을 통해 문제를 해결해보세요.
 - 이 문제는 지금까지 여러분이 접한 모든 지식을 동원해 해결해야 합니다. 다양한 방법으로 접근해보세요.
 - **제출 기한 2023/05/11 17:00 한 PR분에 한하여 제출 인정**