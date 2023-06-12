#!/usr/bin/python3
"""Defines an inherited list class MyList."""

class MList(list):
    """Implements sorted printing for the built_in list class."""
    def print_sorted(self):
        """Print a list in sorted ascending order."""
        print(sorted(self))
