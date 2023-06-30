#!/usr/bin/python3
"""fetches status."""
import requests


if __name__ == "__main__":
    r = requests.get("/status")
    print("Body response:")
    print("\t- type: {}".format(type(r.text)))
    print("\t- content: {}".format(r.text))
