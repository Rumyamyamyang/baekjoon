# scripts/update_readme.py
# README.md 파일을 자동으로 업데이트 해주는 스크립트

from datetime import datetime, timezone, timedelta
import glob
import json
import os
import requests
from tqdm import tqdm

# solved.ac API로 해결한 문제 수를 int로 가져옴
def get_solved_count(handle):
  response = requests.get(f"https://solved.ac/api/v3/user/show", params={"handle": handle})
  response.raise_for_status()
  return int(response.json()["solvedCount"])

# solved.ac API로 해결한 문제들을 50개씩 가져옴
def get_problems(handle, page):
  response = requests.get("https://solved.ac/api/v3/search/problem", params={"query": f"solved_by:{handle}", "direction": "asc", "page": page, "sort": "id"})
  response.raise_for_status()
  return response.json()

# 문제 번호를 입력받아 문제 URL을 반환
def get_problem_url(id):
  return f"https://www.acmicpc.net/problem/{id}"

# 문제 제목의 특수문자를 처리하여 반환
def get_problem_title(title):
  title = title.replace("|", "\\|") # 17203번: ∑|ΔEasyMAX|
  title = title.replace("\\(", "$") # 10386번: LaTeX로 구성된 제목
  title = title.replace("\\)", "$") # 10386번: LaTeX로 구성된 제목
  return title

# 문제 난이도를 입력받아 문제 티어를 반환
def get_problem_tier(level):
  tier = {
    0: "Unrated",
    1: "Bronze V", 2: "Bronze IV", 3: "Bronze III", 4: "Bronze II", 5: "Bronze I",
    6: "Silver V", 7: "Silver IV", 8: "Silver III", 9: "Silver II", 10: "Silver I",
    11: "Gold V", 12: "Gold IV", 13: "Gold III", 14: "Gold II", 15: "Gold I",
    16: "Platinum V", 17: "Platinum IV", 18: "Platinum III", 19: "Platinum II", 20: "Platinum I",
    21: "Diamond V", 22: "Diamond IV", 23: "Diamond III", 24: "Diamond II", 25: "Diamond I",
    26: "Ruby V", 27: "Ruby IV", 28: "Ruby III", 29: "Ruby II", 30: "Ruby I"
  }
  # return f"![{tier[level]}](https://raw.githubusercontent.com/rumia0528/Baekjoon/main/assets/tier/{level}.svg)"
  return tier[level]

# 문제 번호를 입력받아 솔루션 경로를 모두 반환 (문자열로)
def get_solution_path(id):
  # 디렉토리
  if (id < 10000):
    id = f"0{id}"
  dir = f"{str(id)[:2]}xxx"

  # 파일 확장자
  ext = {
    ".ads": "Ada",
    ".a68": "Algol 68",
    ".bas": "FreeBASIC",
    ".c"  : "C",
    ".cpp": "C++",
    ".f"  : "Fortran",
    ".gs" : "Golfscript",
    ".js" : "node.js",
    ".py" : "Python",
    ".txt": "Text",
    ".vb" : "Visual Basic"
  }

  # 파일 찾기
  files = glob.glob(f"{dir}/{id}.*")
  if len(files) == 0:
    raise ValueError(f"Failed to find solution for problem {id}")
  files.sort()
  solution = ""
  for file in files:
    url = f"https://github.com/Rumyamyamyang/baekjoon/blob/main/{os.path.normpath(file).replace(os.sep, '/')}"
    solution += f"[{ext[os.path.splitext(file)[1]]}]({url}) "
  return solution

# README.md 헤더를 반환
def get_header(handle):
  header = "# Baekjoon\n\n"
  header += "백준 알고리즘 문제 풀이 기록\n\n"
  header += f"[![Solved.ac 프로필](http://mazassumnida.wtf/api/v2/generate_badge?boj={handle})](https://solved.ac/{handle})\n\n"
  header += "# MIT License\n\n"
  header += "해당 github repo의 작동 방식은 해당 repo에서 가져왔습니다!\n\n" 
  header += f"[원본 repository](https://github.com/Hiyabye/Baekjoon)\n\n"
  header += f"[MIT License](/LICENSE)\n\n"
  header += "# header comment에 관해서\n\n"
  header += "`x.com`은 해당 문제를 푼 날짜, 시간과 후기를 볼 수 있습니다! (스포주의)\n\n"
  header += "`Re[문제번호].cpp`라고 적힌건 더 좋은 최적화를 찾고, 다시 풀었을때 적힙니다!\n\n"
  header += "> 해당 파일의 `첫번째 comment`는 좋은 코드를 적으신 블로그 주소를 출처로 적습니다!\n\n"
  header += "# 안내사항\n\n"
  header += "마지막 업데이트: "
  header += datetime.now(timezone(timedelta(hours=9))).strftime("%Y-%m-%d %H:%M:%S")
  header += " (KST)\n\n"
  header += "목록이 길기에 단축키 `Ctrl+F`로 문제를 찾아주세요!\n\n"
  return header

# README.md 테이블을 반환
def get_table(problems):
  table = "| # | 제목 | 레벨 | 솔루션 |\n"
  table += "|:---:|:---:|:---:|:---:|\n"

  print("Generating table...")
  for (id, title, level) in tqdm(problems):
    url = get_problem_url(id)
    title = get_problem_title(title)
    tier = get_problem_tier(level)
    path = get_solution_path(id)
    table += f"| [{id}]({url}) | {title} | {tier} | {path}|\n"
  return table

# 메인 함수
if __name__ == "__main__":
  # solved.ac API로 푼 문제 수 가져오기
  solved_count = get_solved_count("rumia0528")
  pages = (solved_count - 1) // 50 + 1
  problems = []

  # solved.ac API로 문제 정보 가져오기
  print(f"Getting problems from {pages} pages...")
  for page in tqdm(range(1, pages+1)):
    solved = get_problems("rumia0528", page)
    for problem in solved["items"]:
      problems.append((int(problem["problemId"]), problem["titleKo"], int(problem["level"])))

  # README.md 파일 업데이트
  with open("README.md.tmp", "w", encoding="utf-8") as f:
    f.write(get_header("rumia0528") + get_table(problems))

  # README.md.tmp과 README.md을 비교하여 변경사항이 있으면 업데이트
  # 이때 첫 9줄은 헤더이므로 비교에서 제외
  with open("README.md.tmp", "r", encoding="utf-8") as f:
    tmp = f.readlines()
    with open("README.md", "r", encoding="utf-8") as f:
      readme = f.readlines()
      if tmp[9:] != readme[9:]:
        with open("README.md", "w", encoding="utf-8") as f:
          f.writelines(tmp)
        print("README.md updated without errors")
      else:
        print("README.md is up to date")
        exit(123) # exit github action with success
      
  # README.md.tmp 파일 삭제
  os.remove("README.md.tmp")
