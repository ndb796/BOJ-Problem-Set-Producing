## BOJ 문제를 출제하는 방법

### [BOJ 문제 출제 방법](https://www.acmicpc.net/help/problem-add?fbclid=IwAR31dWL7up63YZy7IzFM9QHy7gztK8m_N22HDxcWZTPRoe-mr-CDXMwcvsc)

* 아래의 조건 중 최소 하나를 만족하면 [BOJ Stack](https://stack.acmicpc.net/)을 통해 문제를 출제할 수 있습니다.
  * BOJ 2000문제 이상 해결
  * Codeforces 레이팅 2200 이상
  * Topcoder 레이팅 2200 이상
  * ACM-ICPC 리저널 본선 10등 이상
  
* 조건을 만족한다면, [BOJ Slack](https://acmicpc.slack.com/)에서 @baekjoon님에게 DM으로 출제 권한을 요청합니다.
* (조건을 만족하지 못하더라도, 강의 목적으로 문제를 출제하는 경우 출제 권한을 부여해주시기도 합니다.)

### 문제 출제 절차

1) [BOJ Slack](https://acmicpc.slack.com/)에서 @baekjoon에게 DM으로 [BOJ Stack](https://stack.acmicpc.net/)의 출제 권한을 받습니다.
2) [BOJ Stack](https://stack.acmicpc.net/)에서 문제를 출제합니다.
3) 검수자를 섭외하고 문제 검수를 받습니다. 검수자는 ['외부 검수자'](https://www.acmicpc.net/help/contest) 조건을 만족해야 합니다.
4) [BOJ Slack](https://acmicpc.slack.com/)에서 @baekjoon에게 DM으로 문제 출제 완료를 알리고, 문제 번호를 알립니다.
5) 시간이 지난 후 [BOJ](https://www.acmicpc.net/)에 문제가 공개됩니다.

### 문제 가이드 정리

#### 문제 스타일

* 문제의 문단은 &lt;p&gt;를 사용해야 합니다. &lt;br&gt;을 사용해서 문단을 구분하면 안됩니다.
* 문제에 빈 줄을 삽입하면 안됩니다. 두 문단 사이에 빈 줄이 있거나, 문제의 마지막 문단 밑에 빈 줄이 있으면 안됩니다.
* 글자 크기, 글꼴, 문단 정렬을 변경하면 안되며, 알파벳 l은 구분하기 어려울 수 있습니다.
* 제곱 &lt;sup&gt;, 아래 첨자 &lt;sub&gt;, 순서 없는 목록 &lt;ul&gt;, 순서 있는 목록 &lt;ol&gt;은 모두 에디터로 작성할 수 있습니다.
* 변수에 이탤릭체 &lt;em&gt;를 이용하면, 다른 알파벳과 쉽게 구분할 수 있습니다. (1≤<em>N</em>≤100)
* "" 안에는 &lt;code&gt;태그를 적용하는 것이 좋습니다. ("<code>Impossible</code>"을 출력한다.)
* 제한을 괄호 안에 삽입할 때는, 여는 괄호의 다음과 닫는 괄호의 이전에 공백을 삽입하지 않아야 합니다. (1≤<em>N</em>≤100)
* 그림은 가운데 정렬을 사용하는 것이 좋습니다.
* 입력으로 문자가 주어지는 경우에는 &lt;code&gt;태그를 적용하는 것이 좋습니다.

#### 내용 및 문체

* 차별, 혐오가 담긴 내용은 문제에 적힐 수 없습니다.
* 아래와 같은 번역체는 사용하지 않는 것이 좋습니다.
  * 입력으로 주어지는 데이터는 문제의 조건을 만족하고 있음이 보장된다. → 입력으로 주어지는 데이터는 문제의 조건을 만족한다.
  * 입력으로 주어지는 데이터는 다음 조건을 만족한다고 가정해도 된다. → 입력으로 주어지는 데이터는 다음 조건을 만족한다.
  * 팀 A의 능력치는 팀 B의 그것보다 크다. → 팀 A는 팀 B보다 능력치가 크다.
* 수식을 표현할 때 사용하는 Mathjax는 꼭 필요한 이유가 아니면, 사용하지 않아야 합니다.
* <=, >=, != 대신 ≤, ≥, ≠를 사용해야 합니다.
* 곱하기를 표현할 때, * 대신 ×를 사용해야 합니다.
* floor는 ⌊⌋, ceil은 ⌈⌉을 사용해서 나타낼 수 있습니다.
* 집합은 ∈, ∉, ⊂, ∅, ⊄, ⊆와 같은 기호를 이용해 나타낼 수 있습니다.

#### 수

* $는 Mathjax를 사용할 때 사용해야 하기 때문에, \\$를 이용해야 합니다.
* 수와 숫자를 헷갈리면 안됩니다. 수는 number, 숫자는 digit입니다.
* 자릿수를 구분할 때는 ,을 이용해서 구분해야 합니다.

#### 제한

* 시간 제한의 단위는 ms이고, [100,30000]에 포함되는 정수입니다.
* 메모리 제한의 단위는 MB이고, [256,1536]에 포함되는 정수입니다.
* 언어별 추가 시간은 되도록 "추가 시간 있음"을 선택해주세요.
* 시간 측정은 되도록 "수행 시간의 최댓값"을 선택해주세요.

#### 데이터

* 파일명은 알파벳 대문자 (A, B, ..., Z), 알파벳 소문자 (a, b, ..., z), -, \_, 숫자 (0, 1, ..., 9)로만 이루어져 있어야 합니다.
* 정규표현식으로 나타내면 파일명은 \[A-Za-z0-9-_\]+와 매치될 수 있어야 합니다.
* 문제에 추가된 예제는 자동으로 데이터에 추가됩니다.
* 파일명이 sample로 시작하면 안되고, 입력 파일의 확장자는 in, 출력 파일의 확장자는 out입니다.
* 입력 파일과 확장자만 다른 파일이 그 입력 파일에 해당하는 출력 파일 입니다.
  * 입력 파일 data.in에 대응하는 출력 파일은 data.out입니다.
* 입력 파일 data.in에 대응하는 출력 파일은 data.out입니다.
* 의미없는 공백이 줄의 뒷 쪽에 있으면 안됩니다.
* 데이터의 모든 줄은 줄 바꿈(\n)으로 끝나야 합니다.
* 데이터 파일은 UTF-8로 인코딩 되어 있어야 합니다.
* 데이터 파일의 크기 제한은 없지만, 이 사이트를 통해서 업로드할 수 있는 파일 크기의 최댓값은 200MB 입니다.

#### 기타

* 여러가지 형태의 정답이 가능한 경우, 예제로 모두 보여주는 것이 좋습니다.
  * 첫째 줄에 집까지 가는 거리의 최솟값을 출력한다. 단, 집까지 갈 수 없는 경우에는 -1을 출력한다.
    * 이 경우 최솟값을 구하는 예제, -1을 출력하는 예제를 모두 넣어줍니다.
* 모든 예제 입력과 출력은 줄 바꿈(\n)으로 끝나야 합니다. 올바른 예제는 다음과 같습니다.
<pre>
5 7
2 7 1 2 7

</pre>
* 의미없는 괄호는 사용하지 않는 것이 좋습니다.
* 한글, 한자와 같이 ASCII문자가 아닌 문자를 출력하는 문제는 채점이 되지 않을 수도 있습니다.

## 나의 문제집 리스트

### FastCampus 강의용 문제집

* 본 문제들은 FastCampus의 알고리즘 강의 목적으로 만들어진 문제들입니다.
* BOJ에 업로드를 진행할 예정이므로, 누구나 풀어 볼 수 있습니다.
* 총 5개의 코딩 테스트 문제집(A형-E형)으로 구성되어 있으며, 각 문제집당 제한 시간은 3시간입니다.
  * [코딩 테스트 A형](./mock_exams/coding_test_A.pdf)
  * [코딩 테스트 B형](./mock_exams/coding_test_B.pdf)
  * [코딩 테스트 C형](./mock_exams/coding_test_C.pdf)
  * [코딩 테스트 D형](./mock_exams/coding_test_D.pdf)
  * [코딩 테스트 E형](./mock_exams/coding_test_E.pdf)

### 내가 자주하는 실수

* 변수를 표현할 때는 이탤릭체를 이용해야 함
* 일반적인 수를 표현할 때는 그냥 그대로 작성해야 함
* &lt;code&gt; 태그는 특정한 문자열을 지칭할 때만 사용해야 함
* 순차적으로 나열할 때는 Ordered List 사용해야 함
* BOJ에서는 1 ≤ <em>N</em> ≤ 100와 같이 띄어쓰기를 사용해야 함
