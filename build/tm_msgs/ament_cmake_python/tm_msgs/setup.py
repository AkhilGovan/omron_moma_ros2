from setuptools import find_packages
from setuptools import setup

setup(
    name='tm_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('tm_msgs', 'tm_msgs.*')),
)
