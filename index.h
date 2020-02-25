const char INDEX_PAGE[] PROGMEM = R"=====(
<!DOCTYPE html>
<html>

<head>
  <meta name='viewport' content='width=device-width, initial-scale=1.0' />
  <meta charset='utf-8'>
</head>
<style>
  body {
    background-color: #F7F9FD;
  }

  .container {
    width: 20rem;
    margin-left: auto;
    margin-right: auto;
  }

  .center {
    text-align: center;
  }

  .right {
    text-align: right;
  }

  button {
    display: block;
    width: 10rem;
    height: 10rem;
    border: none;
    border-radius: 25%;
    margin-left: auto;
    margin-right: auto;
    background-color: #DBE1EA;
    outline: none;
  }

  a {
    display: block;
    outline: none;
    text-decoration: none;
  }

  a img { border: none; }

  a:hover {
    text-decoration: none;
    outline: none;

  }

  button:active {
    background-color: #E9E9E6;
  }
 
  #circl {
    transition: stroke 1s ease;
  }

</style>

<body>
  <div class="container">
    <h1 class="center">TEST PAGE</h1>
    <h1 class="center" id="state">---</h1> <br> <br>
    <button type="button" id="switch">
      <svg width="9rem" height="9rem">
        <circle id="circl" r="4rem" cx="4.5rem" cy="4.5rem" fill="none" stroke="#000000" stroke-width="0.2rem" />
      </svg>
    </button> <br> <br>
    <p class="center">Recieved data = <span id='rd'>---</span></p><br>
    <a  class="right" href="config">
      <img src="data:image/svg+xml;utf8;base64,PHN2ZyBpZD0iQ2FwYV8xIiBlbmFibGUtYmFja2dyb3VuZD0ibmV3IDAgMCA1MTIgNTEyIiBoZWlnaHQ9IjUxMiIgdmlld0JveD0iMCAwIDUxMiA1MTIiIHdpZHRoPSI1MTIiIHhtbG5zPSJodHRwOi8vd3d3LnczLm9yZy8yMDAwL3N2ZyI+PHBhdGggZD0ibTQ4NC40NTEgMTcwLjQ4MS0xNy4yMTktOS45NDFjLS44NTgtLjQ5NS0xLjI3Mi0xLjQ5OC0xLjAzMy0yLjQ1OSAxLjgzMi03LjM5OSAyLjgxLTE1LjEzNiAyLjgxLTIzLjEwMnMtLjk3Ny0xNS43MDItMi44MS0yMy4xMDFjLS4yMzgtLjk2MS4xNzYtMS45NjQgMS4wMzMtMi40NTlsMTcuMjItOS45NDJjNC4wMzMtMi4zMjggNS40MTQtNy40ODUgMy4wODYtMTEuNTE3bC0xNi40NTMtMjguNDk4Yy0yLjMyOC00LjAzMy03LjQ4NS01LjQxNC0xMS41MTctMy4wODZsLTE3LjIzNSA5Ljk1MWMtLjg1OC40OTYtMS45MzQuMzUyLTIuNjQ3LS4zMzUtMTEuMDk3LTEwLjY5Ny0yNC43NjktMTguNzM4LTM5Ljk5NC0yMy4xMS0uOTUyLS4yNzQtMS42MTUtMS4xMzQtMS42MTUtMi4xMjR2LTE5Ljg4NGMwLTQuNjU3LTMuNzc1LTguNDMxLTguNDMyLTguNDMxaC0zMi45MDZjLTQuNjU2IDAtOC40MzEgMy43NzUtOC40MzEgOC40MzF2MTkuODgzYzAgLjk5MS0uNjYzIDEuODUxLTEuNjE1IDIuMTI0LTE1LjIyNSA0LjM3Mi0yOC44OTcgMTIuNDEzLTM5Ljk5NCAyMy4xMS0uNzEzLjY4OC0xLjc4OS44MzEtMi42NDcuMzM1bC0xNy4yMzUtOS45NTFjLTQuMDMzLTIuMzI4LTkuMTg5LS45NDctMTEuNTE4IDMuMDg2bC0xNi40NTUgMjguNDk5Yy0yLjMyOCA0LjAzMy0uOTQ2IDkuMTg5IDMuMDg2IDExLjUxOGwxNy4yMiA5Ljk0MWMuODU4LjQ5NSAxLjI3MiAxLjQ5OCAxLjAzNCAyLjQ1OS0xLjgzMyA3LjM5OS0yLjgxIDE1LjEzNi0yLjgxIDIzLjEwMSAwIDcuOTY2Ljk3NyAxNS43MDIgMi44MSAyMy4xMDIuMjM4Ljk2MS0uMTc2IDEuOTY0LTEuMDM0IDIuNDU5bC0xNy4yMiA5Ljk0MWMtNC4wMzIgMi4zMjgtNS40MTQgNy40ODUtMy4wODYgMTEuNTE4bDE2LjQ1MyAyOC40OThjMi4zMjggNC4wMzMgNy40ODUgNS40MTQgMTEuNTE4IDMuMDg2bDE3LjIzNS05Ljk1MWMuODU4LS40OTYgMS45MzQtLjM1MiAyLjY0Ny4zMzUgMTEuMDk3IDEwLjY5NyAyNC43NjkgMTguNzM4IDM5Ljk5NCAyMy4xMS45NTIuMjczIDEuNjE1IDEuMTM0IDEuNjE1IDIuMTI0djE5Ljg4M2MwIDQuNjU3IDMuNzc1IDguNDMxIDguNDMxIDguNDMxaDMyLjkwNmM0LjY1NyAwIDguNDMyLTMuNzc1IDguNDMyLTguNDMxdi0xOS44ODNjMC0uOTkxLjY2My0xLjg1MSAxLjYxNi0yLjEyNCAxNS4yMjQtNC4zNzIgMjguODk3LTEyLjQxMyAzOS45OTMtMjMuMTEuNzEzLS42ODggMS43ODktLjgzMSAyLjY0Ny0uMzM1bDE3LjIzNSA5Ljk1MWM0LjAzMiAyLjMyOCA5LjE4OS45NDYgMTEuNTE3LTMuMDg2bDE2LjQ1My0yOC40OThjMi4zMy00LjAzMy45NDgtOS4xODktMy4wODUtMTEuNTE4em0tMTExLjI2IDIxLjA1NGMtMzEuMjM1IDAtNTYuNTU2LTI1LjMyMS01Ni41NTYtNTYuNTU2czI1LjMyMS01Ni41NTYgNTYuNTU2LTU2LjU1NiA1Ni41NTUgMjUuMzIxIDU2LjU1NSA1Ni41NTYtMjUuMzIgNTYuNTU2LTU2LjU1NSA1Ni41NTZ6IiBmaWxsPSIjNmM3ZmQ5Ii8+PHBhdGggZD0ibTI5Mi41ODMgMTgxLjk5OWMtMi4zMjgtNC4wMzMtLjk0Ni05LjE4OSAzLjA4Ni0xMS41MThsMTcuMjItOS45NDFjLjg1OC0uNDk1IDEuMjcyLTEuNDk4IDEuMDM0LTIuNDU5LTEuODMzLTcuMzk5LTIuODEtMTUuMTM2LTIuODEtMjMuMTAycy45NzctMTUuNzAyIDIuODEtMjMuMTAxYy4yMzgtLjk2MS0uMTc2LTEuOTY0LTEuMDM0LTIuNDU5bC0xNy4yMi05Ljk0MWMtNC4wMzItMi4zMjktNS40MTQtNy40ODUtMy4wODYtMTEuNTE4bDEyLjMzMS0yMS4zNTljLS4yOTgtLjAzMi0uNTkyLS4xMTgtLjg2NC0uMjc1bC0xNy4yMzUtOS45NTFjLTQuMDMzLTIuMzI4LTkuMTg5LS45NDctMTEuNTE4IDMuMDg2bC0xNi40NTMgMjguNDk5Yy0yLjMyOCA0LjAzMy0uOTQ2IDkuMTg5IDMuMDg2IDExLjUxOGwxNy4yMiA5Ljk0MWMuODU4LjQ5NSAxLjI3MiAxLjQ5OCAxLjAzNCAyLjQ1OS0xLjgzMyA3LjM5OS0yLjgxIDE1LjEzNi0yLjgxIDIzLjEwMSAwIDcuOTY2Ljk3NyAxNS43MDIgMi44MSAyMy4xMDIuMjM4Ljk2MS0uMTc2IDEuOTY0LTEuMDM0IDIuNDU5bC0xNy4yMiA5Ljk0MWMtNC4wMzIgMi4zMjgtNS40MTQgNy40ODUtMy4wODYgMTEuNTE4bDE2LjQ1MyAyOC40OThjMi4zMjggNC4wMzMgNy40ODUgNS40MTQgMTEuNTE4IDMuMDg2bDE3LjIzNS05Ljk1MWMuMjcyLS4xNTcuNTY3LS4yNDMuODY0LS4yNzV6IiBmaWxsPSIjNGY2NmQxIi8+PHBhdGggZD0ibTIzMi42MjkgOTguNTM5LTEwLjczNi02LjE5OWMtLjUzNS0uMzA5LS43OTMtLjkzNC0uNjQ0LTEuNTMzIDEuMTQyLTQuNjEzIDEuNzUxLTkuNDM3IDEuNzUxLTE0LjQwNHMtLjYxLTkuNzkxLTEuNzUyLTE0LjQwNGMtLjE0OS0uNTk5LjEwOS0xLjIyNC42NDQtMS41MzNsMTAuNzM2LTYuMTk5YzIuNTE1LTEuNDUyIDMuMzc2LTQuNjY3IDEuOTI0LTcuMTgxbC0xMC4yNTktMTcuNzY5Yy0xLjQ1Mi0yLjUxNC00LjY2Ny0zLjM3Ni03LjE4MS0xLjkyNGwtMTAuNzQ2IDYuMjA0Yy0uNTM1LjMwOS0xLjIwNi4yMi0xLjY1MS0uMjA5LTYuOTE5LTYuNjctMTUuNDQ0LTExLjY4My0yNC45MzctMTQuNDA5LS41OTQtLjE3MS0xLjAwNy0uNzA3LTEuMDA3LTEuMzI1di0xMi4zOTdjMC0yLjkwMy0yLjM1NC01LjI1Ny01LjI1Ny01LjI1N2gtMjAuNTE3Yy0yLjkwMyAwLTUuMjU3IDIuMzU0LTUuMjU3IDUuMjU3djEyLjM5N2MwIC42MTgtLjQxMyAxLjE1NC0xLjAwNyAxLjMyNS05LjQ5MyAyLjcyNi0xOC4wMTggNy43NC0yNC45MzcgMTQuNDA5LS40NDUuNDI5LTEuMTE2LjUxOC0xLjY1MS4yMDlsLTEwLjc0NS02LjIwNGMtMi41MTUtMS40NTItNS43My0uNTktNy4xODEgMS45MjRsLTEwLjI1OSAxNy43NjljLTEuNDUyIDIuNTE0LS41OSA1LjczIDEuOTI0IDcuMTgxbDEwLjczNiA2LjE5OWMuNTM1LjMwOS43OTMuOTM0LjY0NSAxLjUzMy0xLjE0MyA0LjYxMy0xLjc1MiA5LjQzNy0xLjc1MiAxNC40MDRzLjYwOSA5Ljc5IDEuNzUyIDE0LjQwNGMuMTQ4LjU5OS0uMTEgMS4yMjQtLjY0NSAxLjUzM2wtMTAuNzM2IDYuMTk5Yy0yLjUxNCAxLjQ1Mi0zLjM3NiA0LjY2Ny0xLjkyNCA3LjE4MWwxMC4yNTkgMTcuNzY5YzEuNDUxIDIuNTE0IDQuNjY3IDMuMzc2IDcuMTgxIDEuOTI0bDEwLjc0Ni02LjIwNGMuNTM1LS4zMDkgMS4yMDYtLjIyIDEuNjUxLjIwOSA2LjkxOSA2LjY3IDE1LjQ0NCAxMS42ODMgMjQuOTM3IDE0LjQwOS41OTQuMTcgMS4wMDcuNzA3IDEuMDA3IDEuMzI1djEyLjM5N2MwIDIuOTAzIDIuMzU0IDUuMjU3IDUuMjU3IDUuMjU3aDIwLjUxN2MyLjkwMyAwIDUuMjU3LTIuMzU0IDUuMjU3LTUuMjU3di0xMi4zOTdjMC0uNjE4LjQxMy0xLjE1NCAxLjAwNy0xLjMyNSA5LjQ5My0yLjcyNiAxOC4wMTgtNy43MzkgMjQuOTM3LTE0LjQwOS40NDUtLjQyOSAxLjExNi0uNTE4IDEuNjUxLS4yMDlsMTAuNzQ2IDYuMjA0YzIuNTE0IDEuNDUyIDUuNzI5LjU5IDcuMTgxLTEuOTI0bDEwLjI1OS0xNy43NjljMS40NTItMi41MTQuNTkxLTUuNzI5LTEuOTI0LTcuMTgxem0tNjkuMzcyIDcuODg1Yy0xNi41OCAwLTMwLjAyLTEzLjQ0MS0zMC4wMi0zMC4wMiAwLTE2LjU4IDEzLjQ0MS0zMC4wMiAzMC4wMi0zMC4wMnMzMC4wMiAxMy40NDEgMzAuMDIgMzAuMDItMTMuNDQxIDMwLjAyLTMwLjAyIDMwLjAyeiIgZmlsbD0iIzZjN2ZkOSIvPjxwYXRoIGQ9Im0xMTUuMDU0IDEwNS43MjFjLTEuNDUyLTIuNTE1LS41OS01LjcyOSAxLjkyNC03LjE4MWwxMC43MzYtNi4xOTljLjUzNS0uMzA5Ljc5My0uOTM0LjY0NS0xLjUzMy0xLjE0My00LjYxNC0xLjc1Mi05LjQzOC0xLjc1Mi0xNC40MDQgMC00Ljk2Ny42MDktOS43OSAxLjc1Mi0xNC40MDQuMTQ4LS41OTktLjExLTEuMjI0LS42NDUtMS41MzNsLTEwLjczNi02LjE5OWMtMi41MTQtMS40NTItMy4zNzYtNC42NjctMS45MjQtNy4xODFsOS4xOTEtMTUuOTE5Yy0uODM0LjcyLTEuNjU0IDEuNDU3LTIuNDQ3IDIuMjIxLS40NDUuNDI5LTEuMTE2LjUxOC0xLjY1MS4yMDlsLTEwLjc0Ny02LjIwNWMtMi41MTUtMS40NTItNS43My0uNTktNy4xODEgMS45MjRsLTEwLjI1OSAxNy43NjljLTEuNDUyIDIuNTE0LS41OSA1LjczIDEuOTI0IDcuMTgxbDEwLjczNiA2LjE5OWMuNTM1LjMwOS43OTMuOTM0LjY0NSAxLjUzMy0xLjE0MyA0LjYxMy0xLjc1MiA5LjQzNy0xLjc1MiAxNC40MDRzLjYwOSA5Ljc5IDEuNzUyIDE0LjQwNGMuMTQ4LjU5OS0uMTEgMS4yMjQtLjY0NSAxLjUzM2wtMTAuNzM2IDYuMTk5Yy0yLjUxNCAxLjQ1Mi0zLjM3NiA0LjY2Ny0xLjkyNCA3LjE4MWwxMC4yNTkgMTcuNzY5YzEuNDUxIDIuNTE0IDQuNjY3IDMuMzc2IDcuMTgxIDEuOTI0bDEwLjc0Ni02LjIwNGMuNTM1LS4zMDkgMS4yMDYtLjIyIDEuNjUxLjIwOS43OTMuNzY1IDEuNjEzIDEuNTAxIDIuNDQ3IDIuMjIxeiIgZmlsbD0iIzRmNjZkMSIvPjxwYXRoIGQ9Im0zMzMuNjA0IDM5Mi44OTktMjMuNTYzLTEzLjYwNGMtMS4xNzQtLjY3OC0xLjc0LTIuMDUtMS40MTQtMy4zNjUgMi41MDgtMTAuMTI1IDMuODQ1LTIwLjcxMyAzLjg0NS0zMS42MTNzLTEuMzM4LTIxLjQ4Ny0zLjg0NS0zMS42MTJjLS4zMjYtMS4zMTUuMjQxLTIuNjg3IDEuNDE0LTMuMzY1bDIzLjU2NC0xMy42MDVjNS41MTgtMy4xODYgNy40MDktMTAuMjQyIDQuMjIzLTE1Ljc2bC0yMi41MTUtMzguOTk3Yy0zLjE4Ni01LjUxOS0xMC4yNDItNy40MDktMTUuNzYxLTQuMjIzbC0yMy41ODUgMTMuNjE3Yy0xLjE3NC42NzgtMi42NDcuNDgyLTMuNjIzLS40NTktMTUuMTg1LTE0LjYzOS0zMy44OTUtMjUuNjQxLTU0LjcyOC0zMS42MjQtMS4zMDMtLjM3NC0yLjIxMS0xLjU1MS0yLjIxMS0yLjkwN3YtMjcuMjA3YzAtNi4zNzItNS4xNjYtMTEuNTM4LTExLjUzOC0xMS41MzhoLTQ1LjAyOWMtNi4zNzIgMC0xMS41MzggNS4xNjUtMTEuNTM4IDExLjUzOHYyNy4yMDdjMCAxLjM1Ni0uOTA3IDIuNTMzLTIuMjExIDIuOTA3LTIwLjgzNCA1Ljk4My0zOS41NDMgMTYuOTg2LTU0LjcyOCAzMS42MjQtLjk3Ni45NDEtMi40NDkgMS4xMzctMy42MjMuNDU5bC0yMy41ODUtMTMuNjE3Yy01LjUxOC0zLjE4Ni0xMi41NzUtMS4yOTUtMTUuNzYxIDQuMjIzbC0yMi41MTUgMzguOTk3Yy0zLjE4NiA1LjUxOC0xLjI5NSAxMi41NzUgNC4yMjMgMTUuNzYxbDIzLjU2MyAxMy42MDRjMS4xNzQuNjc4IDEuNzQgMi4wNSAxLjQxNSAzLjM2NS0yLjUwOCAxMC4xMjYtMy44NDUgMjAuNzEyLTMuODQ1IDMxLjYxMnMxLjMzNyAyMS40ODcgMy44NDUgMzEuNjEzYy4zMjYgMS4zMTUtLjI0MSAyLjY4Ny0xLjQxNSAzLjM2NWwtMjMuNTYzIDEzLjYwNGMtNS41MTggMy4xODYtNy40MDkgMTAuMjQyLTQuMjIzIDE1Ljc2MWwyMi41MTUgMzguOTk3YzMuMTg2IDUuNTE4IDEwLjI0MiA3LjQwOSAxNS43NjEgNC4yMjNsMjMuNTg1LTEzLjYxN2MxLjE3NC0uNjc4IDIuNjQ3LS40ODIgMy42MjMuNDU5IDE1LjE4NSAxNC42MzkgMzMuODk0IDI1LjY0MSA1NC43MjggMzEuNjI0IDEuMzA0LjM3NCAyLjIxMSAxLjU1MSAyLjIxMSAyLjkwN3YyNy4yMDdjMCA2LjM3MiA1LjE2NiAxMS41MzggMTEuNTM4IDExLjUzOGg0NS4wMjljNi4zNzIgMCAxMS41MzgtNS4xNjUgMTEuNTM4LTExLjUzOHYtMjcuMjA3YzAtMS4zNTYuOTA3LTIuNTMzIDIuMjExLTIuOTA3IDIwLjgzNC01Ljk4MyAzOS41NDMtMTYuOTg2IDU0LjcyOC0zMS42MjQuOTc2LS45NDEgMi40NDgtMS4xMzcgMy42MjMtLjQ1OWwyMy41ODUgMTMuNjE3YzUuNTE4IDMuMTg2IDEyLjU3NSAxLjI5NSAxNS43NjEtNC4yMjNsMjIuNTE1LTM4Ljk5N2MzLjE4Ni01LjUxOCAxLjI5NS0xMi41NzQtNC4yMjQtMTUuNzYxem0tMTUxLjcyNSAyLjkyOGMtMjguNDQ4IDAtNTEuNTA5LTIzLjA2MS01MS41MDktNTEuNTA5czIzLjA2MS01MS41MDkgNTEuNTA5LTUxLjUwOWMyOC40NDcgMCA1MS41MDkgMjMuMDYxIDUxLjUwOSA1MS41MDkgMCAyOC40NDctMjMuMDYxIDUxLjUwOS01MS41MDkgNTEuNTA5eiIgZmlsbD0iIzZjN2ZkOSIvPjxwYXRoIGQ9Im02MS43MDggNDA4LjY2Yy0zLjE4Ni01LjUxOS0xLjI5NS0xMi41NzUgNC4yMjMtMTUuNzYxbDIzLjU2My0xMy42MDRjMS4xNzQtLjY3OCAxLjc0LTIuMDUgMS40MTUtMy4zNjUtMi41MDgtMTAuMTI1LTMuODQ1LTIwLjcxMy0zLjg0NS0zMS42MTNzMS4zMzctMjEuNDg3IDMuODQ1LTMxLjYxMmMuMzI2LTEuMzE1LS4yNDEtMi42ODctMS40MTUtMy4zNjVsLTIzLjU2My0xMy42MDRjLTUuNTE4LTMuMTg2LTcuNDA5LTEwLjI0My00LjIyMy0xNS43NjFsMTkuMDc2LTMzLjA0Mi0xNy42My0xMC4xNzljLTUuNTE4LTMuMTg2LTEyLjU3NS0xLjI5NS0xNS43NjEgNC4yMjNsLTIyLjUxNSAzOC45OTdjLTMuMTg2IDUuNTE4LTEuMjk1IDEyLjU3NSA0LjIyMyAxNS43NjFsMjMuNTYzIDEzLjYwNGMxLjE3NC42NzggMS43NCAyLjA1IDEuNDE1IDMuMzY1LTIuNTA4IDEwLjEyNi0zLjg0NSAyMC43MTItMy44NDUgMzEuNjEyczEuMzM3IDIxLjQ4NyAzLjg0NSAzMS42MTNjLjMyNiAxLjMxNS0uMjQxIDIuNjg3LTEuNDE1IDMuMzY1bC0yMy41NjMgMTMuNjA0Yy01LjUxOCAzLjE4Ni03LjQwOSAxMC4yNDItNC4yMjMgMTUuNzYxbDIyLjUxNSAzOC45OTdjMy4xODYgNS41MTggMTAuMjQyIDcuNDA5IDE1Ljc2MSA0LjIyM2wxNy42My0xMC4xNzl6IiBmaWxsPSIjNGY2NmQxIi8+PHBhdGggZD0ibTE4MS4zNTMgMjY2LjkyNmMtNDIuNzQyIDAtNzcuMzkyIDM0LjY1LTc3LjM5MiA3Ny4zOTJzMzQuNjQ5IDc3LjM5MiA3Ny4zOTIgNzcuMzkyYzQyLjc0MiAwIDc3LjM5Mi0zNC42NDkgNzcuMzkyLTc3LjM5MnMtMzQuNjQ5LTc3LjM5Mi03Ny4zOTItNzcuMzkyem0wIDEyNC4yODljLTI1LjkgMC00Ni44OTctMjAuOTk2LTQ2Ljg5Ny00Ni44OTdzMjAuOTk2LTQ2Ljg5NyA0Ni44OTctNDYuODk3IDQ2Ljg5NyAyMC45OTYgNDYuODk3IDQ2Ljg5Ny0yMC45OTYgNDYuODk3LTQ2Ljg5NyA0Ni44OTd6IiBmaWxsPSIjNGY2NmQxIi8+PHBhdGggZD0ibTEzNS4xMTMgMzUyLjEwN2MtLjQyNC0yLjUzNS0uNjU2LTUuMTM1LS42NTYtNy43OXMuMjMyLTUuMjU1LjY1Ni03Ljc5YzMuMzk0LTMzLjk1MiAyOC43My02MS40MzUgNjEuNjIxLTY4LjA2OC00Ljk3MS0xLjAwMy0xMC4xMTMtMS41MzQtMTUuMzgtMS41MzQtNDIuNzQyIDAtNzcuMzkyIDM0LjY1LTc3LjM5MiA3Ny4zOTJzMzQuNjQ5IDc3LjM5MiA3Ny4zOTIgNzcuMzkyYzUuMjY3IDAgMTAuNDA5LS41MzEgMTUuMzgtMS41MzQtMzIuODkxLTYuNjMyLTU4LjIyOC0zNC4xMTUtNjEuNjIxLTY4LjA2OHoiIGZpbGw9IiMzMTRkY2EiLz48ZyBmaWxsPSIjNGY2NmQxIj48cGF0aCBkPSJtMTczLjUxNiAwaC0yMC41MTdjLTIuOTAzIDAtNS4yNTcgMi4zNTQtNS4yNTcgNS4yNTd2MTIuMzk3YzAgLjYxOC0uNDEzIDEuMTU0LTEuMDA3IDEuMzI1IDAgMCA2Ljg4Ni0xLjE3NSAyMS4zMzEtMS4zMTIgMS41MjktLjAxNCAyLjc3LTEuMjU2IDIuNzctMi43ODV2LTkuNjI1YzAtMi40NTYgMS42OTItNC41MDMgMy45NjktNS4wNzktLjQxNi0uMTA1LS44NDMtLjE3OC0xLjI4OS0uMTc4eiIvPjxwYXRoIGQ9Im0xNzAuODM0IDE0Ny41NXYtOS4xMzljMC0xLjc5My0xLjQ0My0zLjI1Ni0zLjIzNS0zLjI3My0xNS4yNTktLjE0Ny0yMC44NjUtMS4zMDktMjAuODY1LTEuMzA5LjU5NC4xNyAxLjAwNy43MDcgMS4wMDcgMS4zMjV2MTIuMzk3YzAgMi45MDMgMi4zNTQgNS4yNTcgNS4yNTcgNS4yNTdoMjAuNTE3Yy40NDcgMCAuODczLS4wNzMgMS4yODgtLjE3OC0yLjI3Ny0uNTc4LTMuOTY5LTIuNjI0LTMuOTY5LTUuMDh6Ii8+PHBhdGggZD0ibTM4OS42NDQgMTIuNDQyaC0zMi45MDZjLTQuNjU2IDAtOC40MzEgMy43NzUtOC40MzEgOC40MzF2MTkuODgzYzAgLjk5MS0uNjYzIDEuODUxLTEuNjE1IDIuMTI0IDAgMCAxMS4yOTQtMS43OTQgMzAuMTc4LTIuMDg1IDIuODY5LS4wNDQgNS4xNzYtMi4zODcgNS4xNzYtNS4yNTZ2LTE0LjY2NWMwLTQuNTE2IDMuNTUzLTguMTkyIDguMDE1LTguNDEtLjE0LS4wMDctLjI3Ny0uMDIyLS40MTctLjAyMnoiLz48cGF0aCBkPSJtMzgyLjA0NSAyNDkuMDg1di0xNC44NzFjMC0yLjc1MS0yLjItNS4wMDctNC45NTEtNS4wNTUtMTcuMjc5LS4zMDQtMzAuNDAzLTIuMDgtMzAuNDAzLTIuMDguOTUyLjI3MyAxLjYxNSAxLjEzNCAxLjYxNSAyLjEyNHYxOS44ODNjMCA0LjY1NiAzLjc3NSA4LjQzMSA4LjQzMSA4LjQzMWgzMi45MDZjLjE0MSAwIC4yNzctLjAxNC40MTYtLjAyMS00LjQ2MS0uMjE5LTguMDE0LTMuODk1LTguMDE0LTguNDExeiIvPjxwYXRoIGQ9Im0xNTguODM5IDE3Ni42MzZjLTYuMzcyIDAtMTEuNTM4IDUuMTY2LTExLjUzOCAxMS41Mzh2MjcuMjA3YzAgMS4zNTYtLjkwNyAyLjUzMy0yLjIxMSAyLjkwNyAwIDAgMTIuNDc0LTIuNDM3IDMzLjEyMi0yLjg0OSAzLjI4Mi0uMDY1IDUuOTE4LTIuNzM3IDUuOTE4LTYuMDJ2LTIxLjI0NmMwLTYuMzcyIDUuMTY2LTExLjUzOCAxMS41MzgtMTEuNTM4aC0zNi44Mjl6Ii8+PHBhdGggZD0ibTE4NC4xMyA1MDAuNDYydi0xOC4xODFjMC00Ljk2Mi0zLjk0Ny05LjAxMS04LjkwNi05LjE3NS0xNy44OTQtLjU5My0zMC4xMzQtMi43NTktMzAuMTM0LTIuNzU5IDEuMzA0LjM3NCAyLjIxMSAxLjU1MSAyLjIxMSAyLjkwN3YyNy4yMDdjMCA2LjM3MiA1LjE2NSAxMS41MzggMTEuNTM4IDExLjUzOGgzNi44MjljLTYuMzcyLjAwMS0xMS41MzgtNS4xNjQtMTEuNTM4LTExLjUzN3oiLz48L2c+PC9zdmc+" style="width:2.5rem;">
    </a>
  </div>
</body>
<script>
  var Socket;

  function init() {
    Socket = new WebSocket('ws://' + window.location.hostname + ':81/');
    Socket.onmessage = function(event) { processReceivedCommand(event); };
  }


  function processReceivedCommand(evt) {
    document.getElementById('rd').innerHTML = evt.data;
    if (evt.data === '0') {
      document.getElementById('state').innerHTML = 'O F F';
      document.getElementById('circl').style.stroke = '#F583AE';
    }
    if (evt.data === '1') {
      document.getElementById('state').innerHTML = 'O N';
      document.getElementById('circl').style.stroke = '#2BAAFF';
    }
  }


  document.getElementById('switch').addEventListener('click', buttonToggle);

  function buttonToggle() {
    var btn = document.getElementById('switch')
    sendText('t');
  }

  function sendText(data) {
    Socket.send(data);
  }


  window.onload = function(e) {
    init();
  }
</script>

</html>
)=====";
