
# Python Networking and API Usage Project


## Table of Contents

- [Project Description](#project-description)
- [Tasks](#tasks)
- [Requirements](#requirements)
- [Usage](#usage)
- [License](#license)

## Project Description

This project is part of the curriculum at Holberton School and focuses on Python networking and API usage. The project consists of several Python scripts that perform various tasks related to making HTTP requests, handling responses, and interacting with web APIs.

## Tasks

The project consists of several tasks, each focusing on specific aspects of Python networking and API usage:

1. **What's my status?**
   - Fetches the status from a URL using the `urllib` package and displays the response body.

2. **Response header value**
   - Sends a request to a URL and displays the value of the `X-Request-Id` variable found in the response header using `urllib`.

3. **POST an email**
   - Takes a URL and an email as parameters, sends a POST request to the specified URL with the email as a parameter, and displays the response body (decoded in utf-8).

4. **Error code**
   - Sends a request to a URL, displays the body of the response (decoded in utf-8), and handles `urllib.error.HTTPError` exceptions by printing the HTTP status code.

5. **What's my status? #1**
   - Fetches the status from a URL using the `requests` package and displays the response body.

6. **Response header value #1**
   - Sends a request to a URL and displays the value of the `X-Request-Id` variable in the response header using the `requests` package.

7. **POST an email #1**
   - Takes a URL and an email address as parameters, sends a POST request to the specified URL with the email as a parameter, and displays the response body.

8. **Error code #1**
   - Sends a request to a URL, displays the body of the response, and if the HTTP status code is greater than or equal to 400, prints an error message.

9. **Search API**
   - Takes a letter as input, sends a POST request to a specified URL with the letter as a parameter, and displays the results or specific messages depending on the response.

10. **My GitHub!**
    - Takes GitHub credentials (username and personal access token) and uses the GitHub API with Basic Authentication to display the user's ID.

## Requirements

- Python 3.8.5 or higher
- Ubuntu 20.04 LTS
- `pycodestyle` version 2.8.* for code style checks

## Usage

To run each script, use the following format:

```bash
$ ./script_name.py [arguments]

